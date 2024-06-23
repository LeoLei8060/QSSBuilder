#include "item_mdiarea.h"
#include "ui_item_mdiarea.h"

Item_MDIArea::Item_MDIArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_MDIArea)
{
    ui->setupUi(this);
}

Item_MDIArea::~Item_MDIArea()
{
    delete ui;
}
