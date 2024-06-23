#include "item_verslider.h"
#include "ui_item_verslider.h"

Item_VerSlider::Item_VerSlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_VerSlider)
{
    ui->setupUi(this);
}

Item_VerSlider::~Item_VerSlider()
{
    delete ui;
}
