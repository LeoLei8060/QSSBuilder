#ifndef ITEM_VERSLIDER_H
#define ITEM_VERSLIDER_H

#include <QWidget>

namespace Ui {
class Item_VerSlider;
}

class Item_VerSlider : public QWidget
{
    Q_OBJECT

public:
    explicit Item_VerSlider(QWidget *parent = nullptr);
    ~Item_VerSlider();

private:
    Ui::Item_VerSlider *ui;
};

#endif // ITEM_VERSLIDER_H
