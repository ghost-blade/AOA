/********************************************************************************
** Form generated from reading UI file 'contractresult.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACTRESULT_H
#define UI_CONTRACTRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContractResult
{
public:
    QWidget *pageCreateOrSendToResult;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxCreateOrSendTo;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditTxID;
    QLabel *labelContractAddress;
    QLabel *labelHash160;
    QLineEdit *lineEditContractAddress;
    QLabel *labelSenderAddress;
    QLineEdit *lineEditHash160;
    QLineEdit *lineEditSenderAddress;
    QLabel *labelTxID;
    QSpacerItem *verticalSpacer;
    QWidget *pageCallResult;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxCallContract;
    QGridLayout *gridLayout;
    QLabel *labelCallContractAddress;
    QLineEdit *lineEditCallContractAddress;
    QScrollArea *scrollAreaParams;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelFunction;
    QLineEdit *lineEditFunction;
    QLineEdit *lineEditCallSenderAddress;
    QLabel *labelCallSenderAddress;
    QGroupBox *groupBoxResult;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollAreaResult;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QStackedWidget *ContractResult)
    {
        if (ContractResult->objectName().isEmpty())
            ContractResult->setObjectName(QStringLiteral("ContractResult"));
        ContractResult->resize(941, 503);
        ContractResult->setStyleSheet(QLatin1String("QLineEdit{\n"
" border: 0px;\n"
"background: transparent;\n"
"}"));
        pageCreateOrSendToResult = new QWidget();
        pageCreateOrSendToResult->setObjectName(QStringLiteral("pageCreateOrSendToResult"));
        verticalLayout_3 = new QVBoxLayout(pageCreateOrSendToResult);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxCreateOrSendTo = new QGroupBox(pageCreateOrSendToResult);
        groupBoxCreateOrSendTo->setObjectName(QStringLiteral("groupBoxCreateOrSendTo"));
        gridLayout_2 = new QGridLayout(groupBoxCreateOrSendTo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditTxID = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditTxID->setObjectName(QStringLiteral("lineEditTxID"));
        lineEditTxID->setMinimumSize(QSize(370, 0));
        lineEditTxID->setReadOnly(true);

        gridLayout_2->addWidget(lineEditTxID, 0, 1, 1, 1);

        labelContractAddress = new QLabel(groupBoxCreateOrSendTo);
        labelContractAddress->setObjectName(QStringLiteral("labelContractAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelContractAddress->sizePolicy().hasHeightForWidth());
        labelContractAddress->setSizePolicy(sizePolicy);
        labelContractAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelContractAddress, 3, 0, 1, 1);

        labelHash160 = new QLabel(groupBoxCreateOrSendTo);
        labelHash160->setObjectName(QStringLiteral("labelHash160"));
        sizePolicy.setHeightForWidth(labelHash160->sizePolicy().hasHeightForWidth());
        labelHash160->setSizePolicy(sizePolicy);
        labelHash160->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelHash160, 2, 0, 1, 1);

        lineEditContractAddress = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditContractAddress->setObjectName(QStringLiteral("lineEditContractAddress"));
        lineEditContractAddress->setEnabled(true);
        lineEditContractAddress->setMinimumSize(QSize(370, 0));
        lineEditContractAddress->setReadOnly(true);

        gridLayout_2->addWidget(lineEditContractAddress, 3, 1, 1, 1);

        labelSenderAddress = new QLabel(groupBoxCreateOrSendTo);
        labelSenderAddress->setObjectName(QStringLiteral("labelSenderAddress"));
        sizePolicy.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelSenderAddress, 1, 0, 1, 1);

        lineEditHash160 = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditHash160->setObjectName(QStringLiteral("lineEditHash160"));
        lineEditHash160->setMinimumSize(QSize(370, 0));
        lineEditHash160->setReadOnly(true);

        gridLayout_2->addWidget(lineEditHash160, 2, 1, 1, 1);

        lineEditSenderAddress = new QLineEdit(groupBoxCreateOrSendTo);
        lineEditSenderAddress->setObjectName(QStringLiteral("lineEditSenderAddress"));
        lineEditSenderAddress->setEnabled(true);
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));
        lineEditSenderAddress->setReadOnly(true);

        gridLayout_2->addWidget(lineEditSenderAddress, 1, 1, 1, 1);

        labelTxID = new QLabel(groupBoxCreateOrSendTo);
        labelTxID->setObjectName(QStringLiteral("labelTxID"));
        sizePolicy.setHeightForWidth(labelTxID->sizePolicy().hasHeightForWidth());
        labelTxID->setSizePolicy(sizePolicy);
        labelTxID->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelTxID, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxCreateOrSendTo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        ContractResult->addWidget(pageCreateOrSendToResult);
        pageCallResult = new QWidget();
        pageCallResult->setObjectName(QStringLiteral("pageCallResult"));
        verticalLayout = new QVBoxLayout(pageCallResult);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxCallContract = new QGroupBox(pageCallResult);
        groupBoxCallContract->setObjectName(QStringLiteral("groupBoxCallContract"));
        groupBoxCallContract->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(groupBoxCallContract);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(15, 15, -1, -1);
        labelCallContractAddress = new QLabel(groupBoxCallContract);
        labelCallContractAddress->setObjectName(QStringLiteral("labelCallContractAddress"));
        sizePolicy.setHeightForWidth(labelCallContractAddress->sizePolicy().hasHeightForWidth());
        labelCallContractAddress->setSizePolicy(sizePolicy);
        labelCallContractAddress->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelCallContractAddress, 0, 0, 1, 1);

        lineEditCallContractAddress = new QLineEdit(groupBoxCallContract);
        lineEditCallContractAddress->setObjectName(QStringLiteral("lineEditCallContractAddress"));
        lineEditCallContractAddress->setEnabled(true);
        lineEditCallContractAddress->setMinimumSize(QSize(370, 0));
        lineEditCallContractAddress->setReadOnly(true);

        gridLayout->addWidget(lineEditCallContractAddress, 0, 1, 1, 1);

        scrollAreaParams = new QScrollArea(groupBoxCallContract);
        scrollAreaParams->setObjectName(QStringLiteral("scrollAreaParams"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaParams->sizePolicy().hasHeightForWidth());
        scrollAreaParams->setSizePolicy(sizePolicy1);
        scrollAreaParams->setStyleSheet(QStringLiteral(""));
        scrollAreaParams->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaParams->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 889, 73));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollAreaParams->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollAreaParams, 2, 0, 1, 2);

        labelFunction = new QLabel(groupBoxCallContract);
        labelFunction->setObjectName(QStringLiteral("labelFunction"));
        sizePolicy.setHeightForWidth(labelFunction->sizePolicy().hasHeightForWidth());
        labelFunction->setSizePolicy(sizePolicy);
        labelFunction->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelFunction, 1, 0, 1, 1);

        lineEditFunction = new QLineEdit(groupBoxCallContract);
        lineEditFunction->setObjectName(QStringLiteral("lineEditFunction"));
        lineEditFunction->setEnabled(true);
        lineEditFunction->setMinimumSize(QSize(370, 0));
        lineEditFunction->setReadOnly(true);

        gridLayout->addWidget(lineEditFunction, 1, 1, 1, 1);

        lineEditCallSenderAddress = new QLineEdit(groupBoxCallContract);
        lineEditCallSenderAddress->setObjectName(QStringLiteral("lineEditCallSenderAddress"));
        lineEditCallSenderAddress->setEnabled(true);
        lineEditCallSenderAddress->setMinimumSize(QSize(370, 0));
        lineEditCallSenderAddress->setReadOnly(true);

        gridLayout->addWidget(lineEditCallSenderAddress, 3, 1, 1, 1);

        labelCallSenderAddress = new QLabel(groupBoxCallContract);
        labelCallSenderAddress->setObjectName(QStringLiteral("labelCallSenderAddress"));
        sizePolicy.setHeightForWidth(labelCallSenderAddress->sizePolicy().hasHeightForWidth());
        labelCallSenderAddress->setSizePolicy(sizePolicy);
        labelCallSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout->addWidget(labelCallSenderAddress, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBoxCallContract);

        groupBoxResult = new QGroupBox(pageCallResult);
        groupBoxResult->setObjectName(QStringLiteral("groupBoxResult"));
        verticalLayout_2 = new QVBoxLayout(groupBoxResult);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 9, -1);
        scrollAreaResult = new QScrollArea(groupBoxResult);
        scrollAreaResult->setObjectName(QStringLiteral("scrollAreaResult"));
        sizePolicy1.setHeightForWidth(scrollAreaResult->sizePolicy().hasHeightForWidth());
        scrollAreaResult->setSizePolicy(sizePolicy1);
        scrollAreaResult->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaResult->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 889, 73));
        scrollAreaResult->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollAreaResult);


        verticalLayout->addWidget(groupBoxResult);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        ContractResult->addWidget(pageCallResult);

        retranslateUi(ContractResult);

        ContractResult->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ContractResult);
    } // setupUi

    void retranslateUi(QStackedWidget *ContractResult)
    {
        ContractResult->setWindowTitle(QApplication::translate("ContractResult", "StackedWidget", nullptr));
        groupBoxCreateOrSendTo->setTitle(QApplication::translate("ContractResult", "Contract Summary", nullptr));
        labelContractAddress->setText(QApplication::translate("ContractResult", "ContractAddress", nullptr));
        labelHash160->setText(QApplication::translate("ContractResult", "Hash160", nullptr));
        labelSenderAddress->setText(QApplication::translate("ContractResult", "SenderAddress", nullptr));
        labelTxID->setText(QApplication::translate("ContractResult", "Transaction ID", nullptr));
        groupBoxCallContract->setTitle(QApplication::translate("ContractResult", "Contract Summary", nullptr));
        labelCallContractAddress->setText(QApplication::translate("ContractResult", "ContractAddress", nullptr));
        labelFunction->setText(QApplication::translate("ContractResult", "Function", nullptr));
        labelCallSenderAddress->setText(QApplication::translate("ContractResult", "SenderAddress", nullptr));
        groupBoxResult->setTitle(QApplication::translate("ContractResult", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContractResult: public Ui_ContractResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACTRESULT_H
