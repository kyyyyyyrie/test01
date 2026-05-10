#ifndef DELE_H
#define DELE_H

#include <QWidget>

namespace Ui {
class dele;
}

class dele : public QWidget
{
    Q_OBJECT

public:
    explicit dele(QWidget *parent = nullptr);
    ~dele();

private slots:
    void on_del_clicked();

private:
    Ui::dele *ui;
};

#endif // DELE_H
