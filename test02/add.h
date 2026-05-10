#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();

private slots:
    void on_addp_clicked();

    void on_addname_clicked();

    void on_pushButton_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
