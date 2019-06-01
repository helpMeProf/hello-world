#ifndef TEAMINFO_H
#define TEAMINFO_H

#include <QDialog>

namespace Ui {
class TeamInfo;
}

class TeamInfo : public QDialog
{
    Q_OBJECT

public:
    explicit TeamInfo(QWidget *parent = nullptr);
    ~TeamInfo();

private:
    Ui::TeamInfo *ui;
};

#endif // TEAMINFO_H
