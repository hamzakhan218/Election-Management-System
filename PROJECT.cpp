#include <iostream>
#include<string>
#include<fstream>
#include"functions.h"
#include"filehandling.h"
#include"sorting.h"
using namespace std;

struct constituency {
    string name;                                  //list-1
    constituency* next;                          //list-1
    constituency* list;                         //list-1
    constituency* voter;                       //list-1

                                //list-2
                                //list-2
                                //list-2
                                //list-2
                                //list-2
};
struct candidate {
    string name;
    string symbol;
    candidate* pparty;
    candidate* cnstt;
    candidate* next;
};
struct pparty {
    string name;
    string symbol;
    string username;
    string password;
    pparty* next;
};
struct voter {
    string name;
    string cnic;
    string password;
    voter* next;
    voter* cnstt;
};
constituency* head_cnstt;
candidate* head_c;
pparty* head_pp;
int voting = 0;
int main()
{
    head_cnstt = new constituency;
    head_cnstt->next = NULL;

    head_c = new candidate;
    head_c->next = NULL;

    head_pp = new pparty;
    head_pp->next = NULL;

    int choice=0;
    do
    {
        system("CLS");
        choice = login();
        if (choice == 1)
        {
            int num = EClogin();
            if (num == 1)
            {

            }
            else if (num == 2)
            {

            }
            else if (num == 3)
            {

            }
            else if (num == 4)
            {

            }
            else if (num == 5)
            {

            }
            else if (num == 6)
            {

            }
            else if (num == 7)
            {

            }
            else if (num == 8)
            {
                main();
                return 0;
            }
                        
        }
        else if (choice == 2)
        {
            cout << "2";
        }
        else if (choice == 3)
        {
            cout << "3";
        }
        else if (choice >4 || choice<1)
        {
            cout << "Invalid Entry!!\n";
        }
        system("PAUSE");

    } while (choice != 4);

    
    
}
