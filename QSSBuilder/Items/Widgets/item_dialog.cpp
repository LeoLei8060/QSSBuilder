#include "item_dialog.h"
#include "ui_item_dialog.h"

Item_Dialog::Item_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Dialog)
{
    ui->setupUi(this);
}

Item_Dialog::~Item_Dialog()
{
    delete ui;
}
