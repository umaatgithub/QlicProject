#ifndef DATABASE_H
#define DATABASE_H
#include <QString>
#include <vector>


class Database
{
public:
    Database();

    static void readFile(QString FileName);                 //Read the file, input file name, output void
    static void convertCSVToArray(QString FileContent);     //converting csv to database , input file content string, output void

private:

    std::vector < std::vector < QString> > data ;           //Database bidimensionnal vector

};

#endif // DATABASE_H
