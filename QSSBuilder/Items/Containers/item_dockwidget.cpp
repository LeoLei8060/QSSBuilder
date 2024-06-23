#include "item_dockwidget.h"
#include "ui_item_dockwidget.h"

Item_DockWidget::Item_DockWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_DockWidget)
{
    ui->setupUi(this);
}

Item_DockWidget::~Item_DockWidget()
{
    delete ui;
}
