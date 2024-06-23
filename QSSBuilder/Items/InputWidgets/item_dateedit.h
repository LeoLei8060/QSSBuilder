#ifndef ITEM_DATEEDIT_H
#define ITEM_DATEEDIT_H

#include <QWidget>

namespace Ui {
class Item_DateEdit;
}

class Item_DateEdit : public QWidget
{
    Q_OBJECT

public:
    explicit Item_DateEdit(QWidget *parent = nullptr);
    ~Item_DateEdit();

private:
    Ui::Item_DateEdit *ui;
};

#endif // ITEM_DATEEDIT_H
