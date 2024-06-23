#include "item_combobox.h"
#include "ui_item_combobox.h"

Item_ComboBox::Item_ComboBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ComboBox)
{
    ui->setupUi(this);
}

Item_ComboBox::~Item_ComboBox()
{
    delete ui;
}
