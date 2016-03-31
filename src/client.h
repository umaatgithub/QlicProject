#ifndef CLIENT_H
#include <string>
#include <vector>
#define CLIENT_H

class Client{

public:
    int IDClient;

private:
    string Name;
    string PhoneNum;
    string EmailAdd;
    string PassWord;
    vector <string> Feedback;
    vector <int> bills;

};

#endif // CLIENT_H
