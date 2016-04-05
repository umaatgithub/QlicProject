#ifndef CATEGORY_H
#define CATEGORY_H

class Category
{
private :
    int validCount;
    int ID;
    QString name;
    QString description;

public:
    Category();    

    Category(int,QString,QString);
    ~Category();
    bool isValid();

    int getValidCount() const;
    void setValidCount(int value);
    int getID() const;
    void setID(int value);
    QString getName() const;
    void setName(const QString &value);
    QString getDescription() const;
    void setDescription(const QString &value);
};


#endif // CATEGORY_H
