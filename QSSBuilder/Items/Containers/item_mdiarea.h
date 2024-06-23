#ifndef ITEM_MDIAREA_H
#define ITEM_MDIAREA_H

#include <QWidget>

namespace Ui {
class Item_MDIArea;
}

class Item_MDIArea : public QWidget
{
    Q_OBJECT

public:
    explicit Item_MDIArea(QWidget *parent = nullptr);
    ~Item_MDIArea();

private:
    Ui::Item_MDIArea *ui;
};

#endif // ITEM_MDIAREA_H
