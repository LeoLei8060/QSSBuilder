#include "item_widget.h"
#include "ui_item_widget.h"

Item_Widget::Item_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Widget)
{
    ui->setupUi(this);
}

Item_Widget::~Item_Widget()
{
    delete ui;
}
