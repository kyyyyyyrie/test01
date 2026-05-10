/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *school;
    QLineEdit *load;
    QLineEdit *len;
    QLabel *label;
    QLabel *label_2;
    QListView *Allo;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *searchText;
    QPushButton *search;
    QListView *target;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *checkload;
    QPushButton *All;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *people;
    QRadioButton *car;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *name;
    QLineEdit *pass;
    QLabel *tishi;
    QLabel *label_7;
    QLineEdit *start;
    QLabel *label_8;
    QLineEdit *end;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1192, 721);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        school = new QLabel(centralwidget);
        school->setObjectName(QString::fromUtf8("school"));
        school->setGeometry(QRect(420, -10, 781, 481));
        school->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/tupian/IMG_20250106_002817.jpg")));
        load = new QLineEdit(centralwidget);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(420, 480, 761, 31));
        load->setReadOnly(true);
        len = new QLineEdit(centralwidget);
        len->setObjectName(QString::fromUtf8("len"));
        len->setGeometry(QRect(420, 520, 171, 31));
        len->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 470, 111, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 530, 101, 21));
        Allo = new QListView(centralwidget);
        Allo->setObjectName(QString::fromUtf8("Allo"));
        Allo->setGeometry(QRect(420, 560, 761, 111));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 580, 81, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 101, 31));
        searchText = new QLineEdit(centralwidget);
        searchText->setObjectName(QString::fromUtf8("searchText"));
        searchText->setGeometry(QRect(140, 20, 121, 31));
        search = new QPushButton(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(280, 20, 93, 28));
        target = new QListView(centralwidget);
        target->setObjectName(QString::fromUtf8("target"));
        target->setGeometry(QRect(20, 60, 371, 201));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 540, 301, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        checkload = new QPushButton(horizontalLayoutWidget);
        checkload->setObjectName(QString::fromUtf8("checkload"));

        horizontalLayout_2->addWidget(checkload);

        All = new QPushButton(horizontalLayoutWidget);
        All->setObjectName(QString::fromUtf8("All"));

        horizontalLayout_2->addWidget(All);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        people = new QRadioButton(centralwidget);
        people->setObjectName(QString::fromUtf8("people"));
        people->setGeometry(QRect(70, 530, 118, 23));
        car = new QRadioButton(centralwidget);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(190, 530, 118, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 390, 131, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 290, 71, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 340, 69, 19));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(70, 290, 291, 31));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(70, 330, 291, 31));
        tishi = new QLabel(centralwidget);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(70, 370, 261, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 490, 69, 19));
        start = new QLineEdit(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(50, 490, 113, 25));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 490, 69, 19));
        end = new QLineEdit(centralwidget);
        end->setObjectName(QString::fromUtf8("end"));
        end->setGeometry(QRect(210, 490, 113, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        school->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\234\200\347\237\255\350\267\257\345\276\204:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\200\347\237\255\350\267\257\345\276\204\351\225\277\345\272\246:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211\350\267\257\345\276\204:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\212\202\347\202\271\344\277\241\346\201\257", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        checkload->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\234\200\347\237\255\350\267\257\345\276\204", nullptr));
        All->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\211\200\346\234\211\350\267\257\345\276\204", nullptr));
        people->setText(QCoreApplication::translate("MainWindow", "\344\272\272\350\241\214\350\267\257\345\276\204", nullptr));
        car->setText(QCoreApplication::translate("MainWindow", "\350\275\246\350\241\214\350\267\257\345\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201:", nullptr));
        tishi->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
