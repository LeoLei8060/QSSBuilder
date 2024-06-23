#include "item_verticalline.h"
#include "ui_item_verticalline.h"

Item_VerticalLine::Item_VerticalLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_VerticalLine)
{
    ui->setupUi(this);
}

Item_VerticalLine::~Item_VerticalLine()
{
    delete ui;
}
