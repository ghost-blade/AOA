/********************************************************************************
** Form generated from reading UI file 'tokendescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOKENDESCDIALOG_H
#define UI_TOKENDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TokenDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *detailText;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TokenDescDialog)
    {
        if (TokenDescDialog->objectName().isEmpty())
            TokenDescDialog->setObjectName(QStringLiteral("TokenDescDialog"));
        TokenDescDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(TokenDescDialog);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        detailText = new QTextEdit(TokenDescDialog);
        detailText->setObjectName(QStringLiteral("detailText"));
        detailText->setReadOnly(true);

        horizontalLayout_2->addWidget(detailText);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonsContainerWhite = new QWidget(TokenDescDialog);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, 15);
        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(TokenDescDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TokenDescDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TokenDescDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TokenDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TokenDescDialog)
    {
        TokenDescDialog->setWindowTitle(QApplication::translate("TokenDescDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TokenDescDialog: public Ui_TokenDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOKENDESCDIALOG_H
