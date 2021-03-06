#include "mytextedit.h"
#include "qevent.h"
#include "qkeyeventtransition.h"
MyTextEdit::MyTextEdit(QWidget *parent)
    :QTextEdit(parent)
{
    next = NULL;
}

bool MyTextEdit::event(QEvent *e)
{
    if (e->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(e);
		int k = keyEvent->key();
        if (keyEvent->key() == Qt::Key_Tab)
        {
            // 处理Tab鍵
            //clearFocus();
            if(next!=NULL)
                next->setFocus();
            return true;
        }
		if (keyEvent->key() == Qt::Key_Enter || keyEvent->key() == Qt::Key_Return)
		{
			emit PressedEnter();
		}
    }
    return QWidget::event(e);
}

