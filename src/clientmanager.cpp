#include "clientmanager.h"

ClientManager::ClientManager()
{

}

ClientManager::~ClientManager()
{

}

bool ClientManager::createClient(Client client, Bill bill, std::set<BillItem> billItems)
{

    client.setClientId(QString::number(generateClientId()));
    if(client.isValid()){
        //function call connection.addRow(QString("CLIENT"), client.toSet());
        //if client created increment noOfClientsCreated
        //if bill is not null call createBill(bill)
        //if billItems not null
        //loop through all billItems and call function createBillItem()


    }
    return false;
}

bool ClientManager::updateClient(Client client)
{

}

bool ClientManager::removeClient(QString clientId)
{

}

int ClientManager::generateClientId()
{
    return noOfClientsCreated+1;
}


