#ifndef ITEM_VERTICALLINE_H
#define ITEM_VERTICALLINE_H

#include <QWidget>

namespace Ui {
class Item_VerticalLine;
}

class Item_VerticalLine : public QWidget
{
    Q_OBJECT

public:
    explicit Item_VerticalLine(QWidget *parent = nullptr);
    ~Item_VerticalLine();

private:
    Ui::Item_VerticalLine *ui;
};

#endif // ITEM_VERTICALLINE_H
