/********************************************************************************
** Form generated from reading UI file 'CoresDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORESDIALOG_H
#define UI_CORESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CoresDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *ConfirmCoresButton;
    QPushButton *CancelCoresButton;
    QLineEdit *CoreTypeInput;
    QSpinBox *CoreNumberInput;

    void setupUi(QDialog *CoresDialog)
    {
        if (CoresDialog->objectName().isEmpty())
            CoresDialog->setObjectName(QString::fromUtf8("CoresDialog"));
        CoresDialog->resize(400, 300);
        label = new QLabel(CoresDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 81, 18));
        label_2 = new QLabel(CoresDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 10, 121, 18));
        ConfirmCoresButton = new QPushButton(CoresDialog);
        ConfirmCoresButton->setObjectName(QString::fromUtf8("ConfirmCoresButton"));
        ConfirmCoresButton->setGeometry(QRect(30, 240, 88, 34));
        CancelCoresButton = new QPushButton(CoresDialog);
        CancelCoresButton->setObjectName(QString::fromUtf8("CancelCoresButton"));
        CancelCoresButton->setGeometry(QRect(260, 240, 88, 34));
        CoreTypeInput = new QLineEdit(CoresDialog);
        CoreTypeInput->setObjectName(QString::fromUtf8("CoreTypeInput"));
        CoreTypeInput->setGeometry(QRect(20, 30, 113, 32));
        CoreNumberInput = new QSpinBox(CoresDialog);
        CoreNumberInput->setObjectName(QString::fromUtf8("CoreNumberInput"));
        CoreNumberInput->setGeometry(QRect(250, 30, 52, 32));

        retranslateUi(CoresDialog);

        QMetaObject::connectSlotsByName(CoresDialog);
    } // setupUi

    void retranslateUi(QDialog *CoresDialog)
    {
        CoresDialog->setWindowTitle(QApplication::translate("CoresDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CoresDialog", "Cores Type", nullptr));
        label_2->setText(QApplication::translate("CoresDialog", "Number Of Cores", nullptr));
        ConfirmCoresButton->setText(QApplication::translate("CoresDialog", "Ok", nullptr));
        CancelCoresButton->setText(QApplication::translate("CoresDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoresDialog: public Ui_CoresDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORESDIALOG_H
