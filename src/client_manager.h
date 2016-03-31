#ifndef CLIENT_MANAGER_H
#include <vector>
#include <string>
#include <bill.h>
#include <client.h>
#define CLIENT_MANAGER_H


class Client_Manager{

public:
    //For Bill Class:
    void createbill(vector <int> m_ProductsList, vector <int> m_QuantityList, vector <int> m_PriceList, vector <int> m_BillDate, int m_TotalCost, int m_IDClient);
    ~createbill();
    void getbill(int g_IDBill, int *g_ProductList, int *g_QuantityList, int *g_PriceList, int *g_BillDate, int *g_TotalCost, int *g_IDClient);
    ~getbill();
    //For Client Class:
    void createclient (string m_Name, string m_Phone, string m_Email, string m_Adress,string m_Password);
    ~createclient();
    void getclient (int g_IDClient,string *g_Name, string *g_Phone, string *g_Email, string *g_Adress,string *g_Password, vector <int> *g_Billlist, vector <string> *g_Feedbacks);
    ~getclient();
    void modifyclient(int s_IDClient, string &s_Name, string &s_Phone, string &s_Email, string &s_Adress, string &s_Password, vector <int> &s_Billlist, vector <string> &s_Feedbacks);
    ~modifyclient();
    void addfeedback (int q_IDClient, string textFeedback);
    ~addfeedback();
    void addbill (int f_IDClient, int f_IDBill);
    ~addbill();
private:


};




#endif // CLIENT_MANAGER_H
