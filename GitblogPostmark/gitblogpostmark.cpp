#include "gitblogpostmark.h"
#include "qmessagebox.h"
#include "qtextstream.h"
#include "qfiledialog.h"
#include "qdatetime.h"
#include "qdir.h"

GitblogPostmark::GitblogPostmark(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	acd = NULL;
	connect(ui.OkButton, SIGNAL(pressed()), this, SLOT(GetData()));

	//connect(ui.authorEdit, SIGNAL(PressedEnter()), this, SLOT(GetData()));
	//connect(ui.titleEdit, SIGNAL(PressedEnter()), this, SLOT(GetData()));
	//connect(ui.tagsEdit, SIGNAL(PressedEnter()), this, SLOT(GetData()));

	connect(ui.summaryEdit, SIGNAL(PressedEnter()), this, SLOT(GetData()));
	connect(ui.addCategory, SIGNAL(pressed()), this, SLOT(ShowACDialog()));
	connect(ui.choseFileButton, SIGNAL(pressed()), this, SLOT(ChoseFile()));
	connect(ui.setDefaultDir, SIGNAL(pressed()), this, SLOT(SetDefaultFilePath()));

	InitCategory();
	InitFilePath();
	ui.dateEdit->setDate(QDate::currentDate());
	ui.dateEdit->setCurrentSectionIndex(2);
	ui.statusCombo->addItem("publish");
	ui.statusCombo->addItem("draft");
	ui.authorEdit->SetNext(ui.titleEdit);
	ui.titleEdit->SetNext(ui.tagsEdit);
	ui.tagsEdit->SetNext(ui.summaryEdit);
	ui.summaryEdit->SetNext(ui.authorEdit);

}

GitblogPostmark::~GitblogPostmark()
{

}

void GitblogPostmark::GetData()
{
	QString settings = "<!--\n";

	QString author;
	QString title;
	QString tags;
	QString category;
	QString status;
	QString summary;
	QString date;

	author = ui.authorEdit->document()->toPlainText();
	title = ui.titleEdit->document()->toPlainText();
	tags = ui.tagsEdit->document()->toPlainText();
	summary = ui.summaryEdit->document()->toPlainText();
	date = ui.dateEdit->date().toString("yyyy-MM-dd");

	category = ui.categoryCombo->currentText();
	status = ui.statusCombo->currentText();

	settings += "author:" + author + "\n";
	settings += "date:" + date + "\n";
	settings += "title:" + title + "\n";
	settings += "tags:" + tags + "\n";
	settings += "category:" + category + "\n";
	settings += "status:" + status + "\n";
	settings += "summary:" + summary + "\n";
	settings += "-->\n";

	filePath = ui.filePathBrowser->toPlainText();
	QFile file(filePath);
	if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
	{
		QMessageBox::information(NULL, "Error!", "The path isn't exist!Please reset the default path!");
		return;
	}
	QTextStream write(&file);
	write.seek(0);
	write << settings;
	file.close();

	this->close();
}

void GitblogPostmark::InitCategory()
{
	QFile file("categories.txt");
	if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
	{
		QMessageBox::information(NULL, "Error!", "There is no categories file!");
	}
	QTextStream read(&file);
	QString line;
	line = read.readLine();
	line = line.trimmed();
	if (line == "")
	{
		line = "Gitblog";
		read << line;
	}
	while (line != "")
	{
		ui.categoryCombo->addItem(line);
		line = read.readLine();
		line = line.trimmed();
	}
	file.close();
}

void GitblogPostmark::AddCategory(QString cate)
{
	QFile file("categories.txt");
	if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
	{
		QMessageBox::information(NULL, "Error!", "Can't open the category file!");
	}
	QTextStream write(&file);
	write.readAll();
	write << cate << endl;
	file.close();
	ui.categoryCombo->clear();
	InitCategory();
}

void GitblogPostmark::ShowACDialog()
{
	acd = new AddCategoryDialog();
	acd->show();
	connect(acd, SIGNAL(CategoryName(QString)), this, SLOT(AddCategory(QString)));
}

void GitblogPostmark::InitFilePath()
{
	QFile file("config.txt");
	QString dir = "";
	if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
	{
		QMessageBox::information(NULL, "Error!", "Can't open the category file!");
	}

	QTextStream read(&file);
	dir = read.readLine();
	if (dir == "")
	{
		dir = QDir::currentPath();
		read << dir;
	}
	file.close();

	if (!(dir.at(dir.length() - 1) == "/"))
		dir += "/";

	QString name = QDateTime::currentDateTime().toString("yyyy-MM-dd-h-m");
	filePath = dir + name + ".md";
	ui.filePathBrowser->setText(filePath);
	
}

void GitblogPostmark::ChoseFile()
{
	filePath = QFileDialog::getOpenFileName();
	ui.filePathBrowser->setText(filePath);
}

void GitblogPostmark::SetDefaultFilePath()
{
	QFile file("config.txt");
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream write(&file);
	QString defaultDirectory = QFileDialog::getExistingDirectory();
	if (defaultDirectory != "")
	{
		if (!(defaultDirectory.at(defaultDirectory.length() - 1) == "/"))
			defaultDirectory += "/";
		write << defaultDirectory;
		file.close();
		ui.filePathBrowser->document()->clear();
		InitFilePath();
	}
}