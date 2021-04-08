#include "dmscgj.h"
#include "ui_dmscgj.h"

#include "replace.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>

#include <QMessageBox>

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
//    QMenu* fileMenu =  ui->menuBar->addMenu("文件");
//    QAction* action;
//    action = new QAction("打开文件",this);
//    fileMenu->addAction(action);
}

/**
 * @brief 触发测试动作
 */
void DMSCGJ::on_actionReadTest_triggered()
{
    //读取文件
    QFile file("MyTest.h");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, tr("My Application"),
                             tr("file open error"),
                             QMessageBox::Ok);
        return;
    }

    QTextStream in(&file);
    in.setCodec("UTF-8");
    QString t_content = in.readAll();
    file.close();

    //替换当前内容的关键字
    Replace a(t_content);
    QString content = a.replaceTemplate();
    qDebug()<<__FILE__<<__FUNCTION__<<__LINE__<<"\n"
           <<""<<content
          <<"\n";

    QFile file_out("Out.h");


}
