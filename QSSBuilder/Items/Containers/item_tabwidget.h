#ifndef ITEM_TABWIDGET_H
#define ITEM_TABWIDGET_H

#include <QWidget>

namespace Ui {
class Item_TabWidget;
}

class Item_TabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TabWidget(QWidget *parent = nullptr);
    ~Item_TabWidget();

private:
    Ui::Item_TabWidget *ui;
};

#endif // ITEM_TABWIDGET_H
