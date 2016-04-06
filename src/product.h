#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>



class Product
{
    int ID;       //Product ID
    QString Name;   //Product Name
    QString Description;//Product Description
    int Category_ID;    //Product Category_ID
    int Price;  //Product Price



public:

    Product( int , QString , QString , int , int ); //constructor with parameter
    ~Product(); // destructor

    bool setID(const int &);
    int getID()const;

    bool setName(const QString &) ;
    QString getName()const;

    bool setDescription(const QString &);
    QString getDescription()const;

    bool setCategory_ID(const int &);
    int getCategory_ID()const;

    bool setPrice(const int &);
    int getPrice()const;



};

#endif // PRODUCT_H
