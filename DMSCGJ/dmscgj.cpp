#include "dmscgj.h"
#include "ui_dmscgj.h"

#include "replace.h"

QMenuBar* menu;
QMenu* menu1;
QAction* action;
QAction* action1;

DMSCGJ::DMSCGJ(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DMSCGJ)
{
    ui->setupUi(this);
    initMenubar();
    Replace a;
    a.replaceStr();
}

DMSCGJ::~DMSCGJ()
{
    delete ui;
}

void DMSCGJ::initMenubar()
{
       QMenu* fileMenu =  ui->menuBar->addMenu("文件");
       QAction* action;
       action = new QAction("打开文件",this);
       fileMenu->addAction(action);
}

