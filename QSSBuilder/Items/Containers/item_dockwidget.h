#ifndef ITEM_DOCKWIDGET_H
#define ITEM_DOCKWIDGET_H

#include <QWidget>

namespace Ui {
class Item_DockWidget;
}

class Item_DockWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_DockWidget(QWidget *parent = nullptr);
    ~Item_DockWidget();

private:
    Ui::Item_DockWidget *ui;
};

#endif // ITEM_DOCKWIDGET_H
