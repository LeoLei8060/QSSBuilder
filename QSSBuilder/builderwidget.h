#ifndef BUILDERWIDGET_H
#define BUILDERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class BuilderWidget;
}
QT_END_NAMESPACE

class BuilderWidget : public QWidget
{
    Q_OBJECT

public:
    BuilderWidget(QWidget *parent = nullptr);
    ~BuilderWidget();

private:
    Ui::BuilderWidget *ui;
};
#endif // BUILDERWIDGET_H
