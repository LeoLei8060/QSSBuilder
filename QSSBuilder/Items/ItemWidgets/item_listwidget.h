#ifndef ITEM_LISTWIDGET_H
#define ITEM_LISTWIDGET_H

#include <QWidget>

namespace Ui {
class Item_ListWidget;
}

class Item_ListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ListWidget(QWidget *parent = nullptr);
    ~Item_ListWidget();

private:
    Ui::Item_ListWidget *ui;
};

#endif // ITEM_LISTWIDGET_H
