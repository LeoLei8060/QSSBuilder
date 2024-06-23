#ifndef ITEM_STACKEDWIDGET_H
#define ITEM_STACKEDWIDGET_H

#include <QWidget>

namespace Ui {
class Item_StackedWidget;
}

class Item_StackedWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_StackedWidget(QWidget *parent = nullptr);
    ~Item_StackedWidget();

private:
    Ui::Item_StackedWidget *ui;
};

#endif // ITEM_STACKEDWIDGET_H
