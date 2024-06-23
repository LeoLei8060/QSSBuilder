#include "item_tabwidget.h"
#include "ui_item_tabwidget.h"

Item_TabWidget::Item_TabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TabWidget)
{
    ui->setupUi(this);
}

Item_TabWidget::~Item_TabWidget()
{
    delete ui;
}
