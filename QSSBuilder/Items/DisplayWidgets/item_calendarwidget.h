#ifndef ITEM_CALENDARWIDGET_H
#define ITEM_CALENDARWIDGET_H

#include <QWidget>

namespace Ui {
class Item_CalendarWidget;
}

class Item_CalendarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit Item_CalendarWidget(QWidget *parent = nullptr);
    ~Item_CalendarWidget();

private:
    Ui::Item_CalendarWidget *ui;
};

#endif // ITEM_CALENDARWIDGET_H
