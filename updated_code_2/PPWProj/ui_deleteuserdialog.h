/********************************************************************************
** Form generated from reading UI file 'deleteuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSERDIALOG_H
#define UI_DELETEUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DeleteUserDialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *DeleteUserDialog)
    {
        if (DeleteUserDialog->objectName().isEmpty())
            DeleteUserDialog->setObjectName(QString::fromUtf8("DeleteUserDialog"));
        DeleteUserDialog->resize(400, 124);
        pushButton = new QPushButton(DeleteUserDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 80, 89, 25));
        textEdit = new QTextEdit(DeleteUserDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 30, 360, 30));

        retranslateUi(DeleteUserDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), DeleteUserDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(DeleteUserDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteUserDialog)
    {
        DeleteUserDialog->setWindowTitle(QCoreApplication::translate("DeleteUserDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteUserDialog", "Submit", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DeleteUserDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">User to delete</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUserDialog: public Ui_DeleteUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSERDIALOG_H
