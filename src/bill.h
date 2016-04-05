#ifndef BILL_H
#include <set>
#define BILL_H

class Bill{

protected:
    int IDBill;

    set <int> ProductsList;

    set <int> QuantityList;

    set <int> PriceList;

    set <int> BillDate;

    int TotalCost;

    int IDBuyer;

public:

    int getIDBill() const;

    void setIDBill(int value);

    set<int> getProductsList() const;

    void setProductsList(const set<int> &value);

    set<int> getQuantityList() const;

    void setQuantityList(const set<int> &value);

    set<int> getPriceList() const;

    void setPriceList(const set<int> &value);

    set<int> getBillDate() const;

    void setBillDate(const set<int> &value);

    int getTotalCost() const;

    void setTotalCost(int value);

    int getIDBuyer() const;

    void setIDBuyer(int value);
};


#endif // BILL_H

