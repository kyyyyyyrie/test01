/********************************************************************************
** Form generated from reading UI file 'dele.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELE_H
#define UI_DELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dele
{
public:
    QLabel *label;
    QLineEdit *mas;
    QPushButton *del;
    QLabel *tishi;

    void setupUi(QWidget *dele)
    {
        if (dele->objectName().isEmpty())
            dele->setObjectName(QString::fromUtf8("dele"));
        dele->resize(420, 173);
        label = new QLabel(dele);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 151, 19));
        mas = new QLineEdit(dele);
        mas->setObjectName(QString::fromUtf8("mas"));
        mas->setGeometry(QRect(170, 40, 241, 31));
        del = new QPushButton(dele);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(160, 120, 93, 28));
        tishi = new QLabel(dele);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(170, 80, 141, 19));

        retranslateUi(dele);

        QMetaObject::connectSlotsByName(dele);
    } // setupUi

    void retranslateUi(QWidget *dele)
    {
        dele->setWindowTitle(QCoreApplication::translate("dele", "Form", nullptr));
        label->setText(QCoreApplication::translate("dele", "\350\276\223\345\205\245\346\203\263\350\246\201\345\210\240\351\231\244\347\232\204\350\212\202\347\202\271:", nullptr));
        del->setText(QCoreApplication::translate("dele", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        tishi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dele: public Ui_dele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELE_H
