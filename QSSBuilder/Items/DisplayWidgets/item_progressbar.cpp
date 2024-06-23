#include "item_progressbar.h"
#include "ui_item_progressbar.h"

Item_ProgressBar::Item_ProgressBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_ProgressBar)
{
    ui->setupUi(this);
}

Item_ProgressBar::~Item_ProgressBar()
{
    delete ui;
}
