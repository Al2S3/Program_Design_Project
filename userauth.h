#ifndef USERAUTH_H
#define USERAUTH_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

class UserAuth {
public:
    // 注册用户
    static bool registerUser(const QString &username, const QString &password,const QString &confirmpassword, const QString &role);
    // 登录用户
    static bool loginUser(const QString &username, const QString &password, QString &role);

private:
    // 用户信息存储文件路径
    static const QString filePath;
};

#endif // USERAUTH_H

