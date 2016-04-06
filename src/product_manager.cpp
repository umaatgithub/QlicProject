/*  The cpp file for the product_manager. This will use the
    properties of category and product classes and can be used
    by the bill class to handle the products when a purchase is
    made.*/

#include "product_manager.h"
#include "category.h"

void Product_Manager::add_product()
{
    //will call the functions implemented in the product class.
    //The following definition is to handle categories.

    //id = 'implement ui';
    cat.setID(id);      //function of class 'category' to set id

    //name = 'implement ui';
    cat.setName(name);  //function of class 'category' to set name

    //ValidCount = 'impement ui'
    cat.setValidCount(ValidCount);  //function of class 'category' to set quantity

    //description = 'implement ui'
    cat.setDescription(description);
}

void Product_Manager::remove_product()
{
    /*  This function will call the destructors
        of the 'product' class to completely remove
        the product.*/
}

//Call this function with any one of the parameters

void Product_Manager::modify_product(int ID, QString Name)
{

}

void Product_Manager::product_details(int ID, QString Name)
{
    //implementation to get category info
    id = cat.getID();                   //get the id of its category
    name = cat.getName();               //get the name of its category
    ValidCount = cat.getValidCount();   //get the valid count
    description = cat.getDescription(); //get the category description

}
