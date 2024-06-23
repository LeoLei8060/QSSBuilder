#include "item_stackedwidget.h"
#include "ui_item_stackedwidget.h"

Item_StackedWidget::Item_StackedWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_StackedWidget)
{
    ui->setupUi(this);
}

Item_StackedWidget::~Item_StackedWidget()
{
    delete ui;
}
