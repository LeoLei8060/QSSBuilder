#include "item_frame.h"
#include "ui_item_frame.h"

Item_Frame::Item_Frame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Frame)
{
    ui->setupUi(this);
}

Item_Frame::~Item_Frame()
{
    delete ui;
}
