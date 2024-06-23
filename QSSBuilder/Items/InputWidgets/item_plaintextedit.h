#ifndef ITEM_PLAINTEXTEDIT_H
#define ITEM_PLAINTEXTEDIT_H

#include <QWidget>

namespace Ui {
class Item_PlainTextEdit;
}

class Item_PlainTextEdit : public QWidget
{
    Q_OBJECT

public:
    explicit Item_PlainTextEdit(QWidget *parent = nullptr);
    ~Item_PlainTextEdit();

private:
    Ui::Item_PlainTextEdit *ui;
};

#endif // ITEM_PLAINTEXTEDIT_H
