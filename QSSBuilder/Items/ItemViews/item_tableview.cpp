#include "item_tableview.h"
#include "ui_item_tableview.h"

Item_TableView::Item_TableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TableView)
{
    ui->setupUi(this);
}

Item_TableView::~Item_TableView()
{
    delete ui;
}
