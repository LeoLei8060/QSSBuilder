#ifndef ITEM_GRAPHICSVIEW_H
#define ITEM_GRAPHICSVIEW_H

#include <QWidget>

namespace Ui {
class Item_GraphicsView;
}

class Item_GraphicsView : public QWidget
{
    Q_OBJECT

public:
    explicit Item_GraphicsView(QWidget *parent = nullptr);
    ~Item_GraphicsView();

private:
    Ui::Item_GraphicsView *ui;
};

#endif // ITEM_GRAPHICSVIEW_H
