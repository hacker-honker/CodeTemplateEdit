#ifndef DMSCGJ_H
#define DMSCGJ_H

#include <QMainWindow>

namespace Ui {
class DMSCGJ;
}

class DMSCGJ : public QMainWindow
{
    Q_OBJECT

public:
    explicit DMSCGJ(QWidget *parent = 0);
    ~DMSCGJ();



private slots:
    void on_actionReadTest_triggered();

private:
    void initMenubar();

private:
    Ui::DMSCGJ *ui;


};

#endif // DMSCGJ_H
