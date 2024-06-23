#include "item_horizontalline.h"
#include "ui_item_horizontalline.h"

Item_HorizontalLine::Item_HorizontalLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_HorizontalLine)
{
    ui->setupUi(this);
}

Item_HorizontalLine::~Item_HorizontalLine()
{
    delete ui;
}
