#ifndef ITEM_WINDOW_H
#define ITEM_WINDOW_H

#include <QWidget>

namespace Ui {
class Item_Window;
}

class Item_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Window(QWidget *parent = nullptr);
    ~Item_Window();

private:
    Ui::Item_Window *ui;
};

#endif // ITEM_WINDOW_H
