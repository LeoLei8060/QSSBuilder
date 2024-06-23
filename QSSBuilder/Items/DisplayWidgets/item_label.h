#ifndef ITEM_LABEL_H
#define ITEM_LABEL_H

#include <QWidget>

namespace Ui {
class Item_Label;
}

class Item_Label : public QWidget
{
    Q_OBJECT

public:
    explicit Item_Label(QWidget *parent = nullptr);
    ~Item_Label();

private:
    Ui::Item_Label *ui;
};

#endif // ITEM_LABEL_H
