/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QCheckBox *stakingCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QStringLiteral("AskPassphraseDialog"));
        AskPassphraseDialog->resize(600, 270);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, 30, -1);
        warningLabel = new QLabel(AskPassphraseDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setText(QStringLiteral("Placeholder text"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout_2->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(-1, -1, -1, 10);
        passLabel1 = new QLabel(AskPassphraseDialog);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassphraseDialog);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassphraseDialog);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassphraseDialog);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassphraseDialog);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassphraseDialog);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(AskPassphraseDialog);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        capsLabel->setFont(font);
        capsLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);

        stakingCheckBox = new QCheckBox(AskPassphraseDialog);
        stakingCheckBox->setObjectName(QStringLiteral("stakingCheckBox"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, stakingCheckBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(AskPassphraseDialog);
        buttonsContainerWhite->setObjectName(QStringLiteral("buttonsContainerWhite"));
        buttonsContainerWhite->setMaximumSize(QSize(16777215, 55));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, 15);
        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(AskPassphraseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassphraseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassphraseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", nullptr));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", nullptr));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", nullptr));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", nullptr));
        capsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        stakingCheckBox->setToolTip(QApplication::translate("AskPassphraseDialog", "Serves to disable the trivial sendmoney when OS account compromised. Provides no real security.", nullptr));
#endif // QT_NO_TOOLTIP
        stakingCheckBox->setText(QApplication::translate("AskPassphraseDialog", "For staking only.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
