#ifndef ITEM_TABLEWIDGET_H
#define ITEM_TABLEWIDGET_H

#include <QWidget>

namespace Ui {
class Item_TableWidget;
}

class Item_TableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TableWidget(QWidget *parent = nullptr);
    ~Item_TableWidget();

private:
    Ui::Item_TableWidget *ui;
};

#endif // ITEM_TABLEWIDGET_H
