#include "item_verscrollbar.h"
#include "ui_item_verscrollbar.h"

Item_VerScrollBar::Item_VerScrollBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_VerScrollBar)
{
    ui->setupUi(this);
}

Item_VerScrollBar::~Item_VerScrollBar()
{
    delete ui;
}
