/********************************************************************************
** Form generated from reading UI file 'restoredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREDIALOG_H
#define UI_RESTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RestoreDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbWalletPath;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtWalletPath;
    QPushButton *toolWalletPath;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbReindex;
    QRadioButton *rbSalvage;
    QSpacerItem *verticalSpacer;
    QLabel *lblInfo;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnReset;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *btnBoxRestore;

    void setupUi(QDialog *RestoreDialog)
    {
        if (RestoreDialog->objectName().isEmpty())
            RestoreDialog->setObjectName(QStringLiteral("RestoreDialog"));
        RestoreDialog->resize(555, 352);
        verticalLayout_3 = new QVBoxLayout(RestoreDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        gbWalletPath = new QGroupBox(RestoreDialog);
        gbWalletPath->setObjectName(QStringLiteral("gbWalletPath"));
        horizontalLayout = new QHBoxLayout(gbWalletPath);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtWalletPath = new QLineEdit(gbWalletPath);
        txtWalletPath->setObjectName(QStringLiteral("txtWalletPath"));
        txtWalletPath->setReadOnly(true);

        horizontalLayout->addWidget(txtWalletPath);

        toolWalletPath = new QPushButton(gbWalletPath);
        toolWalletPath->setObjectName(QStringLiteral("toolWalletPath"));

        horizontalLayout->addWidget(toolWalletPath);


        verticalLayout_2->addWidget(gbWalletPath);

        groupBox = new QGroupBox(RestoreDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rbReindex = new QRadioButton(groupBox);
        rbReindex->setObjectName(QStringLiteral("rbReindex"));
        rbReindex->setChecked(true);

        verticalLayout->addWidget(rbReindex);

        rbSalvage = new QRadioButton(groupBox);
        rbSalvage->setObjectName(QStringLiteral("rbSalvage"));

        verticalLayout->addWidget(rbSalvage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);

        lblInfo = new QLabel(RestoreDialog);
        lblInfo->setObjectName(QStringLiteral("lblInfo"));
        lblInfo->setWordWrap(true);

        verticalLayout_2->addWidget(lblInfo);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(RestoreDialog);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 25, 30, 15);
        btnReset = new QPushButton(buttonsContainerWhite);
        btnReset->setObjectName(QStringLiteral("btnReset"));

        horizontalLayout_2->addWidget(btnReset);

        horizontalSpacer = new QSpacerItem(196, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnBoxRestore = new QDialogButtonBox(buttonsContainerWhite);
        btnBoxRestore->setObjectName(QStringLiteral("btnBoxRestore"));
        btnBoxRestore->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(btnBoxRestore);


        verticalLayout_3->addWidget(buttonsContainerWhite);


        retranslateUi(RestoreDialog);

        QMetaObject::connectSlotsByName(RestoreDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreDialog)
    {
        RestoreDialog->setWindowTitle(QApplication::translate("RestoreDialog", "Dialog", nullptr));
        gbWalletPath->setTitle(QApplication::translate("RestoreDialog", "Select wallet file to restore from", nullptr));
        toolWalletPath->setText(QApplication::translate("RestoreDialog", "...", nullptr));
        groupBox->setTitle(QApplication::translate("RestoreDialog", "Choose wallet restore option", nullptr));
        rbReindex->setText(QApplication::translate("RestoreDialog", "Reindex", nullptr));
        rbSalvage->setText(QApplication::translate("RestoreDialog", "Salvage", nullptr));
        lblInfo->setText(QApplication::translate("RestoreDialog", "The wallet.dat will be restored from the selected location and the Qt Wallet will be restarted with the -reindex or -salvagewallet option.", nullptr));
        btnReset->setText(QApplication::translate("RestoreDialog", "&Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestoreDialog: public Ui_RestoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREDIALOG_H
