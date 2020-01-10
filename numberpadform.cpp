#include "numberpadform.h"
#include "ui_numberpadform.h"

NumberPadForm::NumberPadForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NumberPadForm)
{
    ui->setupUi(this);

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
}

NumberPadForm::~NumberPadForm(){
    delete ui;
}

NumberPadForm * NumberPadForm::instance = nullptr;
NumberPadForm * NumberPadForm::GetInstance(){
    if(instance == nullptr) instance = new NumberPadForm();
    return instance;
}

void NumberPadForm::SetInitialValues(Types t, double _min, double _max, QWidget * _parentWindow){
    QString str = "";

    currentType = t;
    min = _min;
    max = _max;

    parentWindow = _parentWindow;

    if(currentType == Types::IPAddress){
        numDecimals = 0;
        charIndex = 0;
    }

    memset(arr, 0, 20);
    if(currentType != Types::floatV && currentType != Types::doubleV){
        sprintf(arr, "%1.0f", min);
        str.append(arr).append(" to ");
        memset(arr, 0, 20);
        sprintf(arr, "%1.0f", max);
        str.append(arr);
    }else{
        sprintf(arr, "%1.2f", min);
        str.append(arr).append(" to ");
        memset(arr, 0, 20);
        sprintf(arr, "%1.2f", max);
        str.append(arr);
    }
    ui->rangeLabel->setText(str);

    SetInitial();

    parentWindow->setHidden(true);
    setHidden(false);
}

void NumberPadForm::SetInitial(){
    memset(arr, 0, 20);
    arr[0] = '0';
    length = 0;
    isNegative = false;
    hasDecimal = false;
    ui->text->setText(arr);
}

void NumberPadForm::on_back_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length > 0){
            arr[length - 1] = 0;
            length--;
            if(length == 0){
                arr[0] = '0';
            }
        }
        break;
    case doubleV:
    case floatV:
        if(length > 0){
            if(arr[length - 1] == '.') hasDecimal = false;
            arr[length - 1] = 0;
            length--;
            if(length == 0) arr[0] = '0';
        }
        break;
    case IPAddress:
        if(length > 0){
            if(arr[length - 1] == '.'){
                numDecimals--;
                charIndex = 3;
            }
            arr[length - 1] = 0;
            length--;
            charIndex--;
            if(length == 0) arr[0] = '0';
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_clear_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        memset(arr, 0, 15);
        arr[0] = '0';
        length = 0;
        break;
    case doubleV:
    case floatV:
        memset(arr, 0, 15);
        arr[0] = '0';
        length = 0;
        hasDecimal = false;
        break;
    case IPAddress:
        memset(arr, 0, 15);
        arr[0] = '0';
        length = 0;
        numDecimals = 0;
        charIndex = 0;
        break;
    }
    isNegative = false;
    ui->text->setText(arr);
}

void NumberPadForm::on_zero_clicked(){
    if(length == 0){
        return;
    }
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '0';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '0';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '0';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_one_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '1';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '1';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '1';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_two_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '2';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '2';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '2';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_three_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '3';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '3';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '3';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_four_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '4';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '4';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '4';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_five_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '5';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '5';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '5';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_six_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '6';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '6';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '6';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_seven_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '7';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '7';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '7';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_eight_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '8';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '8';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '8';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_nine_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
        if(length < 15){
            arr[length] = '9';
            length++;
        }
        break;
    case doubleV:
    case floatV:
        if(length < 15){
            arr[length] = '9';
            length++;
        }
        break;
    case IPAddress:
        if(charIndex > 2 && numDecimals < 3){
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        if(charIndex < 3){
            arr[length] = '9';
            length++;
            charIndex++;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_dot_clicked(){
    switch (currentType) {
    case UChar:
    case longV:
    case integer:
         break;
    case doubleV:
    case floatV:
        if(length < 15 && !hasDecimal){
            arr[length] = '.';
            length++;
            hasDecimal = true;
        }
        break;
    case IPAddress:
        if(numDecimals < 3){
            //backfillAddress();
            arr[length] = '.';
            length++;
            numDecimals++;
            charIndex = 0;
        }
        break;
    }
    ui->text->setText(arr);
}

void NumberPadForm::on_save_clicked(){
    int ti = atoi(arr);
    long tl = atol(arr);
    float tf = static_cast<float>(atof(arr));
    double td = atof(arr);
    switch (currentType){
    case integer:
        if(ti >= min && ti <= max){
            emit NewInt(ti);
            parentWindow->setHidden(false);
            this->setHidden(true);
        }else{
            ui->text->setText(QString("<font color='red'>").append(arr).append("</font>"));
        }
        break;
    case longV:
        if(tl >= min && tl <= max){
            emit NewLong(tl);
            parentWindow->setHidden(false);
            this->setHidden(true);
        }else{
            ui->text->setText(QString("<font color='red'>").append(arr).append("</font>"));
            return;
        }
        break;
    case floatV:
        if(static_cast<double>(tf) >= min && static_cast<double>(tf) <= max){
            emit NewFloat(static_cast<float>(tf));
            parentWindow->setHidden(false);
            this->setHidden(true);
        }else{
            ui->text->setText(QString("<font color='red'>").append(arr).append("</font>"));
            return;
        }
        break;
    case doubleV:
        if(td >= min && td <= max){
            emit NewDouble(td);
            parentWindow->setHidden(false);
            this->setHidden(true);
        }else{
            ui->text->setText(QString("<font color='red'>").append(arr).append("</font>"));
            return;
        }
        break;
    case UChar:
        if(ti >= min && ti <= max){
            emit NewUnsignedChar(static_cast<unsigned char>(ti));
            parentWindow->setHidden(false);
            this->setHidden(true);
        }else{
            ui->text->setText(QString("<font color='red'>").append(arr).append("</font>"));
        }
        break;
    case IPAddress:
        //backfillAddress();
        emit NewIPAddress(QString(arr));
        parentWindow->setHidden(false);
        this->setHidden(true);
        break;
    }
}

void NumberPadForm::on_cancel_clicked(){
    parentWindow->setHidden(false);
    this->setHidden(true);

    //Disconnect all connects to prevent unwanted actions
    this->disconnect();
}

void NumberPadForm::on_plus_clicked(){
    if(isNegative){
       ShiftDown();
       isNegative = false;
    }else{
        ShiftUp();
        isNegative = true;
    }
    ui->text->setText(arr);
}

void NumberPadForm::ShiftUp(){
    qDebug() << "Adding negative";
    for(int i = 14; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = '-';
    length++;
}

void NumberPadForm::ShiftDown(){
    for(int i = 0; i < 14; i++){
        arr[i] = arr[i + 1];
    }
    arr[14] = 0;
    length--;
}

void NumberPadForm::BackFillAddress(){
    char temp[4] = {'0', };
    temp[3] = 0;

    if(charIndex == 3){
        qDebug() << "Not backfilling";
        return;
    }else if(charIndex == 2){
        qDebug() << "Index = 2";
        temp[1] = arr[length - 2];
        temp[2] = arr[length - 1];
        for(int i = 0; i < 3; i++){
            for(int i = 0; i < 3; i++){
                arr[i + (4 * numDecimals)] = temp[i];
            }
            length = 3 + (4 * numDecimals);
        }
    }else if(charIndex == 1){
        qDebug() << "Index = 1";

        memset(temp, '0', 3);
        temp[3] = 0;
        temp[2] = arr[length - 1];

        for(int i = 0; i < 3; i++){
            qDebug() << "I = " << i << " : Temp: " << temp[i] << '\n';
            arr[i + (4 * numDecimals)] = temp[i];
        }
        length = 3 + (4 * numDecimals);
        qDebug() << "Arr: " << arr;
    }else{
        qDebug() << "Index = 0";
        for(int i = 0; i < 3; i++){
            for(int i = 0; i < 3; i++){
                arr[i + (4 * numDecimals)] = temp[i];
            }
            length = 3 + (4 * numDecimals);
        }
    }

    for(int i = 0; i < 3; i++){
        arr[i + (4 * numDecimals)] = temp[i];
    }
    length = 3 + (4 * numDecimals);
}

void NumberPadForm::keyPressEvent(QKeyEvent * event){
    switch (event->key()) {
    case Qt::Key::Key_0: on_zero_clicked(); break;
    case Qt::Key::Key_1: on_one_clicked(); break;
    case Qt::Key::Key_2: on_two_clicked(); break;
    case Qt::Key::Key_3: on_three_clicked(); break;
    case Qt::Key::Key_4: on_four_clicked(); break;
    case Qt::Key::Key_5: on_five_clicked(); break;
    case Qt::Key::Key_6: on_six_clicked(); break;
    case Qt::Key::Key_7: on_seven_clicked(); break;
    case Qt::Key::Key_8: on_eight_clicked(); break;
    case Qt::Key::Key_9: on_nine_clicked(); break;
    case Qt::Key::Key_Period: on_dot_clicked(); break;
    case Qt::Key::Key_Return: on_save_clicked(); break;
    case Qt::Key::Key_Enter: on_save_clicked(); break;
    case Qt::Key::Key_Backspace: on_back_clicked(); break;
    }
}
