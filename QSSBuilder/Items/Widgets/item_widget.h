#ifndef ITEM_WIDGET_H
#define ITEM_WIDGET_H

#include <QWidget>

namespace Ui {
class Item_Widget;
}

class Item_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Widget(QWidget *parent = nullptr);
    ~Item_Widget();

private:
    Ui::Item_Widget *ui;
};

#endif // ITEM_WIDGET_H
