#ifndef ITEM_TEXTEDIT_H
#define ITEM_TEXTEDIT_H

#include <QWidget>

namespace Ui {
class Item_TextEdit;
}

class Item_TextEdit : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TextEdit(QWidget *parent = nullptr);
    ~Item_TextEdit();

private:
    Ui::Item_TextEdit *ui;
};

#endif // ITEM_TEXTEDIT_H
