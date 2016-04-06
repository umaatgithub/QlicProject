#ifndef CLIENT_H
#define CLIENT_H
#include <set>
#include <QString>

class Client{

protected:
    QString clientId;
    QString name;
    QString address;
    QString phoneNum;
    QString emailAddress;
    QString password;
    std::set<QString> billId;

public:
    Client();
    ~Client();

    bool isValid();
    std::set<std::pair<QString,QString>> toSet();

    QString getClientId() const;
    void setClientId(const QString &value);
    QString getName() const;
    void setName(const QString &value);
    QString getAddress() const;
    void setAddress(const QString &value);
    QString getPhoneNum() const;
    void setPhoneNum(const QString &value);
    QString getEmailAddress() const;
    void setEmailAddress(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
    std::set<QString> getBillId() const;
    void setBillId(const std::set<QString> &value);
};

