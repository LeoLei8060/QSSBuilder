#include "item_groupbox.h"
#include "ui_item_groupbox.h"

Item_GroupBox::Item_GroupBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_GroupBox)
{
    ui->setupUi(this);
}

Item_GroupBox::~Item_GroupBox()
{
    delete ui;
}
