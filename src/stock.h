#ifndef STOCK_H
#define STOCK_H

#include "product.h"

class Stock
{
    private:
    int m_quantity;             //variable to handle the quantity
    int m_id;                   //variable that would contain the product id

    public:
    void associateStock(Product product);      //Function to associate the quantity with the product
};

#endif // STOCK_H
