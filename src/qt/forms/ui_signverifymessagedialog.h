/********************************************************************************
** Form generated from reading UI file 'signverifymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNVERIFYMESSAGEDIALOG_H
#define UI_SIGNVERIFYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SignVerifyMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSignMessage;
    QVBoxLayout *verticalLayout_SM;
    QVBoxLayout *verticalLayout_3;
    QLabel *infoLabel_SM;
    QHBoxLayout *horizontalLayout_1_SM;
    QValidatedLineEdit *addressIn_SM;
    QPushButton *addressBookButton_SM;
    QFrame *vLine;
    QPushButton *pasteButton_SM;
    QPlainTextEdit *messageIn_SM;
    QLabel *signatureLabel_SM;
    QHBoxLayout *horizontalLayout_2_SM;
    QLineEdit *signatureOut_SM;
    QPushButton *copySignatureButton_SM;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton_SM;
    QPushButton *signMessageButton_SM;
    QSpacerItem *horizontalSpacer_1_SM;
    QLabel *statusLabel_SM;
    QSpacerItem *horizontalSpacer_2_SM;
    QWidget *tabVerifyMessage;
    QVBoxLayout *verticalLayout_VM;
    QVBoxLayout *verticalLayout_2;
    QLabel *infoLabel_VM;
    QHBoxLayout *horizontalLayout_1_VM;
    QValidatedLineEdit *addressIn_VM;
    QPushButton *addressBookButton_VM;
    QPlainTextEdit *messageIn_VM;
    QValidatedLineEdit *signatureIn_VM;
    QWidget *buttonsContainerWhite_;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *clearButton_VM;
    QPushButton *verifyMessageButton_VM;
    QSpacerItem *horizontalSpacer_1_VM;
    QLabel *statusLabel_VM;
    QSpacerItem *horizontalSpacer_2_VM;

    void setupUi(QDialog *SignVerifyMessageDialog)
    {
        if (SignVerifyMessageDialog->objectName().isEmpty())
            SignVerifyMessageDialog->setObjectName(QStringLiteral("SignVerifyMessageDialog"));
        SignVerifyMessageDialog->resize(800, 450);
        SignVerifyMessageDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SignVerifyMessageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(SignVerifyMessageDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabSignMessage = new QWidget();
        tabSignMessage->setObjectName(QStringLiteral("tabSignMessage"));
        verticalLayout_SM = new QVBoxLayout(tabSignMessage);
        verticalLayout_SM->setObjectName(QStringLiteral("verticalLayout_SM"));
        verticalLayout_SM->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 20, 30, 20);
        infoLabel_SM = new QLabel(tabSignMessage);
        infoLabel_SM->setObjectName(QStringLiteral("infoLabel_SM"));
        infoLabel_SM->setTextFormat(Qt::PlainText);
        infoLabel_SM->setWordWrap(true);

        verticalLayout_3->addWidget(infoLabel_SM);

        horizontalLayout_1_SM = new QHBoxLayout();
        horizontalLayout_1_SM->setSpacing(6);
        horizontalLayout_1_SM->setObjectName(QStringLiteral("horizontalLayout_1_SM"));
        addressIn_SM = new QValidatedLineEdit(tabSignMessage);
        addressIn_SM->setObjectName(QStringLiteral("addressIn_SM"));

        horizontalLayout_1_SM->addWidget(addressIn_SM);

        addressBookButton_SM = new QPushButton(tabSignMessage);
        addressBookButton_SM->setObjectName(QStringLiteral("addressBookButton_SM"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton_SM->setIcon(icon);
        addressBookButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(addressBookButton_SM);

        vLine = new QFrame(tabSignMessage);
        vLine->setObjectName(QStringLiteral("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_1_SM->addWidget(vLine);

        pasteButton_SM = new QPushButton(tabSignMessage);
        pasteButton_SM->setObjectName(QStringLiteral("pasteButton_SM"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton_SM->setIcon(icon1);
        pasteButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(pasteButton_SM);


        verticalLayout_3->addLayout(horizontalLayout_1_SM);

        messageIn_SM = new QPlainTextEdit(tabSignMessage);
        messageIn_SM->setObjectName(QStringLiteral("messageIn_SM"));

        verticalLayout_3->addWidget(messageIn_SM);

        signatureLabel_SM = new QLabel(tabSignMessage);
        signatureLabel_SM->setObjectName(QStringLiteral("signatureLabel_SM"));
        signatureLabel_SM->setTextFormat(Qt::PlainText);

        verticalLayout_3->addWidget(signatureLabel_SM);

        horizontalLayout_2_SM = new QHBoxLayout();
        horizontalLayout_2_SM->setSpacing(6);
        horizontalLayout_2_SM->setObjectName(QStringLiteral("horizontalLayout_2_SM"));
        signatureOut_SM = new QLineEdit(tabSignMessage);
        signatureOut_SM->setObjectName(QStringLiteral("signatureOut_SM"));
        QFont font;
        font.setItalic(true);
        signatureOut_SM->setFont(font);
        signatureOut_SM->setReadOnly(true);

        horizontalLayout_2_SM->addWidget(signatureOut_SM);

        copySignatureButton_SM = new QPushButton(tabSignMessage);
        copySignatureButton_SM->setObjectName(QStringLiteral("copySignatureButton_SM"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copySignatureButton_SM->setIcon(icon2);
        copySignatureButton_SM->setAutoDefault(false);

        horizontalLayout_2_SM->addWidget(copySignatureButton_SM);


        verticalLayout_3->addLayout(horizontalLayout_2_SM);


        verticalLayout_SM->addLayout(verticalLayout_3);

        buttonsContainerWhite = new QWidget(tabSignMessage);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, -1);
        clearButton_SM = new QPushButton(buttonsContainerWhite);
        clearButton_SM->setObjectName(QStringLiteral("clearButton_SM"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_SM->setIcon(icon3);
        clearButton_SM->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton_SM);

        signMessageButton_SM = new QPushButton(buttonsContainerWhite);
        signMessageButton_SM->setObjectName(QStringLiteral("signMessageButton_SM"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signMessageButton_SM->setIcon(icon4);
        signMessageButton_SM->setAutoDefault(false);

        horizontalLayout->addWidget(signMessageButton_SM);

        horizontalSpacer_1_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1_SM);

        statusLabel_SM = new QLabel(buttonsContainerWhite);
        statusLabel_SM->setObjectName(QStringLiteral("statusLabel_SM"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        statusLabel_SM->setFont(font1);
        statusLabel_SM->setWordWrap(true);

        horizontalLayout->addWidget(statusLabel_SM);

        horizontalSpacer_2_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2_SM);


        verticalLayout_SM->addWidget(buttonsContainerWhite);

        tabWidget->addTab(tabSignMessage, QString());
        tabVerifyMessage = new QWidget();
        tabVerifyMessage->setObjectName(QStringLiteral("tabVerifyMessage"));
        verticalLayout_VM = new QVBoxLayout(tabVerifyMessage);
        verticalLayout_VM->setObjectName(QStringLiteral("verticalLayout_VM"));
        verticalLayout_VM->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        infoLabel_VM = new QLabel(tabVerifyMessage);
        infoLabel_VM->setObjectName(QStringLiteral("infoLabel_VM"));
        infoLabel_VM->setTextFormat(Qt::PlainText);
        infoLabel_VM->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel_VM->setWordWrap(true);

        verticalLayout_2->addWidget(infoLabel_VM);

        horizontalLayout_1_VM = new QHBoxLayout();
        horizontalLayout_1_VM->setSpacing(6);
        horizontalLayout_1_VM->setObjectName(QStringLiteral("horizontalLayout_1_VM"));
        addressIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        addressIn_VM->setObjectName(QStringLiteral("addressIn_VM"));

        horizontalLayout_1_VM->addWidget(addressIn_VM);

        addressBookButton_VM = new QPushButton(tabVerifyMessage);
        addressBookButton_VM->setObjectName(QStringLiteral("addressBookButton_VM"));
        addressBookButton_VM->setIcon(icon);
        addressBookButton_VM->setAutoDefault(false);

        horizontalLayout_1_VM->addWidget(addressBookButton_VM);


        verticalLayout_2->addLayout(horizontalLayout_1_VM);

        messageIn_VM = new QPlainTextEdit(tabVerifyMessage);
        messageIn_VM->setObjectName(QStringLiteral("messageIn_VM"));

        verticalLayout_2->addWidget(messageIn_VM);

        signatureIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        signatureIn_VM->setObjectName(QStringLiteral("signatureIn_VM"));

        verticalLayout_2->addWidget(signatureIn_VM);


        verticalLayout_VM->addLayout(verticalLayout_2);

        buttonsContainerWhite_ = new QWidget(tabVerifyMessage);
        buttonsContainerWhite_->setObjectName(QStringLiteral("buttonsContainerWhite_"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite_);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        clearButton_VM = new QPushButton(buttonsContainerWhite_);
        clearButton_VM->setObjectName(QStringLiteral("clearButton_VM"));
        clearButton_VM->setIcon(icon3);
        clearButton_VM->setAutoDefault(false);

        horizontalLayout_2->addWidget(clearButton_VM);

        verifyMessageButton_VM = new QPushButton(buttonsContainerWhite_);
        verifyMessageButton_VM->setObjectName(QStringLiteral("verifyMessageButton_VM"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessageButton_VM->setIcon(icon5);
        verifyMessageButton_VM->setAutoDefault(false);

        horizontalLayout_2->addWidget(verifyMessageButton_VM);

        horizontalSpacer_1_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1_VM);

        statusLabel_VM = new QLabel(buttonsContainerWhite_);
        statusLabel_VM->setObjectName(QStringLiteral("statusLabel_VM"));
        statusLabel_VM->setFont(font1);
        statusLabel_VM->setWordWrap(true);

        horizontalLayout_2->addWidget(statusLabel_VM);

        horizontalSpacer_2_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2_VM);


        verticalLayout_VM->addWidget(buttonsContainerWhite_);

        tabWidget->addTab(tabVerifyMessage, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(SignVerifyMessageDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SignVerifyMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignVerifyMessageDialog)
    {
        SignVerifyMessageDialog->setWindowTitle(QApplication::translate("SignVerifyMessageDialog", "Signatures - Sign / Verify a Message", nullptr));
        infoLabel_SM->setText(QApplication::translate("SignVerifyMessageDialog", "You can sign messages/agreements with your addresses to prove you can receive qtums sent to them. Be careful not to sign anything vague or random, as phishing attacks may try to trick you into signing your identity over to them. Only sign fully-detailed statements you agree to.", nullptr));
#ifndef QT_NO_TOOLTIP
        addressIn_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "The Qtum address to sign the message with", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_NO_TOOLTIP
        addressBookButton_SM->setText(QString());
#ifndef QT_NO_SHORTCUT
        addressBookButton_SM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pasteButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Paste address from clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        pasteButton_SM->setText(QString());
#ifndef QT_NO_SHORTCUT
        pasteButton_SM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+P", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        messageIn_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Enter the message you want to sign here", nullptr));
#endif // QT_NO_TOOLTIP
        signatureLabel_SM->setText(QApplication::translate("SignVerifyMessageDialog", "Signature", nullptr));
#ifndef QT_NO_TOOLTIP
        copySignatureButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Copy the current signature to the system clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        copySignatureButton_SM->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Reset all sign message fields", nullptr));
#endif // QT_NO_TOOLTIP
        clearButton_SM->setText(QApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
#ifndef QT_NO_TOOLTIP
        signMessageButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Sign the message to prove you own this Qtum address", nullptr));
#endif // QT_NO_TOOLTIP
        signMessageButton_SM->setText(QApplication::translate("SignVerifyMessageDialog", "Sign &Message", nullptr));
        statusLabel_SM->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabSignMessage), QApplication::translate("SignVerifyMessageDialog", "&Sign Message", nullptr));
        infoLabel_VM->setText(QApplication::translate("SignVerifyMessageDialog", "Enter the receiver's address, message (ensure you copy line breaks, spaces, tabs, etc. exactly) and signature below to verify the message. Be careful not to read more into the signature than what is in the signed message itself, to avoid being tricked by a man-in-the-middle attack. Note that this only proves the signing party receives with the address, it cannot prove sendership of any transaction!", nullptr));
#ifndef QT_NO_TOOLTIP
        addressIn_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "The Qtum address the message was signed with", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_NO_TOOLTIP
        addressBookButton_VM->setText(QString());
#ifndef QT_NO_SHORTCUT
        addressBookButton_VM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        clearButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Reset all verify message fields", nullptr));
#endif // QT_NO_TOOLTIP
        clearButton_VM->setText(QApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
#ifndef QT_NO_TOOLTIP
        verifyMessageButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Verify the message to ensure it was signed with the specified Qtum address", nullptr));
#endif // QT_NO_TOOLTIP
        verifyMessageButton_VM->setText(QApplication::translate("SignVerifyMessageDialog", "Verify &Message", nullptr));
        statusLabel_VM->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabVerifyMessage), QApplication::translate("SignVerifyMessageDialog", "&Verify Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignVerifyMessageDialog: public Ui_SignVerifyMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNVERIFYMESSAGEDIALOG_H
