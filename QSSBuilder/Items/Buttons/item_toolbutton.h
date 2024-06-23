#ifndef ITEM_TOOLBUTTON_H
#define ITEM_TOOLBUTTON_H

#include <QWidget>

namespace Ui {
class Item_ToolButton;
}

class Item_ToolButton : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ToolButton(QWidget *parent = nullptr);
    ~Item_ToolButton();

private:
    Ui::Item_ToolButton *ui;
};

#endif // ITEM_TOOLBUTTON_H
