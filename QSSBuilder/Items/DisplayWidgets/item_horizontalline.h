#ifndef ITEM_HORIZONTALLINE_H
#define ITEM_HORIZONTALLINE_H

#include <QWidget>

namespace Ui {
class Item_HorizontalLine;
}

class Item_HorizontalLine : public QWidget
{
    Q_OBJECT

public:
    explicit Item_HorizontalLine(QWidget *parent = nullptr);
    ~Item_HorizontalLine();

private:
    Ui::Item_HorizontalLine *ui;
};

#endif // ITEM_HORIZONTALLINE_H
