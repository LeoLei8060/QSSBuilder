#ifndef ITEM_LCDNUMBER_H
#define ITEM_LCDNUMBER_H

#include <QWidget>

namespace Ui {
class Item_LCDNumber;
}

class Item_LCDNumber : public QWidget
{
    Q_OBJECT

public:
    explicit Item_LCDNumber(QWidget *parent = nullptr);
    ~Item_LCDNumber();

private:
    Ui::Item_LCDNumber *ui;
};

#endif // ITEM_LCDNUMBER_H
