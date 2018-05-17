/********************************************************************************
** Form generated from reading UI file 'addtokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOKENPAGE_H
#define UI_ADDTOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addressfield.h"

QT_BEGIN_NAMESPACE

class Ui_AddTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelTokenSymbol;
    QLineEdit *lineEditDecimals;
    QLabel *labelDecimals;
    QLineEdit *lineEditTokenName;
    QLabel *labelContractAddress;
    QLineEdit *lineEditTokenSymbol;
    QLabel *labelTokenName;
    QLineEdit *lineEditContractAddress;
    QVBoxLayout *verticalLayout_2;
    AddressField *lineEditSenderAddress;
    QLabel *labelDescription;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *labelSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmButton;

    void setupUi(QWidget *AddTokenPage)
    {
        if (AddTokenPage->objectName().isEmpty())
            AddTokenPage->setObjectName(QStringLiteral("AddTokenPage"));
        AddTokenPage->resize(531, 311);
        verticalLayout = new QVBoxLayout(AddTokenPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        labelTokenSymbol = new QLabel(AddTokenPage);
        labelTokenSymbol->setObjectName(QStringLiteral("labelTokenSymbol"));
        labelTokenSymbol->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelTokenSymbol, 2, 0, 1, 1);

        lineEditDecimals = new QLineEdit(AddTokenPage);
        lineEditDecimals->setObjectName(QStringLiteral("lineEditDecimals"));
        lineEditDecimals->setAlignment(Qt::AlignCenter);
        lineEditDecimals->setReadOnly(true);

        gridLayout->addWidget(lineEditDecimals, 3, 1, 1, 1);

        labelDecimals = new QLabel(AddTokenPage);
        labelDecimals->setObjectName(QStringLiteral("labelDecimals"));
        labelDecimals->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelDecimals, 3, 0, 1, 1);

        lineEditTokenName = new QLineEdit(AddTokenPage);
        lineEditTokenName->setObjectName(QStringLiteral("lineEditTokenName"));
        lineEditTokenName->setAlignment(Qt::AlignCenter);
        lineEditTokenName->setReadOnly(false);

        gridLayout->addWidget(lineEditTokenName, 1, 1, 1, 1);

        labelContractAddress = new QLabel(AddTokenPage);
        labelContractAddress->setObjectName(QStringLiteral("labelContractAddress"));
        labelContractAddress->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelContractAddress, 0, 0, 1, 1);

        lineEditTokenSymbol = new QLineEdit(AddTokenPage);
        lineEditTokenSymbol->setObjectName(QStringLiteral("lineEditTokenSymbol"));
        lineEditTokenSymbol->setAlignment(Qt::AlignCenter);
        lineEditTokenSymbol->setReadOnly(false);

        gridLayout->addWidget(lineEditTokenSymbol, 2, 1, 1, 1);

        labelTokenName = new QLabel(AddTokenPage);
        labelTokenName->setObjectName(QStringLiteral("labelTokenName"));
        labelTokenName->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelTokenName, 1, 0, 1, 1);

        lineEditContractAddress = new QLineEdit(AddTokenPage);
        lineEditContractAddress->setObjectName(QStringLiteral("lineEditContractAddress"));
        lineEditContractAddress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEditContractAddress, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEditSenderAddress = new AddressField(AddTokenPage);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));

        verticalLayout_2->addWidget(lineEditSenderAddress);

        labelDescription = new QLabel(AddTokenPage);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDescription->sizePolicy().hasHeightForWidth());
        labelDescription->setSizePolicy(sizePolicy);
        labelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelDescription->setWordWrap(true);

        verticalLayout_2->addWidget(labelDescription);


        gridLayout->addLayout(verticalLayout_2, 4, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(AddTokenPage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(120, 0));

        verticalLayout_3->addWidget(label);

        labelSpacer = new QLabel(AddTokenPage);
        labelSpacer->setObjectName(QStringLiteral("labelSpacer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelSpacer->sizePolicy().hasHeightForWidth());
        labelSpacer->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(labelSpacer);


        gridLayout->addLayout(verticalLayout_3, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearButton = new QPushButton(AddTokenPage);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        confirmButton = new QPushButton(AddTokenPage);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setEnabled(false);

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddTokenPage);

        QMetaObject::connectSlotsByName(AddTokenPage);
    } // setupUi

    void retranslateUi(QWidget *AddTokenPage)
    {
        AddTokenPage->setWindowTitle(QApplication::translate("AddTokenPage", "Form", nullptr));
        labelTokenSymbol->setText(QApplication::translate("AddTokenPage", "Token Symbol", nullptr));
        labelDecimals->setText(QApplication::translate("AddTokenPage", "Decimals", nullptr));
        labelContractAddress->setText(QApplication::translate("AddTokenPage", "Contract Address", nullptr));
        labelTokenName->setText(QApplication::translate("AddTokenPage", "Token Name", nullptr));
        labelDescription->setText(QString());
        label->setText(QApplication::translate("AddTokenPage", "Token Address", nullptr));
        labelSpacer->setText(QString());
        clearButton->setText(QApplication::translate("AddTokenPage", "Clear", nullptr));
        confirmButton->setText(QApplication::translate("AddTokenPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTokenPage: public Ui_AddTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOKENPAGE_H
