#include "item_toolbutton.h"
#include "ui_item_toolbutton.h"

Item_ToolButton::Item_ToolButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ToolButton)
{
    ui->setupUi(this);
}

Item_ToolButton::~Item_ToolButton()
{
    delete ui;
}
