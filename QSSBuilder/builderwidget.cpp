#include "builderwidget.h"
#include "./ui_builderwidget.h"

BuilderWidget::BuilderWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BuilderWidget)
{
    ui->setupUi(this);
}

BuilderWidget::~BuilderWidget()
{
    delete ui;
}
