#include<iostream>
#include "SavingsAccount.h"
using namespace std;
SavingsAccount::SavingsAccount()
{
    //cou++;
}

SavingsAccount::~SavingsAccount()
{
    //dtor
    cout<<"Destroyed object"<<endl;
}

float SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance+=(savingsBalance*annualInterestRate)/12;
    return savingsBalance;
}

void SavingsAccount::modifyInterest(float n)
{
    annualInterestRate=n;
}
