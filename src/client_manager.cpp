#include <client_manager.h>
#include <client.h>
#include <bill.h>
//Include the database manager class
#include <QString>

//***************************************************Client Functions***********************************************************

bool Client_Manager::createClient(const)
{
    // Add a new "row" in the database
    Client.setIDClient();//Add a new number for IDClient
    Client.setAdress(""); //Input from the user
    Client.setEmailAdd(""); //Input from the user
    Client.setName(""); //Input from the user
    Client.setPassWord(""); //Input from the user
    Client.setPhoneNum(""); //Input from the user

}

void Client_Manager::getClient(int &value)
{
    //Select the Customer with IDClient
    Client.getAdress();
    Client.getBills();
    Client.getEmailAdd();
    Client.getFeedback();
    Client.getName();
    Client.getPhoneNum();
}

bool Client_Manager::removeClient(int &value)
{
    //Select the Customer with IDClient
    //Delete the coresponding lign "Row" in the database
}

bool Client_Manager::updateClient(int &value)
{
    //Select the Customer with IDClient
    Client.setIDClient();//Add a new number for IDClient
    Client.setAdress(""); //Input from the user
    Client.setEmailAdd(""); //Input from the user
    Client.setName(""); //Input from the user
    Client.setPassWord(""); //Input from the user
    Client.setPhoneNum(""); //Input from the user
}

bool Client_Manager::createFeedback(int &value0, const QString &value1)
{
    //Select the customer with IDClient
    Client.setFeedback(value1);
}

QString Client_Manager::getFeedback(int &value0, int &value1)
{
    //Select the customer with IDClient
    Client.getFeedback(value1);
}

map<int, Client> Client_Manager::getAllClient()
{
    //Return all the memory from the client database
}

//***************************************************Bill Functions**************************************************************

void Client_Manager::getBill(int &value)
{
    // Select the bill according to IDBill
    Bill.getIDBill();
    Bill.getQuantityList("");
    Bill.getPriceList("");
    Bill.getBillDate("");
    Bill.getTotalCost("");
    Bill.getIdBuyer("");
}

bool Client_Manager::createBill()
{

    // Add a new "row" in the database
    Bill.setIDBill();
    Bill.setQuantityList("");
    Bill.setPriceList("");
    Bill.setBillDate("");
    Bill.setTotalCost("");
    Bill.setIdBuyer("");

}

map<int,Bill> Client_Manager::getAllBill()
{
	//Return all the memory from the bill database

}
