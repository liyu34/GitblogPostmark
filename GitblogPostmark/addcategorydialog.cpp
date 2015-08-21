#include "addcategorydialog.h"
#include "ui_addcategorydialog.h"

AddCategoryDialog::AddCategoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCategoryDialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(pressed()),this,SLOT(GetName()));
	connect(ui->textEdit, SIGNAL(PressedEnter()), this, SLOT(GetName()));
	ui->textEdit->setFocus();
}

AddCategoryDialog::~AddCategoryDialog()
{
    delete ui;
}

void AddCategoryDialog::GetName()
{
    QString name = ui->textEdit->document()->toPlainText();
    emit CategoryName(name);
    this->close();
}
