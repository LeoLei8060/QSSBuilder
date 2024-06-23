#include "item_treewidget.h"
#include "ui_item_treewidget.h"

Item_TreeWidget::Item_TreeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TreeWidget)
{
    ui->setupUi(this);
}

Item_TreeWidget::~Item_TreeWidget()
{
    delete ui;
}
