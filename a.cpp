#include<iostream>
using namespace std;
class  bankaccount
{
    int  account;
    float balance;
    public:
     void definebalance( float b)
     {
       float  balance=b;

     }
    void deposit(int amount)
    {
        balance+=amount ;
         cout<<"deposit balance="<< balance<<endl;


    }
    void withdraw(int  amount)
    {
        withdraw= balance- amount;
         cout<<" withdraw  balance  ="<<  balance;

    } 
};
     int  main()
     { 
        bankaccount b;
     b.definebalance(9886);
     b.deposit(5600);
     b.withdraw(500);
     return 0;
     }

      

