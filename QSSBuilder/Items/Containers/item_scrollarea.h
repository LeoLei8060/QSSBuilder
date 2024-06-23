#ifndef ITEM_SCROLLAREA_H
#define ITEM_SCROLLAREA_H

#include <QWidget>

namespace Ui {
class Item_ScrollArea;
}

class Item_ScrollArea : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ScrollArea(QWidget *parent = nullptr);
    ~Item_ScrollArea();

private:
    Ui::Item_ScrollArea *ui;
};

#endif // ITEM_SCROLLAREA_H
