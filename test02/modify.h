#ifndef MODIFY_H
#define MODIFY_H

#include <QWidget>

namespace Ui {
class modify;
}

class modify : public QWidget
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = nullptr);
    ~modify();

private slots:
    void on_modi_clicked();

private:
    Ui::modify *ui;
};

#endif // MODIFY_H
