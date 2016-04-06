#include "database.h"
#include <QString>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include <QDir>
#include <iostream>
#include <sstream>
#include <vector>

Database::Database()
{


}


void Database :: readFile(QString FileName){

    /*
    * Input: String (Name of File)
    * Output: Void
    * Desc: Checking the extansion then compute using the extansion of file
    *       Actually considering only CSV
    *
    *       Redirect to the correct function in the class to have the databse crated from scratch
    */


    QString ExtansionCheck = FileName.split('.').last();//Reading and detecting the extansion code

    qDebug() << ExtansionCheck;//Displaying in console the file Extansion

    int ExtansionNumber=0;//Initialize the number

    if(ExtansionCheck == "csv"){//Converting Extansion QString to Number //IF1
        //Switch can't be done on QString in c++
        ExtansionNumber=1;
    }//ENDIF1


    switch (ExtansionNumber){//Each case of supported extansion//SWITCH1

    case 1:{//Case Csv //CASE1

        QFile file(":/database/" + FileName);
        //Opengin file
        if (!file.open(QIODevice::ReadOnly)) {//Check if the file is open else display error in debug //IF1
               qDebug() << file.errorString();
           }//ENDIF1

           QString InFile;//Creating list
           while (!file.atEnd()) {//While cursor in file is not at the end // WHILE1

               QByteArray line = file.readLine();//ReadLine
               InFile.append(line);//Taking the first element

           }//ENDWHILE1

           qDebug() << InFile;//Debug the readed

           file.close();//Close File

           ConvertCSVToArray(InFile);

           break;

     }//ENDCASE1 CSV

        default : {qDebug() << "This Extansion is not Supported";break;}//Case Not Supported
    }//ENDSWITCH1


}

void Database::convertCSVToArray(QString FileContent){
    /*
    * Input: String (CSV File String Content)
    * Output: Void
    * Desc: Using the string and parse it to push in in database(when using csv content)
    */


    //Creating The Conversion list
    QStringList MyList;
    //Parsing the Content String
    MyList.append( FileContent.split(';'));
    //Variables
    int i=0, j=0, /*countCol=0, countRow=0*/;//Commented are used only to display if needed


    /*
    *
    * Counter to know dimensions // Uncomment to display
    *
    */

    /*
    for(QStringList::Iterator S = MyList.begin(); S!= MyList.end(); S++) {
        QString temp= S->at(0);
        if(!(temp == "\n") ){
           countCol++;

        }else{
            countRow++;
        }
    }
    */
    //Temporary vector to be pushed after
    //Statically declared to release memory each entry in this function
    std::vector < QString> TempData;


    //Using iterator to loot at each part of our list and push if in vector
    for(QStringList::Iterator S = MyList.begin(); S!= MyList.end(); S++) {//FOR1
        //Checking the first char is \n
        QString temp = S->at(0);
        //Checking if NOT \n
        if(!(temp == "\n") ){//IF1

           TempData.push_back(temp);//Pushing in temp

        }else{//ELSE1

            data.push_back(TempData);//Pushing Temp into the final vector
            TempData.clear();//Clear the temp vector
            S->remove(temp);//Remove the \n to push in new temporary and consider the new line
            TempData.push_back(*S);//Push the first char in temp

        }//ENDIF1

    }//ENDFOR1


    /*
    *
    * DISPLAYING // Uncomment to display
    *
    */


    /*
    for (int i = 0 ; i < countCol ; i++){
        for (int j = 0 ; j < countRow ; j++){
            qDebug() << Data[i][j];
        }
        qDebug() << "\n";
    }
    */

    /*
    *
    * END DISPLAY
    *
    */



}
