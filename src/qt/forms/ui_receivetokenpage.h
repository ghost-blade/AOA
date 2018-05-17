/********************************************************************************
** Form generated from reading UI file 'receivetokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVETOKENPAGE_H
#define UI_RECEIVETOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiveTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblQRCode;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetAddress;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTokenAddressText;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTokenAddress;
    QToolButton *copyAddressButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ReceiveTokenPage)
    {
        if (ReceiveTokenPage->objectName().isEmpty())
            ReceiveTokenPage->setObjectName(QStringLiteral("ReceiveTokenPage"));
        ReceiveTokenPage->setEnabled(true);
        ReceiveTokenPage->resize(594, 342);
        verticalLayout = new QVBoxLayout(ReceiveTokenPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblQRCode = new QLabel(ReceiveTokenPage);
        lblQRCode->setObjectName(QStringLiteral("lblQRCode"));
        lblQRCode->setMinimumSize(QSize(200, 220));
        lblQRCode->setMaximumSize(QSize(200, 220));
        lblQRCode->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblQRCode);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widgetAddress = new QWidget(ReceiveTokenPage);
        widgetAddress->setObjectName(QStringLiteral("widgetAddress"));
        verticalLayout_3 = new QVBoxLayout(widgetAddress);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelTokenAddressText = new QLabel(widgetAddress);
        labelTokenAddressText->setObjectName(QStringLiteral("labelTokenAddressText"));
        labelTokenAddressText->setMinimumSize(QSize(350, 0));

        verticalLayout_3->addWidget(labelTokenAddressText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTokenAddress = new QLabel(widgetAddress);
        labelTokenAddress->setObjectName(QStringLiteral("labelTokenAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTokenAddress->sizePolicy().hasHeightForWidth());
        labelTokenAddress->setSizePolicy(sizePolicy);
        labelTokenAddress->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(labelTokenAddress);

        copyAddressButton = new QToolButton(widgetAddress);
        copyAddressButton->setObjectName(QStringLiteral("copyAddressButton"));
        copyAddressButton->setMinimumSize(QSize(28, 30));

        horizontalLayout->addWidget(copyAddressButton, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widgetAddress);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ReceiveTokenPage);

        QMetaObject::connectSlotsByName(ReceiveTokenPage);
    } // setupUi

    void retranslateUi(QWidget *ReceiveTokenPage)
    {
        ReceiveTokenPage->setWindowTitle(QApplication::translate("ReceiveTokenPage", "Form", nullptr));
        lblQRCode->setText(QString());
        labelTokenAddressText->setText(QApplication::translate("ReceiveTokenPage", "Address", nullptr));
        labelTokenAddress->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReceiveTokenPage: public Ui_ReceiveTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVETOKENPAGE_H
