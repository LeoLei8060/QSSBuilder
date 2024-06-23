#ifndef ITEM_TIMEEDIT_H
#define ITEM_TIMEEDIT_H

#include <QWidget>

namespace Ui {
class Item_TimeEdit;
}

class Item_TimeEdit : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TimeEdit(QWidget *parent = nullptr);
    ~Item_TimeEdit();

private:
    Ui::Item_TimeEdit *ui;
};

#endif // ITEM_TIMEEDIT_H
