#include "item_fontcombobox.h"
#include "ui_item_fontcombobox.h"

Item_FontComboBox::Item_FontComboBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_FontComboBox)
{
    ui->setupUi(this);
}

Item_FontComboBox::~Item_FontComboBox()
{
    delete ui;
}
