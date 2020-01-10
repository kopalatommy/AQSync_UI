#include "staticipform.h"
#include "ui_staticipform.h"

StaticIPForm::StaticIPForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StaticIPForm)
{
    ui->setupUi(this);

    ui->SubnetMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->GatewayMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->IPMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ReadSettingsFile();
}

StaticIPForm::~StaticIPForm()
{
    delete ui;
}

void StaticIPForm::on_IPMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewIP);
    number->SetInitialValues(NumberPadForm::Types::IPAddress, 0, 0, this);
}
void StaticIPForm::NewIP(QString newIP){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewIP);
    localStaticIP = newIP;
    UpdateUI();
}

void StaticIPForm::on_GatewayMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewGateway);
    number->SetInitialValues(NumberPadForm::Types::IPAddress, 0, 0, this);
}
void StaticIPForm::NewGateway(QString newGateway){
    qDebug() << "New gateway: " << newGateway;
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewGateway);
    localGateway = newGateway;
    UpdateUI();
}

void StaticIPForm::on_SubnetMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewSubnet);
    number->SetInitialValues(NumberPadForm::Types::IPAddress, 0, 0, this);
}
void StaticIPForm::NewSubnet(QString newSubnet){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewIPAddress, this, &StaticIPForm::NewSubnet);
    localSubnet = newSubnet;
    UpdateUI();
}

void StaticIPForm::on_applyButton_clicked(){
    if(!isStatic){
        subnet = localSubnet;
        gateway = localGateway;
        staticIP = localStaticIP;
        WriteSettingsFile();

        QProcess * process = new QProcess();
        connect(process, SIGNAL(finished(int)), this, SLOT(OnProcessFinished(int)));
        process->start("sudo /home/2b/SetStaticIP " + staticIP + " " + gateway + " " + subnet);
    }else{
        QProcess * process = new QProcess();
        connect(process, SIGNAL(finished(int)), this, SLOT(OnProcessFinished(int)));
        process->start("sudo /home/2b/ClearStaticIP");
    }
}
void StaticIPForm::OnProcessFinished(int code){
    if(code == 0){
        qDebug() << "Exited successfully";
    }else{
        qDebug() << "Failed";
    }
    sender()->deleteLater();
}

void StaticIPForm::ReadSettingsFile(){
    QFile settingsFile;
    settingsFile.setFileName(IPFileLocation);
    if(!settingsFile.exists()){
        settingsFile.setFileName(IPFileLocation_test);
    }

    if(settingsFile.exists()){
        settingsFile.open(QIODevice::ReadOnly);
        while (!settingsFile.atEnd()) {
            QString line = settingsFile.readLine();
//            qDebug() << "Read line: " << line;
            switch (line.at(0).toLatin1()) {
            case 'A':
                staticIP = line.remove(0, 1);
                if(staticIP.at(staticIP.length() - 1) == '\n') staticIP.remove(staticIP.length() - 1, 1);
                localStaticIP = staticIP;
//                qDebug() << "Read in " << StaticIP << " for static IP";
                break;
            case 'B':
                gateway = line.remove(0, 1);
                if(gateway.at(gateway.length() - 1) == '\n') gateway.remove(gateway.length() - 1, 1);
                localGateway = gateway;
//                qDebug() << "Read in " << Gateway << " for gateway";
                break;
            case 'C':
                subnet = line.remove(0, 1);
                if(subnet.at(subnet.length() - 1) == '\n') subnet.remove(subnet.length() - 1, 1);
                localSubnet = subnet;
//                qDebug() << "Read in " << subnet << " for subnet";
                break;
            case 'D':
                isStatic = line.at(1) == 'S';
                break;
            default:
                qDebug() << "Read in bad character: " << line.at(0).toLatin1();
            }
        }
    }else{
        settingsFile.open(QIODevice::WriteOnly);
        settingsFile.write(QString("A172.0.0.1\n").toStdString().c_str());
        settingsFile.write(QString("B172.0.0.1\n").toStdString().c_str());
        settingsFile.write(QString("C172.0.0.1\n").toStdString().c_str());
        settingsFile.write(QString("DF\n").toStdString().c_str());
    }
    UpdateUI();
}

void StaticIPForm::WriteSettingsFile(){
    QFile settingsFile;

    settingsFile.setFileName(IPFileLocation);
    if(!settingsFile.exists()){
        settingsFile.setFileName(IPFileLocation_test);
    }

    settingsFile.open(QIODevice::ReadWrite);
    settingsFile.write(QString('A').append(staticIP).append('\n').toStdString().c_str());
    settingsFile.write(QString('B').append(gateway).append('\n').toStdString().c_str());
    settingsFile.write(QString('C').append(subnet).append('\n').toStdString().c_str());
    settingsFile.write(QString('D').append(isStatic ? 'S' : 'F').append('\n').toStdString().c_str());
    settingsFile.close();
}

void StaticIPForm::UpdateUI(){
    ui->staticIP->setText(QString("Static IP: ").append(localStaticIP));
    ui->Gateway->setText(QString("Gateway: ").append(localGateway));
    ui->Subnet->setText(QString("Subnet mask: ").append(localSubnet));
}

void StaticIPForm::on_closeButton_clicked(){
    emit CloseForms();
}

void StaticIPForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void StaticIPForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}
