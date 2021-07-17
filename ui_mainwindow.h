/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *geography_Button;
    QPushButton *science_Button;
    QPushButton *technology_Button;
    QPushButton *health_Button;
    QPushButton *movies_Button;
    QPushButton *sports_Button;
    QPushButton *about_Button;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(325, 80, 150, 50));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setStyleSheet(QString::fromUtf8(" color:white"));
        label->setAlignment(Qt::AlignCenter);
        geography_Button = new QPushButton(centralwidget);
        geography_Button->setObjectName(QString::fromUtf8("geography_Button"));
        geography_Button->setGeometry(QRect(230, 320, 150, 50));
        QFont font1;
        font1.setPointSize(12);
        geography_Button->setFont(font1);
        geography_Button->setCursor(QCursor(Qt::PointingHandCursor));
        geography_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        science_Button = new QPushButton(centralwidget);
        science_Button->setObjectName(QString::fromUtf8("science_Button"));
        science_Button->setGeometry(QRect(230, 180, 150, 50));
        science_Button->setFont(font1);
        science_Button->setCursor(QCursor(Qt::PointingHandCursor));
        science_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        technology_Button = new QPushButton(centralwidget);
        technology_Button->setObjectName(QString::fromUtf8("technology_Button"));
        technology_Button->setGeometry(QRect(420, 180, 150, 50));
        technology_Button->setFont(font1);
        technology_Button->setCursor(QCursor(Qt::PointingHandCursor));
        technology_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        health_Button = new QPushButton(centralwidget);
        health_Button->setObjectName(QString::fromUtf8("health_Button"));
        health_Button->setGeometry(QRect(420, 320, 150, 50));
        health_Button->setFont(font1);
        health_Button->setCursor(QCursor(Qt::PointingHandCursor));
        health_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        movies_Button = new QPushButton(centralwidget);
        movies_Button->setObjectName(QString::fromUtf8("movies_Button"));
        movies_Button->setGeometry(QRect(230, 250, 150, 50));
        movies_Button->setFont(font1);
        movies_Button->setCursor(QCursor(Qt::PointingHandCursor));
        movies_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        sports_Button = new QPushButton(centralwidget);
        sports_Button->setObjectName(QString::fromUtf8("sports_Button"));
        sports_Button->setGeometry(QRect(420, 250, 150, 50));
        sports_Button->setFont(font1);
        sports_Button->setCursor(QCursor(Qt::PointingHandCursor));
        sports_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        about_Button = new QPushButton(centralwidget);
        about_Button->setObjectName(QString::fromUtf8("about_Button"));
        about_Button->setGeometry(QRect(325, 390, 140, 40));
        about_Button->setFont(font1);
        about_Button->setCursor(QCursor(Qt::PointingHandCursor));
        about_Button->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white;"));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(325, 440, 140, 40));
        exitButton->setFont(font1);
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "QUIZ", nullptr));
        geography_Button->setText(QCoreApplication::translate("MainWindow", "Geography", nullptr));
        science_Button->setText(QCoreApplication::translate("MainWindow", "Science", nullptr));
        technology_Button->setText(QCoreApplication::translate("MainWindow", "Technology", nullptr));
        health_Button->setText(QCoreApplication::translate("MainWindow", "Health", nullptr));
        movies_Button->setText(QCoreApplication::translate("MainWindow", "Movies", nullptr));
        sports_Button->setText(QCoreApplication::translate("MainWindow", "Sports", nullptr));
        about_Button->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
