#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
    string Aname,Anumber,Type;
    double Cbalance,Mbalance,dep;
    int transaction;//1 deposit, 0 withdraw
public:
    BankAccount(string n,string an="",string t="",double cbalance,double mbalance)
    {
        Aname=n;
        Anumber=an;
        Type=t;
        Cbalance=cbalance;
        Mbalance=mbalance;
    }
    void showBalance(){cout<<"Current balance: "<<Cbalance<<endl;}
    void deposit(double val)
    {
        Cbalance+=val;
        dep=val;
        transaction=1;
    }
    void withdrawal(double val)
    {
        if(Cbalance-val<=Mbalance)cout<<"Too low balance"<<endl;
        else
        {
            Cbalance-=val;
            transaction=0;
            cout<<"Money withdrawn"<<endl;
        }
    }
    void giveInterest(double percent=3)
    {
        double interest=Cbalance*(percent/100);
        interest=(90/100)*interest;
        Cbalance+=interest;
    }
    void printAccountStatement()
    {
        if(transaction==1)cout<<"Money deposited: "<<dep<<endl;
        else cout<<"Money withdrawn: "<<
    }
};
