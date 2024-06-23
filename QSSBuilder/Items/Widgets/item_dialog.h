#ifndef ITEM_DIALOG_H
#define ITEM_DIALOG_H

#include <QWidget>

namespace Ui {
class Item_Dialog;
}

class Item_Dialog : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Dialog(QWidget *parent = nullptr);
    ~Item_Dialog();

private:
    Ui::Item_Dialog *ui;
};

#endif // ITEM_DIALOG_H
