#include "item_dial.h"
#include "ui_item_dial.h"

Item_Dial::Item_Dial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Dial)
{
    ui->setupUi(this);
}

Item_Dial::~Item_Dial()
{
    delete ui;
}
