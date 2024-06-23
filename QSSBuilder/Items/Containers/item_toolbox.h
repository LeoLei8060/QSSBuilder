#ifndef ITEM_TOOLBOX_H
#define ITEM_TOOLBOX_H

#include <QWidget>

namespace Ui {
class Item_ToolBox;
}

class Item_ToolBox : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ToolBox(QWidget *parent = nullptr);
    ~Item_ToolBox();

private:
    Ui::Item_ToolBox *ui;
};

#endif // ITEM_TOOLBOX_H
