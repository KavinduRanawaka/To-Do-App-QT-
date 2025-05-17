/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtTask;
    QPushButton *AddButton;
    QListWidget *txtList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *RemoveButton;
    QPushButton *RemoveAll;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(723, 644);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtTask = new QLineEdit(centralwidget);
        txtTask->setObjectName("txtTask");

        horizontalLayout->addWidget(txtTask);

        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName("AddButton");

        horizontalLayout->addWidget(AddButton);


        verticalLayout->addLayout(horizontalLayout);

        txtList = new QListWidget(centralwidget);
        txtList->setObjectName("txtList");

        verticalLayout->addWidget(txtList);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        RemoveButton = new QPushButton(centralwidget);
        RemoveButton->setObjectName("RemoveButton");
        QFont font;
        font.setUnderline(false);
        RemoveButton->setFont(font);
        RemoveButton->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(RemoveButton);

        RemoveAll = new QPushButton(centralwidget);
        RemoveAll->setObjectName("RemoveAll");

        horizontalLayout_2->addWidget(RemoveAll);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        RemoveButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        RemoveAll->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
