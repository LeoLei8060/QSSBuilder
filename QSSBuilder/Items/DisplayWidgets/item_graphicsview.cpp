#include "item_graphicsview.h"
#include "ui_item_graphicsview.h"

Item_GraphicsView::Item_GraphicsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_GraphicsView)
{
    ui->setupUi(this);
}

Item_GraphicsView::~Item_GraphicsView()
{
    delete ui;
}
