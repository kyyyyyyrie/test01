/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *addm;
    QLabel *label_3;
    QLineEdit *addf;
    QLabel *label_4;
    QLineEdit *addlen;
    QPushButton *addp;
    QPushButton *addname;
    QLabel *tishi;
    QLabel *tishi1;
    QRadioButton *peo;
    QRadioButton *car;
    QLabel *label_5;
    QLineEdit *jj;
    QLabel *tishi2;
    QPushButton *pushButton;

    void setupUi(QWidget *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QString::fromUtf8("add"));
        add->resize(556, 338);
        label = new QLabel(add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 131, 31));
        name = new QLineEdit(add);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(200, 20, 211, 31));
        label_2 = new QLabel(add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 100, 69, 19));
        addm = new QLineEdit(add);
        addm->setObjectName(QString::fromUtf8("addm"));
        addm->setGeometry(QRect(120, 100, 61, 20));
        label_3 = new QLabel(add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 100, 69, 19));
        addf = new QLineEdit(add);
        addf->setObjectName(QString::fromUtf8("addf"));
        addf->setGeometry(QRect(210, 100, 81, 20));
        label_4 = new QLabel(add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 100, 91, 19));
        addlen = new QLineEdit(add);
        addlen->setObjectName(QString::fromUtf8("addlen"));
        addlen->setGeometry(QRect(390, 100, 91, 21));
        addp = new QPushButton(add);
        addp->setObjectName(QString::fromUtf8("addp"));
        addp->setGeometry(QRect(220, 170, 111, 31));
        addname = new QPushButton(add);
        addname->setObjectName(QString::fromUtf8("addname"));
        addname->setGeometry(QRect(220, 60, 111, 31));
        tishi = new QLabel(add);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(410, 20, 141, 31));
        tishi1 = new QLabel(add);
        tishi1->setObjectName(QString::fromUtf8("tishi1"));
        tishi1->setGeometry(QRect(380, 130, 161, 21));
        peo = new QRadioButton(add);
        peo->setObjectName(QString::fromUtf8("peo"));
        peo->setGeometry(QRect(160, 140, 118, 23));
        car = new QRadioButton(add);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(280, 140, 118, 23));
        label_5 = new QLabel(add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 220, 81, 19));
        jj = new QLineEdit(add);
        jj->setObjectName(QString::fromUtf8("jj"));
        jj->setGeometry(QRect(120, 220, 381, 25));
        tishi2 = new QLabel(add);
        tishi2->setObjectName(QString::fromUtf8("tishi2"));
        tishi2->setGeometry(QRect(390, 260, 101, 21));
        pushButton = new QPushButton(add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 280, 101, 31));

        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QWidget *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "Form", nullptr));
        label->setText(QCoreApplication::translate("add", "\350\276\223\345\205\245\350\212\202\347\202\271\345\220\215\347\247\260:", nullptr));
        label_2->setText(QCoreApplication::translate("add", "\345\234\250", nullptr));
        label_3->setText(QCoreApplication::translate("add", "\347\232\204", nullptr));
        label_4->setText(QCoreApplication::translate("add", "\346\226\271\345\220\221,\350\267\235\347\246\273\344\270\272", nullptr));
        addp->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\350\276\271", nullptr));
        addname->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\345\220\215\347\247\260", nullptr));
        tishi->setText(QString());
        tishi1->setText(QString());
        peo->setText(QCoreApplication::translate("add", "\344\272\272\350\241\214\351\201\223", nullptr));
        car->setText(QCoreApplication::translate("add", "\350\275\246\351\201\223", nullptr));
        label_5->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\347\256\200\344\273\213:", nullptr));
        tishi2->setText(QString());
        pushButton->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\347\256\200\344\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
