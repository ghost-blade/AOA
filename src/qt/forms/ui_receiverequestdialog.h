/********************************************************************************
** Form generated from reading UI file 'receiverequestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEREQUESTDIALOG_H
#define UI_RECEIVEREQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "receiverequestdialog.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveRequestDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRImageWidget *lblQRCode;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QTextEdit *outUri;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCopyURI;
    QPushButton *btnSaveAs;
    QPushButton *btnCopyAddress;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReceiveRequestDialog)
    {
        if (ReceiveRequestDialog->objectName().isEmpty())
            ReceiveRequestDialog->setObjectName(QStringLiteral("ReceiveRequestDialog"));
        ReceiveRequestDialog->resize(720, 320);
        verticalLayout_2 = new QVBoxLayout(ReceiveRequestDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 15, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 0, 30, 0);
        lblQRCode = new QRImageWidget(ReceiveRequestDialog);
        lblQRCode->setObjectName(QStringLiteral("lblQRCode"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQRCode->sizePolicy().hasHeightForWidth());
        lblQRCode->setSizePolicy(sizePolicy);
        lblQRCode->setMinimumSize(QSize(200, 200));
        lblQRCode->setMaximumSize(QSize(200, 200));
        lblQRCode->setTextFormat(Qt::PlainText);
        lblQRCode->setAlignment(Qt::AlignCenter);
        lblQRCode->setWordWrap(true);

        horizontalLayout_3->addWidget(lblQRCode);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 25, -1, 25);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        outUri = new QTextEdit(ReceiveRequestDialog);
        outUri->setObjectName(QStringLiteral("outUri"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outUri->sizePolicy().hasHeightForWidth());
        outUri->setSizePolicy(sizePolicy1);
        outUri->setMinimumSize(QSize(0, 50));
        outUri->setFrameShape(QFrame::NoFrame);
        outUri->setFrameShadow(QFrame::Plain);
        outUri->setTabChangesFocus(true);
        outUri->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(outUri);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonsContainerWhite = new QWidget(ReceiveRequestDialog);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        verticalLayout_4 = new QVBoxLayout(buttonsContainerWhite);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 15, 30, 15);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnCopyURI = new QPushButton(buttonsContainerWhite);
        btnCopyURI->setObjectName(QStringLiteral("btnCopyURI"));
        btnCopyURI->setAutoDefault(false);

        horizontalLayout->addWidget(btnCopyURI);

        btnSaveAs = new QPushButton(buttonsContainerWhite);
        btnSaveAs->setObjectName(QStringLiteral("btnSaveAs"));
        btnSaveAs->setAutoDefault(false);

        horizontalLayout->addWidget(btnSaveAs);

        btnCopyAddress = new QPushButton(buttonsContainerWhite);
        btnCopyAddress->setObjectName(QStringLiteral("btnCopyAddress"));
        btnCopyAddress->setAutoDefault(false);

        horizontalLayout->addWidget(btnCopyAddress);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral(""));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(buttonsContainerWhite);


        retranslateUi(ReceiveRequestDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ReceiveRequestDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ReceiveRequestDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReceiveRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveRequestDialog)
    {
#ifndef QT_NO_TOOLTIP
        lblQRCode->setToolTip(QApplication::translate("ReceiveRequestDialog", "QR Code", nullptr));
#endif // QT_NO_TOOLTIP
        btnCopyURI->setText(QApplication::translate("ReceiveRequestDialog", "Copy &URI", nullptr));
        btnSaveAs->setText(QApplication::translate("ReceiveRequestDialog", "&Save Image...", nullptr));
        btnCopyAddress->setText(QApplication::translate("ReceiveRequestDialog", "Copy &Address", nullptr));
        Q_UNUSED(ReceiveRequestDialog);
    } // retranslateUi

};

namespace Ui {
    class ReceiveRequestDialog: public Ui_ReceiveRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEREQUESTDIALOG_H
