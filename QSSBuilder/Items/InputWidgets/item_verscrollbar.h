#ifndef ITEM_VERSCROLLBAR_H
#define ITEM_VERSCROLLBAR_H

#include <QWidget>

namespace Ui {
class Item_VerScrollBar;
}

class Item_VerScrollBar : public QWidget
{
    Q_OBJECT

public:
    explicit Item_VerScrollBar(QWidget *parent = nullptr);
    ~Item_VerScrollBar();

private:
    Ui::Item_VerScrollBar *ui;
};

#endif // ITEM_VERSCROLLBAR_H
