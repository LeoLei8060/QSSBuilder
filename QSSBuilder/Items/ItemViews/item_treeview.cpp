#include "item_treeview.h"
#include "ui_item_treeview.h"

Item_TreeView::Item_TreeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TreeView)
{
    ui->setupUi(this);
}

Item_TreeView::~Item_TreeView()
{
    delete ui;
}
