#ifndef CLIENT_H
#include <set>
#include <QString>
#define CLIENT_H

class Client{

protected:

    int IDClient;

    QString Name;

    QString Adress;

    QString PhoneNum;

    QString EmailAdd;

    QString PassWord;

    set <QString> Feedback;

    set <int> bills;

public:


    int getIDClient() const;

    void setName(const QString &value);

    void setIDClient(int value);

    QString getName() const;

    QString getPhoneNum() const;

    void setPhoneNum(const QString &value);

    QString getEmailAdd() const;

    void setEmailAdd(const QString &value);

    QString getPassWord() const;

    void setPassWord(const QString &value);

    set<QString> getFeedback() const;

    void setFeedback(const set<QString> &value);

    set<int> getBills() const;

    void setBills(const set<int> &value);

    QString getAdress() const;

    void setAdress(const QString &value);

private:

};

