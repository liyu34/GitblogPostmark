/********************************************************************************
** Form generated from reading UI file 'gitblogpostmark.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITBLOGPOSTMARK_H
#define UI_GITBLOGPOSTMARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <mytextedit.h>

QT_BEGIN_NAMESPACE

class Ui_GitblogPostmarkClass
{
public:
    QWidget *centralWidget;
    MyTextEdit *authorEdit;
    MyTextEdit *titleEdit;
    MyTextEdit *tagsEdit;
    MyTextEdit *summaryEdit;
    QComboBox *statusCombo;
    QComboBox *categoryCombo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QPushButton *addCategory;
    QPushButton *OkButton;
    QTextBrowser *filePathBrowser;
    QPushButton *choseFileButton;
    QLabel *label_8;
    QPushButton *setDefaultDir;

    void setupUi(QMainWindow *GitblogPostmarkClass)
    {
        if (GitblogPostmarkClass->objectName().isEmpty())
            GitblogPostmarkClass->setObjectName(QStringLiteral("GitblogPostmarkClass"));
        GitblogPostmarkClass->resize(600, 466);
        centralWidget = new QWidget(GitblogPostmarkClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        authorEdit = new MyTextEdit(centralWidget);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));
        authorEdit->setGeometry(QRect(140, 90, 431, 31));
        titleEdit = new MyTextEdit(centralWidget);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));
        titleEdit->setGeometry(QRect(140, 140, 431, 31));
        tagsEdit = new MyTextEdit(centralWidget);
        tagsEdit->setObjectName(QStringLiteral("tagsEdit"));
        tagsEdit->setGeometry(QRect(140, 190, 431, 31));
        summaryEdit = new MyTextEdit(centralWidget);
        summaryEdit->setObjectName(QStringLiteral("summaryEdit"));
        summaryEdit->setGeometry(QRect(140, 340, 431, 71));
        statusCombo = new QComboBox(centralWidget);
        statusCombo->setObjectName(QStringLiteral("statusCombo"));
        statusCombo->setGeometry(QRect(140, 240, 171, 31));
        categoryCombo = new QComboBox(centralWidget);
        categoryCombo->setObjectName(QStringLiteral("categoryCombo"));
        categoryCombo->setGeometry(QRect(140, 290, 171, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 91, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 91, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 91, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 240, 91, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 290, 91, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 360, 91, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 240, 91, 31));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(460, 240, 111, 31));
        addCategory = new QPushButton(centralWidget);
        addCategory->setObjectName(QStringLiteral("addCategory"));
        addCategory->setGeometry(QRect(360, 290, 211, 31));
        OkButton = new QPushButton(centralWidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(460, 420, 111, 31));
        filePathBrowser = new QTextBrowser(centralWidget);
        filePathBrowser->setObjectName(QStringLiteral("filePathBrowser"));
        filePathBrowser->setGeometry(QRect(140, 30, 291, 31));
        filePathBrowser->setReadOnly(false);
        choseFileButton = new QPushButton(centralWidget);
        choseFileButton->setObjectName(QStringLiteral("choseFileButton"));
        choseFileButton->setGeometry(QRect(460, 40, 111, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 30, 91, 31));
        setDefaultDir = new QPushButton(centralWidget);
        setDefaultDir->setObjectName(QStringLiteral("setDefaultDir"));
        setDefaultDir->setGeometry(QRect(460, 10, 111, 31));
        GitblogPostmarkClass->setCentralWidget(centralWidget);

        retranslateUi(GitblogPostmarkClass);

        QMetaObject::connectSlotsByName(GitblogPostmarkClass);
    } // setupUi

    void retranslateUi(QMainWindow *GitblogPostmarkClass)
    {
        GitblogPostmarkClass->setWindowTitle(QApplication::translate("GitblogPostmarkClass", "GitblogPostmark", 0));
        label->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\344\275\234\350\200\205</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\346\240\207\351\242\230</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\346\240\207\347\255\276</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\351\200\211\346\213\251\347\212\266\346\200\201</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\351\200\211\346\213\251\346\226\207\351\233\206</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\346\200\273\347\273\223</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\351\200\211\346\213\251\346\227\266\351\227\264</span></p></body></html>", 0));
        addCategory->setText(QApplication::translate("GitblogPostmarkClass", "\346\267\273\345\212\240\346\226\207\351\233\206", 0));
        OkButton->setText(QApplication::translate("GitblogPostmarkClass", "\347\241\256\345\256\232", 0));
        choseFileButton->setText(QApplication::translate("GitblogPostmarkClass", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        label_8->setText(QApplication::translate("GitblogPostmarkClass", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\226\207\344\273\266\347\233\256\345\275\225</span></p></body></html>", 0));
        setDefaultDir->setText(QApplication::translate("GitblogPostmarkClass", "\350\256\276\347\275\256\351\273\230\350\256\244\346\226\207\344\273\266\347\233\256\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class GitblogPostmarkClass: public Ui_GitblogPostmarkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITBLOGPOSTMARK_H
