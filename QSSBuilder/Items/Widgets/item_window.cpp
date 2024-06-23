#include "item_window.h"
#include "ui_item_window.h"

Item_Window::Item_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Item_Window)
{
    ui->setupUi(this);
}

Item_Window::~Item_Window()
{
    delete ui;
}
