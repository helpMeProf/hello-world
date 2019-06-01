#ifndef GAMBLE_H
#define GAMBLE_H

#include <QDialog>
#include<vector>
#include<string>
#include<ctime>
#include<QMessageBox>
using namespace std;
namespace Ui {
class Gamble;
}

class Gamble : public QDialog
{
    Q_OBJECT

public:
    explicit Gamble(QWidget *parent = nullptr);
    ~Gamble();

private slots:

    void on_pushButtoTMAdd_clicked();

    void on_pushButtoTMremove_clicked();

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::Gamble *ui;
    int teamNumber;

};

#endif // GAMBLE_H
