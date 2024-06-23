#ifndef ITEM_FONTCOMBOBOX_H
#define ITEM_FONTCOMBOBOX_H

#include <QWidget>

namespace Ui {
class Item_FontComboBox;
}

class Item_FontComboBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_FontComboBox(QWidget *parent = nullptr);
    ~Item_FontComboBox();

private:
    Ui::Item_FontComboBox *ui;
};

#endif // ITEM_FONTCOMBOBOX_H
