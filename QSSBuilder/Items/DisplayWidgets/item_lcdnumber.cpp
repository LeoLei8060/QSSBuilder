#include "item_lcdnumber.h"
#include "ui_item_lcdnumber.h"

Item_LCDNumber::Item_LCDNumber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_LCDNumber)
{
    ui->setupUi(this);
}

Item_LCDNumber::~Item_LCDNumber()
{
    delete ui;
}
