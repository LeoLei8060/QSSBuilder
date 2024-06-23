#ifndef ITEM_CHECKBOX_H
#define ITEM_CHECKBOX_H

#include <QWidget>

namespace Ui {
class Item_CheckBox;
}

class Item_CheckBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_CheckBox(QWidget *parent = nullptr);
    ~Item_CheckBox();

private:
    Ui::Item_CheckBox *ui;
};

#endif // ITEM_CHECKBOX_H
