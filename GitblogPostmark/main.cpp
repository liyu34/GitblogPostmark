#include "gitblogpostmark.h"
#include <QtWidgets/QApplication>
#include "qtextcodec.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	GitblogPostmark w;
	w.show();
	return a.exec();
}
