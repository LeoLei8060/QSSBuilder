#include "item_tablewidget.h"
#include "ui_item_tablewidget.h"

Item_TableWidget::Item_TableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TableWidget)
{
    ui->setupUi(this);
}

Item_TableWidget::~Item_TableWidget()
{
    delete ui;
}
