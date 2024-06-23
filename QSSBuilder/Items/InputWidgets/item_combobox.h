#ifndef ITEM_COMBOBOX_H
#define ITEM_COMBOBOX_H

#include <QWidget>

namespace Ui {
class Item_ComboBox;
}

class Item_ComboBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ComboBox(QWidget *parent = nullptr);
    ~Item_ComboBox();

private:
    Ui::Item_ComboBox *ui;
};

#endif // ITEM_COMBOBOX_H
