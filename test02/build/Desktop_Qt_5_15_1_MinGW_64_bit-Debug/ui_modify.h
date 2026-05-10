/********************************************************************************
** Form generated from reading UI file 'modify.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_H
#define UI_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modify
{
public:
    QLabel *label;
    QLineEdit *id;
    QLabel *label_2;
    QLineEdit *res;
    QPushButton *modi;
    QLabel *tishi;
    QRadioButton *modname;
    QRadioButton *modid;
    QRadioButton *jianjie;

    void setupUi(QWidget *modify)
    {
        if (modify->objectName().isEmpty())
            modify->setObjectName(QString::fromUtf8("modify"));
        modify->resize(452, 169);
        label = new QLabel(modify);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 91, 21));
        id = new QLineEdit(modify);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(140, 10, 181, 25));
        label_2 = new QLabel(modify);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 111, 19));
        res = new QLineEdit(modify);
        res->setObjectName(QString::fromUtf8("res"));
        res->setGeometry(QRect(140, 50, 291, 31));
        modi = new QPushButton(modify);
        modi->setObjectName(QString::fromUtf8("modi"));
        modi->setGeometry(QRect(180, 130, 93, 28));
        tishi = new QLabel(modify);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(340, 80, 101, 21));
        modname = new QRadioButton(modify);
        modname->setObjectName(QString::fromUtf8("modname"));
        modname->setGeometry(QRect(70, 100, 118, 23));
        modid = new QRadioButton(modify);
        modid->setObjectName(QString::fromUtf8("modid"));
        modid->setGeometry(QRect(200, 100, 118, 23));
        jianjie = new QRadioButton(modify);
        jianjie->setObjectName(QString::fromUtf8("jianjie"));
        jianjie->setGeometry(QRect(300, 100, 118, 23));

        retranslateUi(modify);

        QMetaObject::connectSlotsByName(modify);
    } // setupUi

    void retranslateUi(QWidget *modify)
    {
        modify->setWindowTitle(QCoreApplication::translate("modify", "Form", nullptr));
        label->setText(QCoreApplication::translate("modify", "\350\276\223 \345\205\245 \347\274\226 \345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("modify", "\350\276\223\345\205\245\344\277\256\346\224\271\345\220\215\347\247\260:", nullptr));
        modi->setText(QCoreApplication::translate("modify", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        tishi->setText(QString());
        modname->setText(QCoreApplication::translate("modify", "\344\277\256\346\224\271\345\220\215\347\247\260", nullptr));
        modid->setText(QCoreApplication::translate("modify", "\344\277\256\346\224\271ID", nullptr));
        jianjie->setText(QCoreApplication::translate("modify", "\344\277\256\346\224\271\347\256\200\344\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify: public Ui_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
