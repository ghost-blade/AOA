/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelTokens;
    QToolButton *labelTokenStatus;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *buttonAddToken;
    QFrame *frameOtherTokens;
    QVBoxLayout *verticalLayout_10;
    QListView *listTokens;
    QFrame *frameBalances;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelImmature;
    QLabel *labelImmatureText;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QLabel *labelWatchStake;
    QLabel *labelWatchImmature;
    QLabel *labelWatchTotal;
    QSpacerItem *verticalSpacer;
    QLabel *labelTotal;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelTotalText;
    QFrame *hLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBalances;
    QToolButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelRecentTransactions;
    QToolButton *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameRecentTransactions;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDate;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelType;
    QLabel *labelAddress;
    QLabel *labelAmount;
    QListView *listTransactions;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *showMoreButton;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(778, 533);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        topLayout->addWidget(labelAlerts);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 9);
        labelTokens = new QLabel(OverviewPage);
        labelTokens->setObjectName(QStringLiteral("labelTokens"));

        horizontalLayout_4->addWidget(labelTokens);

        labelTokenStatus = new QToolButton(OverviewPage);
        labelTokenStatus->setObjectName(QStringLiteral("labelTokenStatus"));
        labelTokenStatus->setIconSize(QSize(24, 24));
        labelTokenStatus->setProperty("flat", QVariant(false));

        horizontalLayout_4->addWidget(labelTokenStatus);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        buttonAddToken = new QPushButton(OverviewPage);
        buttonAddToken->setObjectName(QStringLiteral("buttonAddToken"));

        horizontalLayout_4->addWidget(buttonAddToken);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        frameOtherTokens = new QFrame(OverviewPage);
        frameOtherTokens->setObjectName(QStringLiteral("frameOtherTokens"));
        frameOtherTokens->setMinimumSize(QSize(0, 100));
        frameOtherTokens->setFrameShape(QFrame::StyledPanel);
        frameOtherTokens->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frameOtherTokens);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        listTokens = new QListView(frameOtherTokens);
        listTokens->setObjectName(QStringLiteral("listTokens"));
        listTokens->setEnabled(true);

        verticalLayout_10->addWidget(listTokens);


        gridLayout_2->addWidget(frameOtherTokens, 1, 2, 1, 1);

        frameBalances = new QFrame(OverviewPage);
        frameBalances->setObjectName(QStringLiteral("frameBalances"));
        frameBalances->setFrameShape(QFrame::StyledPanel);
        frameBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frameBalances);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelWatchPending = new QLabel(frameBalances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 3, 1, 1);

        labelUnconfirmed = new QLabel(frameBalances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 2, 1, 1);

        labelImmature = new QLabel(frameBalances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 2, 1, 1);

        labelImmatureText = new QLabel(frameBalances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelWatchonly = new QLabel(frameBalances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 3, 1, 1);

        labelBalanceText = new QLabel(frameBalances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frameBalances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 2, 1, 1);

        labelWatchAvailable = new QLabel(frameBalances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 3, 1, 1);

        labelPendingText = new QLabel(frameBalances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frameBalances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 2, 1, 1);

        labelStakeText = new QLabel(frameBalances);
        labelStakeText->setObjectName(QStringLiteral("labelStakeText"));

        gridLayout->addWidget(labelStakeText, 4, 0, 1, 1);

        labelStake = new QLabel(frameBalances);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setFont(font);
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelStake, 4, 2, 1, 1);

        labelWatchStake = new QLabel(frameBalances);
        labelWatchStake->setObjectName(QStringLiteral("labelWatchStake"));
        labelWatchStake->setFont(font);
        labelWatchStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchStake, 4, 3, 1, 1);

        labelWatchImmature = new QLabel(frameBalances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 3, 1, 1);

        labelWatchTotal = new QLabel(frameBalances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 7, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 4);

        labelTotal = new QLabel(frameBalances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 AUROLA"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 7, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 5, 1);

        labelTotalText = new QLabel(frameBalances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 7, 0, 1, 1);

        hLine = new QFrame(frameBalances);
        hLine->setObjectName(QStringLiteral("hLine"));
        hLine->setFrameShape(QFrame::HLine);
        hLine->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(hLine, 6, 0, 1, 4);


        verticalLayout_4->addLayout(gridLayout);


        gridLayout_2->addWidget(frameBalances, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 9);
        labelBalances = new QLabel(OverviewPage);
        labelBalances->setObjectName(QStringLiteral("labelBalances"));

        horizontalLayout_2->addWidget(labelBalances);

        labelWalletStatus = new QToolButton(OverviewPage);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Disabled, QIcon::Off);
        labelWalletStatus->setIcon(icon);
        labelWalletStatus->setIconSize(QSize(24, 24));
        labelWalletStatus->setProperty("flat", QVariant(false));

        horizontalLayout_2->addWidget(labelWalletStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 2, 1);


        topLayout->addLayout(gridLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        topLayout->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 9);
        labelRecentTransactions = new QLabel(OverviewPage);
        labelRecentTransactions->setObjectName(QStringLiteral("labelRecentTransactions"));

        horizontalLayout_6->addWidget(labelRecentTransactions);

        labelTransactionsStatus = new QToolButton(OverviewPage);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setEnabled(true);
        labelTransactionsStatus->setIcon(icon);
        labelTransactionsStatus->setIconSize(QSize(24, 24));
        labelTransactionsStatus->setProperty("flat", QVariant(false));

        horizontalLayout_6->addWidget(labelTransactionsStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        topLayout->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frameRecentTransactions = new QFrame(OverviewPage);
        frameRecentTransactions->setObjectName(QStringLiteral("frameRecentTransactions"));
        frameRecentTransactions->setFrameShape(QFrame::StyledPanel);
        frameRecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frameRecentTransactions);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        labelDate = new QLabel(frameRecentTransactions);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        horizontalLayout_3->addWidget(labelDate);

        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        labelType = new QLabel(frameRecentTransactions);
        labelType->setObjectName(QStringLiteral("labelType"));

        horizontalLayout_3->addWidget(labelType);

        labelAddress = new QLabel(frameRecentTransactions);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        horizontalLayout_3->addWidget(labelAddress);

        labelAmount = new QLabel(frameRecentTransactions);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        labelAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelAmount);


        verticalLayout_8->addLayout(horizontalLayout_3);

        listTransactions = new QListView(frameRecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_8->addWidget(listTransactions);


        verticalLayout_3->addWidget(frameRecentTransactions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, 5);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        showMoreButton = new QPushButton(OverviewPage);
        showMoreButton->setObjectName(QStringLiteral("showMoreButton"));

        horizontalLayout->addWidget(showMoreButton);


        verticalLayout_3->addLayout(horizontalLayout);


        topLayout->addLayout(verticalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", nullptr));
        labelTokens->setText(QApplication::translate("OverviewPage", "Other Tokens", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTokenStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Aurola network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
        labelTokenStatus->setText(QString());
        buttonAddToken->setText(QApplication::translate("OverviewPage", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", nullptr));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", nullptr));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", nullptr));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", nullptr));
        labelStakeText->setText(QApplication::translate("OverviewPage", "Stake:", nullptr));
        labelStake->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 AUROLA", nullptr));
        labelWatchStake->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 AUROLA", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:        ", nullptr));
        labelBalances->setText(QApplication::translate("OverviewPage", "Balances", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Aurola network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
        labelWalletStatus->setText(QString());
        labelRecentTransactions->setText(QApplication::translate("OverviewPage", "RecentTransactions", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Aurola network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
        labelTransactionsStatus->setText(QString());
        labelDate->setText(QApplication::translate("OverviewPage", "Date", nullptr));
        labelType->setText(QApplication::translate("OverviewPage", "Type", nullptr));
        labelAddress->setText(QApplication::translate("OverviewPage", "Label", nullptr));
        labelAmount->setText(QApplication::translate("OverviewPage", "Amount", nullptr));
        showMoreButton->setText(QApplication::translate("OverviewPage", "Show more...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
