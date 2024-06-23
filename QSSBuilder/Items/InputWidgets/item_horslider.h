#ifndef ITEM_HORSLIDER_H
#define ITEM_HORSLIDER_H

#include <QWidget>

namespace Ui {
class Item_HorSlider;
}

class Item_HorSlider : public QWidget
{
    Q_OBJECT

public:
    explicit Item_HorSlider(QWidget *parent = nullptr);
    ~Item_HorSlider();

private:
    Ui::Item_HorSlider *ui;
};

#endif // ITEM_HORSLIDER_H
