#include "gamble.h"
#include "ui_gamble.h"

Gamble::Gamble(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gamble)
{
    ui->setupUi(this);
}

Gamble::~Gamble()
{
    delete ui;
}


//팀원 이름 추가

void Gamble::on_pushButtoTMAdd_clicked()
{
    //이름을 쓰지 않았을때
    if(ui->lineEdit_2->text().isEmpty()){
        QMessageBox msg; msg.setText("Wirte Name"); msg.exec(); return;
    }
    //동일한 이름이 있을때
    for(int i=0;i<ui->listWidget->count();i++){
        if(ui->lineEdit_2->text()==ui->listWidget->item(i)->text()){
            QMessageBox msg; msg.setText("Insert Other Name"); msg.exec(); return;
        }
    }
    ui->listWidget->addItem(ui->lineEdit_2->text());
    ui->lineEdit_2->setText("");
}

//팀원 삭제

void Gamble::on_pushButtoTMremove_clicked()
{
    int r=ui->listWidget->currentRow();
    if(r!=-1){
        QListWidgetItem *item= ui->listWidget->takeItem(r);
        delete item;
    }
}

//조장 추첨

void Gamble::on_pushButton_clicked()
{

    //목록이 비어있을때 오류가 발생하지 않도록
    if(ui->listWidget->count()==0){
        QMessageBox msg; msg.setText("Insert Name"); msg.exec(); return;
    }

    int r=ui->listWidget->count();
   vector<string> teamMemberName;
   for(int i=0;i<r;i++)
   teamMemberName.push_back(ui->listWidget->item(i)->text().toStdString());
   srand((unsigned int)time(0));
   int temp=rand()%teamMemberName.size();

   string person=teamMemberName[temp];
   QString temp2=QString::fromStdString(person);
   ui->lineEdit->setText(temp2);
   teamMemberName.erase(teamMemberName.begin(), teamMemberName.end());

}

// 목록 삭제
void Gamble::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
}
