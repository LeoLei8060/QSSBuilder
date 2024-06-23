#include "item_horscrollbar.h"
#include "ui_item_horscrollbar.h"

Item_HorScrollBar::Item_HorScrollBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_HorScrollBar)
{
    ui->setupUi(this);
}

Item_HorScrollBar::~Item_HorScrollBar()
{
    delete ui;
}
