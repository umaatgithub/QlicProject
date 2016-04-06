#include "product.h"

Product::Product(int a, QString b, QString c, int d, int e)
{
    ID = a;
    Name = b;
    Description = c;
    Category_ID = d;
    Price = e;
}


bool Product::setID(const int &a)
{
ID = a;
return true;
}


int Product::getID() const
{
    return ID;
}



bool Product::setName(const QString &b)
{
    Name = b ;
    return true;

}

QString Product::getName() const
{
    return Name ;
}



bool Product::setDescription(const QString &c)
{
    Description = c ;
    return true;
}



QString Product::getDescription() const
{

    return Description ;
}



bool Product::setCategory_ID(const int &d)
{
    Category_ID = d  ;
    return true;
}



int Product::getCategory_ID()const
{
    return Category_ID;
}



bool Product::setPrice(const int &e)
{
    Price = e  ;
    return true;

}


int Product::getPrice()const
{
    return Price;
}



