#include "userauth.h"

const QString UserAuth::filePath = "users.txt";

bool UserAuth::registerUser(const QString &username, const QString &password, const QString &confirmPassword, const QString &role) {
    if (password != confirmPassword) {//密码和确认密码需要匹配
        QMessageBox::warning(nullptr, "Error", "Passwords do not match");
        return false;
    }

    QFile file(filePath);//打开文件
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {//打开失败
        QMessageBox::warning(nullptr, "Error", "Unable to open user file");
        return false;
    }

    QTextStream in(&file);
    QString line;

    // 检查用户名是否已存在
    while (!in.atEnd()) {
        line = in.readLine();
        QStringList parts = line.split(":");
        if (parts.size() == 3 && parts[0] == username) {
            QMessageBox::warning(nullptr, "Error", "Username already exists");
            file.close();
            return false;
        }
    }

    // 添加新用户
    file.seek(file.size()); // 移动到文件末尾
    QTextStream out(&file);
    out << username << ":" << password << ":" << role << "\n";

    file.close();
    return true;
}

bool UserAuth::loginUser(const QString &username, const QString &password, QString &role) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open user file");
        return false;
    }

    QTextStream in(&file);
    QString line;

    // 检查用户名和密码是否匹配
    while (!in.atEnd()) {
        line = in.readLine();
        QStringList parts = line.split(":");
        if (parts.size() == 3 && parts[0] == username && parts[1] == password) {
            role = parts[2];
            file.close();
            return true;
        }
    }

    file.close();
    QMessageBox::warning(nullptr, "Error", "Invalid username or password");
    return false;
}
