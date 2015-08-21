#ifndef GITBLOGPOSTMARK_H
#define GITBLOGPOSTMARK_H

#include <QtWidgets/QMainWindow>
#include "ui_gitblogpostmark.h"

class GitblogPostmark : public QMainWindow
{
	Q_OBJECT

public:
	GitblogPostmark(QWidget *parent = 0);
	~GitblogPostmark();

private:
	Ui::GitblogPostmarkClass ui;
};

#endif // GITBLOGPOSTMARK_H
