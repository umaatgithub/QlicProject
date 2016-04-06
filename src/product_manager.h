#ifndef PRODUCT_MANAGER
#define PRODUCT_MANAGER

#include "category.h"
#include <QString>

class Product_Manager
{
    private:

    //object for category class to use its functions
    category cat;
    //variables to be used by this class.
    int id;             //for product id
    int ValidCount;     //for quantity of product
    QString name;       //name of product
    QString description;

    public:

    //Function to add a new product
    void add_product();

    //Function to remove an existing product
    void remove_product();

    //Function to modify existing products (add/remove quantity, change price etc.)
    void modify_product();

    //Function to retrive details about a given product
    void product_details();
};

#endif // PRODUCT_MANAGER
