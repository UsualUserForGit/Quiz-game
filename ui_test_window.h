/********************************************************************************
** Form generated from reading UI file 'test_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_WINDOW_H
#define UI_TEST_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_window
{
public:
    QLabel *question_label;
    QPushButton *answer_1_pushButton;
    QPushButton *answer_2_pushButton;
    QPushButton *answer_3_pushButton;
    QPushButton *answer_4_pushButton;

    void setupUi(QWidget *test_window)
    {
        if (test_window->objectName().isEmpty())
            test_window->setObjectName(QString::fromUtf8("test_window"));
        test_window->resize(800, 600);
        question_label = new QLabel(test_window);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setGeometry(QRect(29, 170, 741, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        font.setPointSize(18);
        font.setStyleStrategy(QFont::PreferAntialias);
        question_label->setFont(font);
        question_label->setCursor(QCursor(Qt::ArrowCursor));
        question_label->setFocusPolicy(Qt::NoFocus);
        question_label->setContextMenuPolicy(Qt::DefaultContextMenu);
        question_label->setStyleSheet(QString::fromUtf8("border-radius:25%;"));
        question_label->setTextFormat(Qt::AutoText);
        question_label->setScaledContents(false);
        question_label->setAlignment(Qt::AlignCenter);
        question_label->setIndent(0);
        answer_1_pushButton = new QPushButton(test_window);
        answer_1_pushButton->setObjectName(QString::fromUtf8("answer_1_pushButton"));
        answer_1_pushButton->setGeometry(QRect(100, 440, 260, 50));
        QFont font1;
        font1.setPointSize(12);
        answer_1_pushButton->setFont(font1);
        answer_1_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        answer_1_pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%;"));
        answer_2_pushButton = new QPushButton(test_window);
        answer_2_pushButton->setObjectName(QString::fromUtf8("answer_2_pushButton"));
        answer_2_pushButton->setGeometry(QRect(440, 440, 260, 50));
        answer_2_pushButton->setFont(font1);
        answer_2_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        answer_2_pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%;"));
        answer_3_pushButton = new QPushButton(test_window);
        answer_3_pushButton->setObjectName(QString::fromUtf8("answer_3_pushButton"));
        answer_3_pushButton->setGeometry(QRect(100, 510, 260, 50));
        answer_3_pushButton->setFont(font1);
        answer_3_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        answer_3_pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%;"));
        answer_4_pushButton = new QPushButton(test_window);
        answer_4_pushButton->setObjectName(QString::fromUtf8("answer_4_pushButton"));
        answer_4_pushButton->setGeometry(QRect(440, 510, 260, 50));
        answer_4_pushButton->setFont(font1);
        answer_4_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        answer_4_pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid white; border-radius:25%;"));

        retranslateUi(test_window);

        QMetaObject::connectSlotsByName(test_window);
    } // setupUi

    void retranslateUi(QWidget *test_window)
    {
        test_window->setWindowTitle(QCoreApplication::translate("test_window", "Form", nullptr));
        question_label->setText(QString());
        answer_1_pushButton->setText(QCoreApplication::translate("test_window", "PushButton", nullptr));
        answer_2_pushButton->setText(QCoreApplication::translate("test_window", "PushButton", nullptr));
        answer_3_pushButton->setText(QCoreApplication::translate("test_window", "PushButton", nullptr));
        answer_4_pushButton->setText(QCoreApplication::translate("test_window", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_window: public Ui_test_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_WINDOW_H
