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

private:
    Ui::DMSCGJ *ui;

    void initMenubar();
};

#endif // DMSCGJ_H
