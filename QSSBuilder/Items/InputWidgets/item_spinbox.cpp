#include "item_spinbox.h"
#include "ui_item_spinbox.h"

Item_SpinBox::Item_SpinBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_SpinBox)
{
    ui->setupUi(this);
}

Item_SpinBox::~Item_SpinBox()
{
    delete ui;
}
