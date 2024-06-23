#ifndef ITEM_LINEEDIT_H
#define ITEM_LINEEDIT_H

#include <QWidget>

namespace Ui {
class Item_LineEdit;
}

class Item_LineEdit : public QWidget
{
    Q_OBJECT

public:
    explicit Item_LineEdit(QWidget *parent = nullptr);
    ~Item_LineEdit();

private:
    Ui::Item_LineEdit *ui;
};

#endif // ITEM_LINEEDIT_H
