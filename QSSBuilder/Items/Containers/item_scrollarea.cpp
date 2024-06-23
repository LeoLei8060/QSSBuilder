#include "item_scrollarea.h"
#include "ui_item_scrollarea.h"

Item_ScrollArea::Item_ScrollArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ScrollArea)
{
    ui->setupUi(this);
}

Item_ScrollArea::~Item_ScrollArea()
{
    delete ui;
}
