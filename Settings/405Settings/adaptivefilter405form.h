#ifndef ADAPTIVEFILTER405FORM_H
#define ADAPTIVEFILTER405FORM_H

#include <QWidget>

namespace Ui {
class AdaptiveFilter405Form;
}

class AdaptiveFilter405Form : public QWidget
{
    Q_OBJECT

public:
    explicit AdaptiveFilter405Form(QWidget *parent = nullptr);
    ~AdaptiveFilter405Form();

private:
    Ui::AdaptiveFilter405Form *ui;
};

#endif // ADAPTIVEFILTER405FORM_H
