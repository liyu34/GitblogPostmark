#ifndef GITBLOGPOSTMARK_H
#define GITBLOGPOSTMARK_H

#include <QtWidgets/QMainWindow>
#include "ui_gitblogpostmark.h"
#include "addcategorydialog.h"
#include "qstring.h"
#include "qfile.h"
#include "mytextedit.h"

class GitblogPostmark : public QMainWindow
{
	Q_OBJECT

public:
	GitblogPostmark(QWidget *parent = 0);
	~GitblogPostmark();
private:
	void InitCategory();
	void InitFilePath();

private:
	Ui::GitblogPostmarkClass ui;
	AddCategoryDialog *acd;
	QString filePath;

private slots:
	void GetData();
	void AddCategory(QString cate);
	void ShowACDialog();
	void ChoseFile();
	void SetDefaultFilePath();
};

#endif // GITBLOGPOSTMARK_H
