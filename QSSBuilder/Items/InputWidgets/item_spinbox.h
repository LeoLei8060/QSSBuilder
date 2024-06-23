#ifndef ITEM_SPINBOX_H
#define ITEM_SPINBOX_H

#include <QWidget>

namespace Ui {
class Item_SpinBox;
}

class Item_SpinBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_SpinBox(QWidget *parent = nullptr);
    ~Item_SpinBox();

private:
    Ui::Item_SpinBox *ui;
};

#endif // ITEM_SPINBOX_H
