#ifndef ITEM_DIAL_H
#define ITEM_DIAL_H

#include <QWidget>

namespace Ui {
class Item_Dial;
}

class Item_Dial : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Dial(QWidget *parent = nullptr);
    ~Item_Dial();

private:
    Ui::Item_Dial *ui;
};

#endif // ITEM_DIAL_H
