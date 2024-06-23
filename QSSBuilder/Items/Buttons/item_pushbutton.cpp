#include "item_pushbutton.h"
#include "ui_item_pushbutton.h"

Item_PushButton::Item_PushButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_PushButton)
{
    ui->setupUi(this);
}

Item_PushButton::~Item_PushButton()
{
    delete ui;
}
