#ifndef ITEM_TREEVIEW_H
#define ITEM_TREEVIEW_H

#include <QWidget>

namespace Ui {
class Item_TreeView;
}

class Item_TreeView : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TreeView(QWidget *parent = nullptr);
    ~Item_TreeView();

private:
    Ui::Item_TreeView *ui;
};

#endif // ITEM_TREEVIEW_H
