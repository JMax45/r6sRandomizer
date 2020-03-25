/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCheck_database;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QPlainTextEdit *plainTextEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menuBar;
    QMenu *menuTools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(652, 488);
        actionCheck_database = new QAction(MainWindow);
        actionCheck_database->setObjectName(QStringLiteral("actionCheck_database"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        verticalLayout = new QVBoxLayout(page_1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(page_1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(250, 250));
        label->setMaximumSize(QSize(250, 250));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(page_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        QFont font;
        font.setPointSize(19);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setItalic(true);
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(page_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(page_1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMargin(0);

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(page_1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(page_1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        label_5 = new QLabel(page_1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(page_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayoutWidget = new QWidget(page_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 611, 27));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        horizontalLayoutWidget_2 = new QWidget(page_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 100, 611, 311));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout_8->addWidget(plainTextEdit);

        horizontalLayoutWidget_3 = new QWidget(page_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(9, 50, 611, 41));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(200, 16777215));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_9->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_9->addWidget(pushButton_5);

        label_9 = new QLabel(horizontalLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        horizontalLayoutWidget_4 = new QWidget(page_3);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(9, 420, 611, 20));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_11->addWidget(label_11);

        label_12 = new QLabel(horizontalLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_11->addWidget(label_12);

        label_13 = new QLabel(horizontalLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 652, 22));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionCheck_database);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "R6S Randomizer", Q_NULLPTR));
        actionCheck_database->setText(QApplication::translate("MainWindow", "Check database", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "image", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "name", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Primary weapon:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Secondary:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "primwIcon", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "secwIcon", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Attacker", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Defender", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Analyze", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Rebuild", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "standby", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "found", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "missing", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
