#include "item_lineedit.h"
#include "ui_item_lineedit.h"

Item_LineEdit::Item_LineEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_LineEdit)
{
    ui->setupUi(this);
}

Item_LineEdit::~Item_LineEdit()
{
    delete ui;
}
