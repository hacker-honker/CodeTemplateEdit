#include "replace.h"
#include <QString>
#include <QDebug>

Replace::Replace()
{

}

void Replace::replaceStr(){
    QString str="sf /,.fee$qqq$w.d;$qqq$";

    int size=str.size();
    int mid=0;
    int start,end;
    start=str.indexOf("$",mid);//第一个$的下标
    end=str.indexOf("$",start+1);//第二个$的下标
    QString subStr=str.mid(start,end-start+1);//两个标识符之间的字符串
    qDebug()<< "字符串长度:" << size
            << "第一个$的下标:" << start
            << "第二个$的下标:"<< end
            << "两个标识符之间的字符串:" << subStr;
    QString strReplace=str.replace(subStr,"000");
    qDebug()<< "替换后的字符串:" << strReplace;
}
