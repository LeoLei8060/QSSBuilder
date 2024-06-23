#ifndef ITEM_FRAME_H
#define ITEM_FRAME_H

#include <QWidget>

namespace Ui {
class Item_Frame;
}

class Item_Frame : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Frame(QWidget *parent = nullptr);
    ~Item_Frame();

private:
    Ui::Item_Frame *ui;
};

#endif // ITEM_FRAME_H
