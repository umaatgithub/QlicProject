#include "client.h"
#include <set>

Client::Client()
{
    clientId = QString("");
    name = QString("");
    address = QString("");
    phoneNum = QString("");
    password = QString("");
}

Client::~Client()
{

}

bool Client::isValid()
{
    return true;
}

std::set<std::pair<QString, QString> > Client::toSet()
{
    std::set<std::pair<QString,QString>> clientSet;
    std::pair<QString,QString> valuePair;

    valuePair.first = "ID";
    valuePair.second = client.getClientId();
    clientSet.insert(0,valuePair);

    valuePair.first = "NAME";
    valuePair.second = client.getName();
    clientSet.insert(1,valuePair);

    valuePair.first = "ADDRESS";
    valuePair.second = client.getAddress();
    clientSet.insert(2,valuePair);

    valuePair.first = "PASSWORD";
    valuePair.second = client.getPassword();
    clientSet.insert(3,valuePair);

    valuePair.second = "BILL_ID";
    std::set<QString> billIds = client.getBillId();

    bool firstFlag = true;
    QString value = "";
    for(std::set<QString>::iterator it = billIds.begin(); it != billIds.end(); it++){
        if(true == firstFlag){
            value = value.append(*it);
            firstFlag = false;
            continue;
        }
        value = value.append("," + (*it));
        it++;
    }
    valuePair.second = value;
    clientSet.insert(4,valuePair);
}

QString Client::getClientId() const
{
    return clientId;
}

void Client::setClientId(const QString &value)
{
    clientId = value;
}

QString Client::getName() const
{
    return name;
}

void Client::setName(const QString &value)
{
    name = value;
}

QString Client::getAddress() const
{
    return address;
}

void Client::setAddress(const QString &value)
{
    address = value;
}

QString Client::getPhoneNum() const
{
    return phoneNum;
}

void Client::setPhoneNum(const QString &value)
{
    phoneNum = value;
}

QString Client::getEmailAddress() const
{
    return emailAddress;
}

void Client::setEmailAddress(const QString &value)
{
    emailAddress = value;
}

QString Client::getPassword() const
{
    return password;
}

void Client::setPassword(const QString &value)
{
    password = value;
}

std::set<QString> Client::getBillId() const
{
    return billId;
}

void Client::setBillId(const std::set<QString> &value)
{
    billId = value;
}
