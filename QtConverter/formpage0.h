#ifndef FORMPAGE0_H
#define FORMPAGE0_H

#include <QWidget>

namespace Ui {
class FormPage0;
}

class FormPage0 : public QWidget
{
    Q_OBJECT

public:
    explicit FormPage0(QWidget *parent = nullptr);
    ~FormPage0();

private:
    Ui::FormPage0 *ui;
};

#endif // FORMPAGE0_H
