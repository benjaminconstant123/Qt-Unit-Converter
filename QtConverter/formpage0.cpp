#include "formpage0.h"
#include "ui_formpage0.h"

FormPage0::FormPage0(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPage0)
{
    ui->setupUi(this);
}

FormPage0::~FormPage0()
{
    delete ui;
}
