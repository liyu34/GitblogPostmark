#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QWidget>
#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
	Q_OBJECT
public:
    MyTextEdit(QWidget *parent=0);

    void SetNext(MyTextEdit *n){next = n;}
private:
    bool event(QEvent *e);
private:
    MyTextEdit *next;
signals:
	void PressedEnter();

};

#endif // MYTEXTEDIT_H
