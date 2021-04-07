#include "dmscgj.h"
#include "ui_dmscgj.h"

DMSCGJ::DMSCGJ(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DMSCGJ)
{
    ui->setupUi(this);
    initMenubar();
}

DMSCGJ::~DMSCGJ()
{
    delete ui;
}

void DMSCGJ::initMenubar()
{
    QMenu* fileMenu = ->addMenu("文件");
    QAction* action;
    action = new QAction("打开文件",this);
    fileMenu->addAction(action);
}

