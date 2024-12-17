/********************************************************************************
** Form generated from reading UI file 'paperwalletdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPERWALLETDIALOG_H
#define UI_PAPERWALLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include "verticallabel.h"

QT_BEGIN_NAMESPACE

class Ui_PaperWalletDialog
{
public:
    QLabel *privateKeyQRCode;
    QLabel *addressQRCode;
    QPushButton *getNewAddress;
    QLabel *paperTemplate;
    VerticalLabel *addressText;
    VerticalLabel *privateKeyText;
    QPushButton *printButton;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *walletCount;
    QTextEdit *publicKey;
    QLabel *label_2;

    void setupUi(QDialog *PaperWalletDialog)
    {
        if (PaperWalletDialog->objectName().isEmpty())
            PaperWalletDialog->setObjectName(QStringLiteral("PaperWalletDialog"));
        PaperWalletDialog->resize(716, 450);
        privateKeyQRCode = new QLabel(PaperWalletDialog);
        privateKeyQRCode->setObjectName(QStringLiteral("privateKeyQRCode"));
        privateKeyQRCode->setGeometry(QRect(524, 159, 149, 149));
        privateKeyQRCode->setScaledContents(true);
        addressQRCode = new QLabel(PaperWalletDialog);
        addressQRCode->setObjectName(QStringLiteral("addressQRCode"));
        addressQRCode->setGeometry(QRect(47, 86, 120, 120));
        addressQRCode->setScaledContents(true);
        getNewAddress = new QPushButton(PaperWalletDialog);
        getNewAddress->setObjectName(QStringLiteral("getNewAddress"));
        getNewAddress->setGeometry(QRect(20, 415, 151, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        getNewAddress->setIcon(icon);
        paperTemplate = new QLabel(PaperWalletDialog);
        paperTemplate->setObjectName(QStringLiteral("paperTemplate"));
        paperTemplate->setGeometry(QRect(20, 10, 675, 362));
        paperTemplate->setText(QStringLiteral(""));
        paperTemplate->setPixmap(QPixmap(QString::fromUtf8(":/icons/paper_wallet")));
        addressText = new VerticalLabel(PaperWalletDialog);
        addressText->setObjectName(QStringLiteral("addressText"));
        addressText->setGeometry(QRect(212, 10, 31, 361));
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        addressText->setFont(font);
        addressText->setAlignment(Qt::AlignCenter);
        addressText->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        privateKeyText = new VerticalLabel(PaperWalletDialog);
        privateKeyText->setObjectName(QStringLiteral("privateKeyText"));
        privateKeyText->setGeometry(QRect(500, 10, 31, 361));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        privateKeyText->setFont(font1);
        privateKeyText->setScaledContents(true);
        privateKeyText->setAlignment(Qt::AlignCenter);
        privateKeyText->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        printButton = new QPushButton(PaperWalletDialog);
        printButton->setObjectName(QStringLiteral("printButton"));
        printButton->setGeometry(QRect(420, 415, 111, 26));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/receiving_addresses"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon1);
        buttonBox = new QDialogButtonBox(PaperWalletDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(610, 415, 81, 26));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        buttonBox->setCenterButtons(true);
        label = new QLabel(PaperWalletDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 415, 91, 26));
        walletCount = new QComboBox(PaperWalletDialog);
        walletCount->setObjectName(QStringLiteral("walletCount"));
        walletCount->setGeometry(QRect(290, 415, 74, 26));
        walletCount->setEditable(false);
        publicKey = new QTextEdit(PaperWalletDialog);
        publicKey->setObjectName(QStringLiteral("publicKey"));
        publicKey->setGeometry(QRect(100, 378, 600, 30));
        publicKey->setUndoRedoEnabled(false);
        publicKey->setReadOnly(true);
        publicKey->setAcceptRichText(false);
        label_2 = new QLabel(PaperWalletDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 380, 91, 26));
        getNewAddress->raise();
        paperTemplate->raise();
        addressQRCode->raise();
        privateKeyQRCode->raise();
        addressText->raise();
        privateKeyText->raise();
        printButton->raise();
        buttonBox->raise();
        label->raise();
        walletCount->raise();
        publicKey->raise();
        label_2->raise();

        retranslateUi(PaperWalletDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PaperWalletDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(PaperWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *PaperWalletDialog)
    {
        PaperWalletDialog->setWindowTitle(QApplication::translate("PaperWalletDialog", "Print Your Paper Wallets", Q_NULLPTR));
        privateKeyQRCode->setText(QString());
        addressQRCode->setText(QString());
        getNewAddress->setText(QApplication::translate("PaperWalletDialog", "Very New Address", Q_NULLPTR));
        addressText->setText(QString());
        privateKeyText->setText(QString());
        printButton->setText(QApplication::translate("PaperWalletDialog", "So Print", Q_NULLPTR));
        label->setText(QApplication::translate("PaperWalletDialog", "Many Wallets?", Q_NULLPTR));
        walletCount->clear();
        walletCount->insertItems(0, QStringList()
         << QApplication::translate("PaperWalletDialog", "1", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "2", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "3", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "4", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "5", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "6", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "7", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "8", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "9", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "10", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "11", Q_NULLPTR)
         << QApplication::translate("PaperWalletDialog", "12", Q_NULLPTR)
        );
        publicKey->setHtml(QApplication::translate("PaperWalletDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("PaperWalletDialog", "Public Key:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PaperWalletDialog: public Ui_PaperWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPERWALLETDIALOG_H
