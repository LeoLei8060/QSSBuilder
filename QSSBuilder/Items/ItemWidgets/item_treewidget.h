#ifndef ITEM_TREEWIDGET_H
#define ITEM_TREEWIDGET_H

#include <QWidget>

namespace Ui {
class Item_TreeWidget;
}

class Item_TreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TreeWidget(QWidget *parent = nullptr);
    ~Item_TreeWidget();

private:
    Ui::Item_TreeWidget *ui;
};

#endif // ITEM_TREEWIDGET_H
