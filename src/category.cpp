#include "category.h"


int Category::getValidCount() const
{
    return validCount;
}

void Category::setValidCount(int value)
{
    validCount = value;
}

int Category::getValidCount() const
{
    return validCount;
}

void Category::setValidCount(int value)
{
    validCount = value;
}

int Category::getID() const
{
    return ID;
}

void Category::setID(int value)
{
    ID = value;
}

QString Category::getName() const
{
    return name;
}

void Category::setName(const QString &value)
{
    name = value;
}

QString Category::getDescription() const
{
    return description;
}

void Category::setDescription(const QString &value)
{
    description = value;
}


Category::Category()
{

}

Category::~Category()
{
    delete Category;
}

Category::isValid()
{

    int sizen=name.size();
    int sized=description.size();
    if( ID != 0 )
    {
        validcount = validcount + 1;
    }

    if( sizen != 0 )
    {
        validcount = validcount + 1;
    }

    if(sized != 0)
    {
        validcount = validcount + 1;
    }

    if(validcount == 3)
    {
        return true;
    }

    else
    {
        return false;
    }
}
