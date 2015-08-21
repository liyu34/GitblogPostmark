#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QWidget>
#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
public:
    MyTextEdit(QWidget *parent=0);

    void SetNext(MyTextEdit *n){next = n;}
private:
    bool event(QEvent *e);
private:
    MyTextEdit *next;

};

#endif // MYTEXTEDIT_H
