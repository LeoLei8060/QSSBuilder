#include "item_dateedit.h"
#include "ui_item_dateedit.h"

Item_DateEdit::Item_DateEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_DateEdit)
{
    ui->setupUi(this);
}

Item_DateEdit::~Item_DateEdit()
{
    delete ui;
}
