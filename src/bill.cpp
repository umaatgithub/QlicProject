#include "bill.h"

void Bill::setIDBill(int value)
{
    IDBill = value;
}

set<int> Bill::getProductsList() const
{
return ProductsList;
}

void Bill::setProductsList(const set<int> &value)
{
ProductsList = value;
}

set<int> Bill::getQuantityList() const
{
return QuantityList;
}

void Bill::setQuantityList(const set<int> &value)
{
QuantityList = value;
}

set<int> Bill::getPriceList() const
{
return PriceList;
}

void Bill::setPriceList(const set<int> &value)
{
PriceList = value;
}

set<int> Bill::getBillDate() const
{
return BillDate;
}

void Bill::setBillDate(const set<int> &value)
{
BillDate = value;
}

int Bill::getTotalCost() const
{
return TotalCost;
}

void Bill::setTotalCost(int value)
{
TotalCost = value;
}

int Bill::getIDBuyer() const
{
return IDBuyer;
}

void Bill::setIDBuyer(int value)
{
IDBuyer = value;
}

int Bill::getIDBill() const
{
    return IDBill;
}
