#ifndef ITEM_HORSCROLLBAR_H
#define ITEM_HORSCROLLBAR_H

#include <QWidget>

namespace Ui {
class Item_HorScrollBar;
}

class Item_HorScrollBar : public QWidget
{
    Q_OBJECT

public:
    explicit Item_HorScrollBar(QWidget *parent = nullptr);
    ~Item_HorScrollBar();

private:
    Ui::Item_HorScrollBar *ui;
};

#endif // ITEM_HORSCROLLBAR_H
