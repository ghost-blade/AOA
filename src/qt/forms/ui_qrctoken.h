/********************************************************************************
** Form generated from reading UI file 'qrctoken.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCTOKEN_H
#define UI_QRCTOKEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRCToken
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QListView *tokensList;
    QStackedWidget *stackedWidgetToken;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *tokenViewLayout;

    void setupUi(QWidget *QRCToken)
    {
        if (QRCToken->objectName().isEmpty())
            QRCToken->setObjectName(QStringLiteral("QRCToken"));
        QRCToken->resize(723, 467);
        verticalLayout_2 = new QVBoxLayout(QRCToken);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tokensList = new QListView(QRCToken);
        tokensList->setObjectName(QStringLiteral("tokensList"));
        tokensList->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(tokensList);


        horizontalLayout->addLayout(verticalLayout_3);

        stackedWidgetToken = new QStackedWidget(QRCToken);
        stackedWidgetToken->setObjectName(QStringLiteral("stackedWidgetToken"));

        horizontalLayout->addWidget(stackedWidgetToken);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        tokenViewLayout = new QVBoxLayout();
        tokenViewLayout->setObjectName(QStringLiteral("tokenViewLayout"));

        verticalLayout_2->addLayout(tokenViewLayout);


        retranslateUi(QRCToken);

        QMetaObject::connectSlotsByName(QRCToken);
    } // setupUi

    void retranslateUi(QWidget *QRCToken)
    {
        QRCToken->setWindowTitle(QApplication::translate("ARCToken", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRCToken: public Ui_QRCToken {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCTOKEN_H
