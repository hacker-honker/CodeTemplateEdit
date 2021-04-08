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

    bool templateValid(QString templateName);
    QStringList currTemplate();

    bool addTemplateValue(QString templateName, QString value);
    QString replace(QString filePath);

    QString replaceTemplate();

private:
    QMap<QString, QString> m_map_template;
    QString m_content;
};

#endif // REPLACE_H
