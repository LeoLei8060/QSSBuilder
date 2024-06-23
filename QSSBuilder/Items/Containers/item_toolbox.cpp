#include "item_toolbox.h"
#include "ui_item_toolbox.h"

Item_ToolBox::Item_ToolBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ToolBox)
{
    ui->setupUi(this);
}

Item_ToolBox::~Item_ToolBox()
{
    delete ui;
}
