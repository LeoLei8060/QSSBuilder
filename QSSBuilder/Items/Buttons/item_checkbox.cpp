#include "item_checkbox.h"
#include "ui_item_checkbox.h"

Item_CheckBox::Item_CheckBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_CheckBox)
{
    ui->setupUi(this);
}

Item_CheckBox::~Item_CheckBox()
{
    delete ui;
}
