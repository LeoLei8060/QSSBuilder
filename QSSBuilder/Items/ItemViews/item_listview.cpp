#include "item_listview.h"
#include "ui_item_listview.h"

Item_ListView::Item_ListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ListView)
{
    ui->setupUi(this);
}

Item_ListView::~Item_ListView()
{
    delete ui;
}
