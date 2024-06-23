#ifndef ITEM_PROGRESSBAR_H
#define ITEM_PROGRESSBAR_H

#include <QWidget>

namespace Ui {
class Item_ProgressBar;
}

class Item_ProgressBar : public QWidget
{
    Q_OBJECT

public:
    explicit Item_ProgressBar(QWidget *parent = nullptr);
    ~Item_ProgressBar();

private:
    Ui::Item_ProgressBar *ui;
};

#endif // ITEM_PROGRESSBAR_H
