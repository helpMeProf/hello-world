#include "teaminfo.h"
#include "ui_teaminfo.h"

TeamInfo::TeamInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamInfo)
{
    ui->setupUi(this);
}

TeamInfo::~TeamInfo()
{
    delete ui;
}
