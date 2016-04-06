#include "product.h"
#include "stock.h"

void Stock::associateStock(Product &product, Stock stock, int quantity)
{
    stock.m_id = product.getID();       //Get the id of the product
    stock.m_quantity = quantity;        //assign the quantity
}
