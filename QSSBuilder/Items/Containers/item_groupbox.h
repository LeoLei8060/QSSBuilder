#ifndef ITEM_GROUPBOX_H
#define ITEM_GROUPBOX_H

#include <QWidget>

namespace Ui {
class Item_GroupBox;
}

class Item_GroupBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_GroupBox(QWidget *parent = nullptr);
    ~Item_GroupBox();

private:
    Ui::Item_GroupBox *ui;
};

#endif // ITEM_GROUPBOX_H
