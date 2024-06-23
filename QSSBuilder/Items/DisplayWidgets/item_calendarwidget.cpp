#include "item_calendarwidget.h"
#include "ui_item_calendarwidget.h"

Item_CalendarWidget::Item_CalendarWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_CalendarWidget)
{
    ui->setupUi(this);
}

Item_CalendarWidget::~Item_CalendarWidget()
{
    delete ui;
}
