#include "filebrowserform.h"
#include "ui_filebrowserform.h"

FileBrowserForm::FileBrowserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileBrowserForm)
{
    ui->setupUi(this);

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
}

FileBrowserForm::~FileBrowserForm(){
    delete ui;
}

void FileBrowserForm::on_Cancel_clicked(){
    close();
}

void FileBrowserForm::on_Confirm_clicked(){
    if(ui->listWidget->selectedItems().count() > 0){
        qDebug() << "Selected: " << ui->listWidget->selectedItems()[0];
        emit SelectedFile(ui->listWidget->selectedItems()[0]->text());
    }
    close();
}

void FileBrowserForm::UpdateUI(){
    ui->listWidget->clear();
    QDir temp(FILE_FOLDER);
    QStringList lst = temp.entryList(QDir::Files, QDir::SortFlag::Time);
    for(int i = 0; i < lst.count(); i++){
        ui->listWidget->addItem(lst[i]);
    }
}

void FileBrowserForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    UpdateUI();
}
