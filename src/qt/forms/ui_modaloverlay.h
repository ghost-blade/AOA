/********************************************************************************
** Form generated from reading UI file 'modaloverlay.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALOVERLAY_H
#define UI_MODALOVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "modaloverlay.h"

QT_BEGIN_NAMESPACE

class Ui_ModalOverlay
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *bgWidget;
    QVBoxLayout *verticalLayoutMain;
    QWidget *contentWidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayoutIconText;
    QVBoxLayout *verticalLayoutIcon;
    QPushButton *warningIcon;
    QSpacerItem *verticalSpacerWarningIcon;
    QVBoxLayout *verticalLayoutInfoText;
    QLabel *infoText;
    QLabel *infoTextStrong;
    QSpacerItem *verticalSpacerInTextSpace;
    QFormLayout *formLayout;
    QLabel *labelNumberOfBlocksLeft;
    QLabel *numberOfBlocksLeft;
    QLabel *labelLastBlockTime;
    QLabel *newestBlockDate;
    QLabel *labelSyncDone;
    QHBoxLayout *horizontalLayoutSync;
    QLabel *percentageProgress;
    QProgressBar *progressBar;
    QLabel *labelProgressIncrease;
    QLabel *progressIncreasePerH;
    QLabel *labelEstimatedTimeLeft;
    QLabel *expectedTimeLeft;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *warningIconBackup;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelNote;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *walletBackupButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacerAfterText;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(ModalOverlay *ModalOverlay)
    {
        if (ModalOverlay->objectName().isEmpty())
            ModalOverlay->setObjectName(QStringLiteral("ModalOverlay"));
        ModalOverlay->resize(640, 520);
        verticalLayout = new QVBoxLayout(ModalOverlay);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bgWidget = new QWidget(ModalOverlay);
        bgWidget->setObjectName(QStringLiteral("bgWidget"));
        bgWidget->setStyleSheet(QStringLiteral("#bgWidget { background: rgba(0,0,0,220); }"));
        verticalLayoutMain = new QVBoxLayout(bgWidget);
        verticalLayoutMain->setObjectName(QStringLiteral("verticalLayoutMain"));
        verticalLayoutMain->setContentsMargins(60, 60, 60, 60);
        contentWidget = new QWidget(bgWidget);
        contentWidget->setObjectName(QStringLiteral("contentWidget"));
        contentWidget->setStyleSheet(QStringLiteral("#contentWidget { background: white; border-radius: 6px; }"));
        verticalLayout_3 = new QVBoxLayout(contentWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 10, 20, 10);
        stackedWidget = new QStackedWidget(contentWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutIconText = new QHBoxLayout();
        horizontalLayoutIconText->setSpacing(20);
        horizontalLayoutIconText->setObjectName(QStringLiteral("horizontalLayoutIconText"));
        horizontalLayoutIconText->setContentsMargins(-1, 20, -1, -1);
        verticalLayoutIcon = new QVBoxLayout();
        verticalLayoutIcon->setObjectName(QStringLiteral("verticalLayoutIcon"));
        warningIcon = new QPushButton(page);
        warningIcon->setObjectName(QStringLiteral("warningIcon"));
        warningIcon->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Disabled, QIcon::Off);
        warningIcon->setIcon(icon);
        warningIcon->setIconSize(QSize(48, 48));
        warningIcon->setFlat(true);

        verticalLayoutIcon->addWidget(warningIcon);

        verticalSpacerWarningIcon = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutIcon->addItem(verticalSpacerWarningIcon);


        horizontalLayoutIconText->addLayout(verticalLayoutIcon);

        verticalLayoutInfoText = new QVBoxLayout();
        verticalLayoutInfoText->setObjectName(QStringLiteral("verticalLayoutInfoText"));
        verticalLayoutInfoText->setContentsMargins(0, 0, -1, -1);
        infoText = new QLabel(page);
        infoText->setObjectName(QStringLiteral("infoText"));
        infoText->setTextFormat(Qt::RichText);
        infoText->setWordWrap(true);

        verticalLayoutInfoText->addWidget(infoText);

        infoTextStrong = new QLabel(page);
        infoTextStrong->setObjectName(QStringLiteral("infoTextStrong"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        infoTextStrong->setFont(font);
        infoTextStrong->setTextFormat(Qt::RichText);
        infoTextStrong->setWordWrap(true);

        verticalLayoutInfoText->addWidget(infoTextStrong);

        verticalSpacerInTextSpace = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutInfoText->addItem(verticalSpacerInTextSpace);


        horizontalLayoutIconText->addLayout(verticalLayoutInfoText);

        horizontalLayoutIconText->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayoutIconText);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(-1, 10, -1, -1);
        labelNumberOfBlocksLeft = new QLabel(page);
        labelNumberOfBlocksLeft->setObjectName(QStringLiteral("labelNumberOfBlocksLeft"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        labelNumberOfBlocksLeft->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNumberOfBlocksLeft);

        numberOfBlocksLeft = new QLabel(page);
        numberOfBlocksLeft->setObjectName(QStringLiteral("numberOfBlocksLeft"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numberOfBlocksLeft->sizePolicy().hasHeightForWidth());
        numberOfBlocksLeft->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, numberOfBlocksLeft);

        labelLastBlockTime = new QLabel(page);
        labelLastBlockTime->setObjectName(QStringLiteral("labelLastBlockTime"));
        labelLastBlockTime->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelLastBlockTime);

        newestBlockDate = new QLabel(page);
        newestBlockDate->setObjectName(QStringLiteral("newestBlockDate"));
        sizePolicy.setHeightForWidth(newestBlockDate->sizePolicy().hasHeightForWidth());
        newestBlockDate->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, newestBlockDate);

        labelSyncDone = new QLabel(page);
        labelSyncDone->setObjectName(QStringLiteral("labelSyncDone"));
        labelSyncDone->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSyncDone);

        horizontalLayoutSync = new QHBoxLayout();
        horizontalLayoutSync->setObjectName(QStringLiteral("horizontalLayoutSync"));
        percentageProgress = new QLabel(page);
        percentageProgress->setObjectName(QStringLiteral("percentageProgress"));
        percentageProgress->setText(QStringLiteral("~"));

        horizontalLayoutSync->addWidget(percentageProgress);

        progressBar = new QProgressBar(page);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayoutSync->addWidget(progressBar);

        horizontalLayoutSync->setStretch(1, 1);

        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayoutSync);

        labelProgressIncrease = new QLabel(page);
        labelProgressIncrease->setObjectName(QStringLiteral("labelProgressIncrease"));
        labelProgressIncrease->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelProgressIncrease);

        progressIncreasePerH = new QLabel(page);
        progressIncreasePerH->setObjectName(QStringLiteral("progressIncreasePerH"));
        sizePolicy.setHeightForWidth(progressIncreasePerH->sizePolicy().hasHeightForWidth());
        progressIncreasePerH->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, progressIncreasePerH);

        labelEstimatedTimeLeft = new QLabel(page);
        labelEstimatedTimeLeft->setObjectName(QStringLiteral("labelEstimatedTimeLeft"));
        labelEstimatedTimeLeft->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEstimatedTimeLeft);

        expectedTimeLeft = new QLabel(page);
        expectedTimeLeft->setObjectName(QStringLiteral("expectedTimeLeft"));
        sizePolicy.setHeightForWidth(expectedTimeLeft->sizePolicy().hasHeightForWidth());
        expectedTimeLeft->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, expectedTimeLeft);


        verticalLayout_2->addLayout(formLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 40, -1, 40);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        warningIconBackup = new QPushButton(page_2);
        warningIconBackup->setObjectName(QStringLiteral("warningIconBackup"));
        warningIconBackup->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/styles/app-icons/message_warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/styles/app-icons/message_warning"), QSize(), QIcon::Disabled, QIcon::Off);
        warningIconBackup->setIcon(icon1);
        warningIconBackup->setIconSize(QSize(120, 120));
        warningIconBackup->setFlat(true);

        horizontalLayout_2->addWidget(warningIconBackup);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_2);

        labelNote = new QLabel(page_2);
        labelNote->setObjectName(QStringLiteral("labelNote"));
        labelNote->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelNote);

        labelMessage = new QLabel(page_2);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_4->addWidget(labelMessage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        walletBackupButton = new QPushButton(page_2);
        walletBackupButton->setObjectName(QStringLiteral("walletBackupButton"));

        horizontalLayout->addWidget(walletBackupButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_2);

        verticalLayout_3->addWidget(stackedWidget);

        verticalSpacerAfterText = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerAfterText);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName(QStringLiteral("horizontalLayoutButtons"));
        horizontalLayoutButtons->setContentsMargins(10, 10, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacer);

        closeButton = new QPushButton(contentWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayoutButtons->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayoutButtons);

        verticalLayout_3->setStretch(0, 1);

        verticalLayoutMain->addWidget(contentWidget);


        verticalLayout->addWidget(bgWidget);


        retranslateUi(ModalOverlay);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModalOverlay);
    } // setupUi

    void retranslateUi(ModalOverlay *ModalOverlay)
    {
        ModalOverlay->setWindowTitle(QApplication::translate("ModalOverlay", "Form", nullptr));
        warningIcon->setText(QString());
        infoText->setText(QApplication::translate("ModalOverlay", "what the shit is this", nullptr));
        infoTextStrong->setText(QApplication::translate("ModalOverlay", "Attempting to spend qtums that are affected by not-yet-displayed transactions will not be accepted by the network.", nullptr));
        labelNumberOfBlocksLeft->setText(QApplication::translate("ModalOverlay", "Number of blocks left", nullptr));
        numberOfBlocksLeft->setText(QApplication::translate("ModalOverlay", "Unknown...", nullptr));
        labelLastBlockTime->setText(QApplication::translate("ModalOverlay", "Last block time", nullptr));
        newestBlockDate->setText(QApplication::translate("ModalOverlay", "Unknown...", nullptr));
        labelSyncDone->setText(QApplication::translate("ModalOverlay", "Progress", nullptr));
        progressBar->setFormat(QString());
        labelProgressIncrease->setText(QApplication::translate("ModalOverlay", "Progress increase per hour", nullptr));
        progressIncreasePerH->setText(QApplication::translate("ModalOverlay", "calculating...", nullptr));
        labelEstimatedTimeLeft->setText(QApplication::translate("ModalOverlay", "Estimated time left until synced", nullptr));
        expectedTimeLeft->setText(QApplication::translate("ModalOverlay", "calculating...", nullptr));
        warningIconBackup->setText(QString());
        labelNote->setText(QApplication::translate("ModalOverlay", "IMPORATANT NOTE!", nullptr));
        labelMessage->setText(QApplication::translate("ModalOverlay", "Making a backup of your wallet helps ensure you can always maintain access to your funds. Please backup your wallet in order to avoid losing funds.", nullptr));
        walletBackupButton->setText(QApplication::translate("ModalOverlay", "Wallet backup", nullptr));
        closeButton->setText(QApplication::translate("ModalOverlay", "Hide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModalOverlay: public Ui_ModalOverlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALOVERLAY_H
