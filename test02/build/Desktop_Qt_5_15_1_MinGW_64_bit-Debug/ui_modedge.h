/********************************************************************************
** Form generated from reading UI file 'modedge.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEDGE_H
#define UI_MODEDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modEdge
{
public:
    QPushButton *mode;
    QPushButton *ADD;
    QFrame *line;
    QLabel *label;
    QLineEdit *res;
    QComboBox *type;
    QLabel *label_2;
    QComboBox *start;
    QLabel *label_3;
    QComboBox *end;
    QLabel *tishi;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *start1;
    QComboBox *end1;
    QLabel *label_7;
    QLineEdit *len;
    QLabel *label_8;
    QLabel *tishi1;
    QComboBox *type1;

    void setupUi(QWidget *modEdge)
    {
        if (modEdge->objectName().isEmpty())
            modEdge->setObjectName(QString::fromUtf8("modEdge"));
        modEdge->resize(394, 435);
        mode = new QPushButton(modEdge);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(140, 160, 93, 28));
        ADD = new QPushButton(modEdge);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setGeometry(QRect(150, 390, 93, 28));
        line = new QFrame(modEdge);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 210, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(modEdge);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 71, 31));
        res = new QLineEdit(modEdge);
        res->setObjectName(QString::fromUtf8("res"));
        res->setGeometry(QRect(90, 60, 241, 25));
        type = new QComboBox(modEdge);
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(100, 110, 83, 25));
        label_2 = new QLabel(modEdge);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 69, 19));
        start = new QComboBox(modEdge);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(60, 20, 91, 25));
        label_3 = new QLabel(modEdge);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 20, 69, 19));
        end = new QComboBox(modEdge);
        end->setObjectName(QString::fromUtf8("end"));
        end->setGeometry(QRect(260, 20, 91, 25));
        tishi = new QLabel(modEdge);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(230, 120, 141, 20));
        label_4 = new QLabel(modEdge);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 110, 69, 21));
        label_5 = new QLabel(modEdge);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 250, 69, 19));
        label_6 = new QLabel(modEdge);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 250, 69, 19));
        start1 = new QComboBox(modEdge);
        start1->setObjectName(QString::fromUtf8("start1"));
        start1->setGeometry(QRect(70, 250, 91, 25));
        end1 = new QComboBox(modEdge);
        end1->setObjectName(QString::fromUtf8("end1"));
        end1->setGeometry(QRect(270, 250, 91, 25));
        label_7 = new QLabel(modEdge);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 300, 69, 21));
        len = new QLineEdit(modEdge);
        len->setObjectName(QString::fromUtf8("len"));
        len->setGeometry(QRect(70, 300, 113, 25));
        label_8 = new QLabel(modEdge);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 350, 69, 21));
        tishi1 = new QLabel(modEdge);
        tishi1->setObjectName(QString::fromUtf8("tishi1"));
        tishi1->setGeometry(QRect(220, 300, 111, 21));
        type1 = new QComboBox(modEdge);
        type1->addItem(QString());
        type1->addItem(QString());
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setGeometry(QRect(72, 350, 111, 25));

        retranslateUi(modEdge);

        QMetaObject::connectSlotsByName(modEdge);
    } // setupUi

    void retranslateUi(QWidget *modEdge)
    {
        modEdge->setWindowTitle(QCoreApplication::translate("modEdge", "Form", nullptr));
        mode->setText(QCoreApplication::translate("modEdge", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        ADD->setText(QCoreApplication::translate("modEdge", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("modEdge", "\344\277\256\346\224\271\345\206\205\345\256\271:", nullptr));
        type->setItemText(0, QCoreApplication::translate("modEdge", "\351\225\277\345\272\246", nullptr));
        type->setItemText(1, QCoreApplication::translate("modEdge", "\351\201\223\350\267\257\347\261\273\345\236\213", nullptr));

        label_2->setText(QCoreApplication::translate("modEdge", "\350\265\267\347\202\271:", nullptr));
        label_3->setText(QCoreApplication::translate("modEdge", "\347\273\210\347\202\271\357\274\232", nullptr));
        tishi->setText(QString());
        label_4->setText(QCoreApplication::translate("modEdge", "\344\277\256\346\224\271\347\261\273\345\236\213:", nullptr));
        label_5->setText(QCoreApplication::translate("modEdge", "\350\265\267\347\202\271:", nullptr));
        label_6->setText(QCoreApplication::translate("modEdge", "\347\273\210\347\202\271\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("modEdge", "\351\225\277\345\272\246:", nullptr));
        label_8->setText(QCoreApplication::translate("modEdge", "\347\261\273\345\236\213:", nullptr));
        tishi1->setText(QString());
        type1->setItemText(0, QCoreApplication::translate("modEdge", "\344\272\272\350\241\214\351\201\223", nullptr));
        type1->setItemText(1, QCoreApplication::translate("modEdge", "\346\234\272\345\212\250\350\275\246\351\201\223", nullptr));

    } // retranslateUi

};

namespace Ui {
    class modEdge: public Ui_modEdge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEDGE_H
