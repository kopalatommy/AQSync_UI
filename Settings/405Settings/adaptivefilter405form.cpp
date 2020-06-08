#include "adaptivefilter405form.h"
#include "ui_adaptivefilter405form.h"

AdaptiveFilter405Form::AdaptiveFilter405Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdaptiveFilter405Form)
{
    ui->setupUi(this);
}

AdaptiveFilter405Form::~AdaptiveFilter405Form()
{
    delete ui;
}
