#include "item_textedit.h"
#include "ui_item_textedit.h"

Item_TextEdit::Item_TextEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TextEdit)
{
    ui->setupUi(this);
}

Item_TextEdit::~Item_TextEdit()
{
    delete ui;
}
