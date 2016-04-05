#ifndef CLIENT_MANAGER_H
#include <bill.h>
#include <client.h>
#include <QString>
#include <map>
#define CLIENT_MANAGER_H


class Client_Manager{

public:

//Client Functions

void getClient(int);

bool createClient(Client);

bool removeClient(int);

bool updateClient(Client);

map<int, Client > getAllClient();

bool createFeedback(int, QString);

QString getFeedback(int, int);

//Bill Functions

void getBill(int);

bool createBill(Bill);

map<int, Bill> getAllBill();


};




#endif // CLIENT_MANAGER_H
