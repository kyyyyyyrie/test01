/********************************************************************************
** Form generated from reading UI file 'minload.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINLOAD_H
#define UI_MINLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_minload
{
public:
    QLineEdit *minn;
    QLineEdit *len;

    void setupUi(QWidget *minload)
    {
        if (minload->objectName().isEmpty())
            minload->setObjectName(QString::fromUtf8("minload"));
        minload->resize(522, 145);
        minn = new QLineEdit(minload);
        minn->setObjectName(QString::fromUtf8("minn"));
        minn->setGeometry(QRect(0, 20, 521, 41));
        len = new QLineEdit(minload);
        len->setObjectName(QString::fromUtf8("len"));
        len->setGeometry(QRect(190, 90, 113, 25));

        retranslateUi(minload);

        QMetaObject::connectSlotsByName(minload);
    } // setupUi

    void retranslateUi(QWidget *minload)
    {
        minload->setWindowTitle(QCoreApplication::translate("minload", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class minload: public Ui_minload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINLOAD_H
