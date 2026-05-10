/********************************************************************************
** Form generated from reading UI file 'loada.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADA_H
#define UI_LOADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loada
{
public:
    QLineEdit *name;
    QPushButton *add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *pass;
    QLineEdit *pass2;
    QLabel *tishi;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *modify;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *modedge;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *delete_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addnode;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *loada)
    {
        if (loada->objectName().isEmpty())
            loada->setObjectName(QString::fromUtf8("loada"));
        loada->resize(549, 303);
        name = new QLineEdit(loada);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(270, 10, 171, 31));
        add = new QPushButton(loada);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(60, 50, 111, 31));
        label = new QLabel(loada);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 69, 19));
        label_2 = new QLabel(loada);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 60, 69, 19));
        label_3 = new QLabel(loada);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 100, 69, 19));
        pass = new QLineEdit(loada);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(270, 50, 171, 31));
        pass2 = new QLineEdit(loada);
        pass2->setObjectName(QString::fromUtf8("pass2"));
        pass2->setGeometry(QRect(270, 90, 171, 31));
        tishi = new QLabel(loada);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(210, 130, 201, 21));
        line = new QFrame(loada);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 170, 551, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(loada);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 180, 551, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        modify = new QPushButton(horizontalLayoutWidget);
        modify->setObjectName(QString::fromUtf8("modify"));

        horizontalLayout->addWidget(modify);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        modedge = new QPushButton(horizontalLayoutWidget);
        modedge->setObjectName(QString::fromUtf8("modedge"));

        horizontalLayout->addWidget(modedge);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        delete_2 = new QPushButton(horizontalLayoutWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        horizontalLayout->addWidget(delete_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        addnode = new QPushButton(horizontalLayoutWidget);
        addnode->setObjectName(QString::fromUtf8("addnode"));

        horizontalLayout->addWidget(addnode);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        retranslateUi(loada);

        QMetaObject::connectSlotsByName(loada);
    } // setupUi

    void retranslateUi(QWidget *loada)
    {
        loada->setWindowTitle(QCoreApplication::translate("loada", "Form", nullptr));
        add->setText(QCoreApplication::translate("loada", "\346\267\273\345\212\240\347\256\241\347\220\206\345\221\230", nullptr));
        label->setText(QCoreApplication::translate("loada", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("loada", "\345\257\206   \347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("loada", "\351\207\215\345\244\215\345\257\206\347\240\201:", nullptr));
        tishi->setText(QString());
        modify->setText(QCoreApplication::translate("loada", "\344\277\256\346\224\271\350\212\202\347\202\271", nullptr));
        modedge->setText(QCoreApplication::translate("loada", "\344\277\256\346\224\271\351\201\223\350\267\257", nullptr));
        delete_2->setText(QCoreApplication::translate("loada", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
        addnode->setText(QCoreApplication::translate("loada", "\346\267\273\345\212\240\350\212\202\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loada: public Ui_loada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADA_H
