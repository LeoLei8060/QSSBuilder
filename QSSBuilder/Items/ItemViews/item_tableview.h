#ifndef ITEM_TABLEVIEW_H
#define ITEM_TABLEVIEW_H

#include <QWidget>

namespace Ui {
class Item_TableView;
}

class Item_TableView : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TableView(QWidget *parent = nullptr);
    ~Item_TableView();

private:
    Ui::Item_TableView *ui;
};

#endif // ITEM_TABLEVIEW_H
