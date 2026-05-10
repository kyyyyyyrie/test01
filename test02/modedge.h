#ifndef MODEDGE_H
#define MODEDGE_H

#include <QWidget>

namespace Ui {
class modEdge;
}

class modEdge : public QWidget
{
    Q_OBJECT

public:
    explicit modEdge(QWidget *parent = nullptr);
    ~modEdge();

private slots:
    void on_mode_clicked();

    void on_ADD_clicked();

private:
    Ui::modEdge *ui;
};

#endif // MODEDGE_H
