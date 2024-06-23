#include "item_horslider.h"
#include "ui_item_horslider.h"

Item_HorSlider::Item_HorSlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_HorSlider)
{
    ui->setupUi(this);
}

Item_HorSlider::~Item_HorSlider()
{
    delete ui;
}
