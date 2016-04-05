#include "client.h"


void Client::setName(const QString &value)
{
    Name = value;
}

void Client::setIDClient(int value)
{
IDClient = value;
}

QString Client::getName() const
{
return Name;
}

QString Client::getPhoneNum() const
{
return PhoneNum;
}

void Client::setPhoneNum(const QString &value)
{
PhoneNum = value;
}

QString Client::getEmailAdd() const
{
return EmailAdd;
}

void Client::setEmailAdd(const QString &value)
{
EmailAdd = value;
}

QString Client::getPassWord() const
{
return PassWord;
}

void Client::setPassWord(const QString &value)
{
PassWord = value;
}

set<QString> Client::getFeedback() const
{
return Feedback;
}

void Client::setFeedback(const set<QString> &value)
{
Feedback = value;
}

set<int> Client::getBills() const
{
return bills;
}

void Client::setBills(const set<int> &value)
{
bills = value;
}

int Client::getIDClient() const
{
    return IDClient;
}
