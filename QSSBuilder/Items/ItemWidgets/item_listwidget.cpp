#include "item_listwidget.h"
#include "ui_item_listwidget.h"

Item_ListWidget::Item_ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ListWidget)
{
    ui->setupUi(this);
}

Item_ListWidget::~Item_ListWidget()
{
    delete ui;
}
