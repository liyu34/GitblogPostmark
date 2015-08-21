#ifndef ADDCATEGORYDIALOG_H
#define ADDCATEGORYDIALOG_H

#include "qdialog.h"
#include "qstring.h"
#include "mytextedit.h"

namespace Ui {
class AddCategoryDialog;
}

class AddCategoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCategoryDialog(QWidget *parent = 0);
    ~AddCategoryDialog();

private:
    Ui::AddCategoryDialog *ui;
private slots:
    void GetName();
signals:
    void CategoryName(QString n);
};

#endif // ADDCATEGORYDIALOG_H
