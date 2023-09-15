#include <iostream>
#include "SavingsAccount.h"
using namespace std;

float SavingsAccount::annualInterestRate;

int main()
{
    SavingsAccount saver1,saver2;
    saver1.SetsavingsBalance(300);
    saver2.SetsavingsBalance(200);
    saver1.SetannualInterestRate(3);
    saver2.SetannualInterestRate(3);
    cout<<"Saver 1: "<<saver1.calculateMonthlyInterest()<<endl;
    cout<<"Saver 2: "<<saver2.calculateMonthlyInterest()<<endl;
    saver1.modifyInterest(4);
    cout<<"New saver 1: "<<saver1.calculateMonthlyInterest()<<endl;
    cout<<"New saver 2: "<<saver2.calculateMonthlyInterest()<<endl;
    return 0;
}
