#ifndef REPLACE_H
#define REPLACE_H

#include <QObject>
#include <QMap>

/**
 * @brief 内容替换类
 * $(ProjectName) = Hellow
 */
class Replace
{
public:
    Replace(QString content);

    QString annotation();                                //获取内容头部注释的方法

    bool templateValid(QString templateName);            //判断关键字是否有效

    QStringList currTemplate();                          //生成关键字列表的方法

    bool addTemplateValue(QString templateName, QString value);

    QString replace(QString filePath);

    QString replaceTemplate();

private:
    QMap<QString, QString> m_map_template;
    QString m_content;
};

#endif // REPLACE_H
