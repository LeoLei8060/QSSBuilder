#ifndef ITEM_PUSHBUTTON_H
#define ITEM_PUSHBUTTON_H

#include <QWidget>

namespace Ui {
class Item_PushButton;
}

class Item_PushButton : public QWidget
{
    Q_OBJECT

public:
    explicit Item_PushButton(QWidget *parent = nullptr);
    ~Item_PushButton();

private:
    Ui::Item_PushButton *ui;
};

#endif // ITEM_PUSHBUTTON_H
