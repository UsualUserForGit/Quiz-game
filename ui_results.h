/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_results
{
public:
    QPushButton *exitButton;
    QPushButton *to_main_menuButton;
    QLabel *resultLabel;
    QLabel *descriptionLabel;
    QLabel *img_Frame;

    void setupUi(QWidget *results)
    {
        if (results->objectName().isEmpty())
            results->setObjectName(QString::fromUtf8("results"));
        results->resize(480, 640);
        exitButton = new QPushButton(results);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(75, 495, 150, 50));
        QFont font;
        font.setPointSize(12);
        exitButton->setFont(font);
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white;"));
        to_main_menuButton = new QPushButton(results);
        to_main_menuButton->setObjectName(QString::fromUtf8("to_main_menuButton"));
        to_main_menuButton->setGeometry(QRect(260, 495, 150, 50));
        to_main_menuButton->setFont(font);
        to_main_menuButton->setCursor(QCursor(Qt::PointingHandCursor));
        to_main_menuButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%; color:white;"));
        resultLabel = new QLabel(results);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(115, 35, 250, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raavi"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        resultLabel->setFont(font1);
        resultLabel->setCursor(QCursor(Qt::PointingHandCursor));
        resultLabel->setStyleSheet(QString::fromUtf8(" color:white;"));
        resultLabel->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(results);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(105, 120, 270, 70));
        QFont font2;
        font2.setPointSize(15);
        descriptionLabel->setFont(font2);
        descriptionLabel->setStyleSheet(QString::fromUtf8(" color:white;"));
        descriptionLabel->setAlignment(Qt::AlignCenter);
        img_Frame = new QLabel(results);
        img_Frame->setObjectName(QString::fromUtf8("img_Frame"));
        img_Frame->setGeometry(QRect(105, 189, 270, 301));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Serif"));
        img_Frame->setFont(font3);
        img_Frame->setCursor(QCursor(Qt::PointingHandCursor));
        img_Frame->setAlignment(Qt::AlignCenter);

        retranslateUi(results);

        QMetaObject::connectSlotsByName(results);
    } // setupUi

    void retranslateUi(QWidget *results)
    {
        results->setWindowTitle(QCoreApplication::translate("results", "Form", nullptr));
        exitButton->setText(QCoreApplication::translate("results", "PushButton", nullptr));
        to_main_menuButton->setText(QCoreApplication::translate("results", "PushButton", nullptr));
        resultLabel->setText(QCoreApplication::translate("results", "Congratz", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("results", "0", nullptr));
        img_Frame->setText(QCoreApplication::translate("results", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class results: public Ui_results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
