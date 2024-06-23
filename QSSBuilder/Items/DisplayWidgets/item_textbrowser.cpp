#include "item_textbrowser.h"
#include "ui_item_textbrowser.h"

Item_TextBrowser::Item_TextBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_TextBrowser)
{
    ui->setupUi(this);
}

Item_TextBrowser::~Item_TextBrowser()
{
    delete ui;
}
