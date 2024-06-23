#ifndef ITEM_TEXTBROWSER_H
#define ITEM_TEXTBROWSER_H

#include <QWidget>

namespace Ui {
class Item_TextBrowser;
}

class Item_TextBrowser : public QWidget
{
    Q_OBJECT

public:
    explicit Item_TextBrowser(QWidget *parent = nullptr);
    ~Item_TextBrowser();

private:
    Ui::Item_TextBrowser *ui;
};

#endif // ITEM_TEXTBROWSER_H
