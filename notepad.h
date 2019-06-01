#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QDialog>
#include<QFileDialog>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QString>

namespace Ui {
class NotePad;
}

class NotePad : public QDialog
{
    Q_OBJECT

public:
    explicit NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    void on_DirectoryButton_clicked();

    void on_FileOpenButton_clicked();

    void on_FileSaveButton_clicked();

    void on_ExitButton_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_newButton_clicked();

private:
    Ui::NotePad *ui;
    QDir dir;
    QFileInfoList list;
};

#endif // NOTEPAD_H
