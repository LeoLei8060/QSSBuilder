#include "item_doublespinbox.h"
#include "ui_item_doublespinbox.h"

Item_DoubleSpinBox::Item_DoubleSpinBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_DoubleSpinBox)
{
    ui->setupUi(this);
}

Item_DoubleSpinBox::~Item_DoubleSpinBox()
{
    delete ui;
}
