#ifndef BILL_H
#include <vector>
#define BILL_H

class Bill{

public:
    int IDBill;

private:
    vector <int> ProductsList;
    vector <int> QuantityList;
    vector <int> PriceList;
    vector <int> BillDate;
    int TotalCost;
    int IDBuyer;

};


#endif // BILL_H
