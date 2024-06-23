#ifndef ITEM_DOUBLESPINBOX_H
#define ITEM_DOUBLESPINBOX_H

#include <QWidget>

namespace Ui {
class Item_DoubleSpinBox;
}

class Item_DoubleSpinBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_DoubleSpinBox(QWidget *parent = nullptr);
    ~Item_DoubleSpinBox();

private:
    Ui::Item_DoubleSpinBox *ui;
};

#endif // ITEM_DOUBLESPINBOX_H
