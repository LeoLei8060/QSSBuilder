#include "item_timeedit.h"
#include "ui_item_timeedit.h"

Item_TimeEdit::Item_TimeEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TimeEdit)
{
    ui->setupUi(this);
}

Item_TimeEdit::~Item_TimeEdit()
{
    delete ui;
}
