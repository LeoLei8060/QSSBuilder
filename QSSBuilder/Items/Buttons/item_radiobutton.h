#ifndef ITEM_RADIOBUTTON_H
#define ITEM_RADIOBUTTON_H

#include <QWidget>

namespace Ui {
class Item_RadioButton;
}

class Item_RadioButton : public QWidget
{
    Q_OBJECT

public:
    explicit Item_RadioButton(QWidget *parent = nullptr);
    ~Item_RadioButton();

private:
    Ui::Item_RadioButton *ui;
};

#endif // ITEM_RADIOBUTTON_H
