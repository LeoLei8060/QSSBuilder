#include "item_radiobutton.h"
#include "ui_item_radiobutton.h"

Item_RadioButton::Item_RadioButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_RadioButton)
{
    ui->setupUi(this);
}

Item_RadioButton::~Item_RadioButton()
{
    delete ui;
}
