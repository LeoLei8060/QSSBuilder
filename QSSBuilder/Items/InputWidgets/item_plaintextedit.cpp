#include "item_plaintextedit.h"
#include "ui_item_plaintextedit.h"

Item_PlainTextEdit::Item_PlainTextEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_PlainTextEdit)
{
    ui->setupUi(this);
}

Item_PlainTextEdit::~Item_PlainTextEdit()
{
    delete ui;
}
