/********************************************************************************
** Form generated from reading UI file 'addcategorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORYDIALOG_H
#define UI_ADDCATEGORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <mytextedit.h>

QT_BEGIN_NAMESPACE

class Ui_AddCategoryDialog
{
public:
    QPushButton *pushButton;
    MyTextEdit *textEdit;

    void setupUi(QDialog *AddCategoryDialog)
    {
        if (AddCategoryDialog->objectName().isEmpty())
            AddCategoryDialog->setObjectName(QStringLiteral("AddCategoryDialog"));
        AddCategoryDialog->resize(320, 80);
        pushButton = new QPushButton(AddCategoryDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 50, 75, 23));
        textEdit = new MyTextEdit(AddCategoryDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 10, 281, 31));

        retranslateUi(AddCategoryDialog);

        QMetaObject::connectSlotsByName(AddCategoryDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCategoryDialog)
    {
        AddCategoryDialog->setWindowTitle(QApplication::translate("AddCategoryDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("AddCategoryDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class AddCategoryDialog: public Ui_AddCategoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORYDIALOG_H
