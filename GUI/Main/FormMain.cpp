#include "FormMain.h"
#include "ui_FormMain.h"

FormMain::FormMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormMain)
{
    ui->setupUi(this);
}

FormMain::~FormMain()
{
    delete ui;
}

