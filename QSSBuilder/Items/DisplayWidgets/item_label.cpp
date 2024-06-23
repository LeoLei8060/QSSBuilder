#include "item_label.h"
#include "ui_item_label.h"

Item_Label::Item_Label(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Label)
{
    ui->setupUi(this);
}

Item_Label::~Item_Label()
{
    delete ui;
}
