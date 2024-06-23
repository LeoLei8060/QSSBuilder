#ifndef ITEM_LISTVIEW_H
#define ITEM_LISTVIEW_H

#include <QWidget>

namespace Ui {
class Item_ListView;
}

class Item_ListView : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ListView(QWidget *parent = nullptr);
    ~Item_ListView();

private:
    Ui::Item_ListView *ui;
};

#endif // ITEM_LISTVIEW_H
