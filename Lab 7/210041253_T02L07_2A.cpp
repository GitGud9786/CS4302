#include<iostream>
using namespace std;

class CurrencyConverter
{
private:
    double exchangeRate;
    double amountInUSD;
    double amountInEUR;
public:
    CurrencyConverter(): exchangeRate(0.0),amountInUSD(0.0),amountInEUR(0.0){};
    CurrencyConverter(double rate, double usdAmount)
    {
        exchangeRate=rate;
        amountInUSD=usdAmount;
        amountInEUR=usdAmount*rate;
    }
    CurrencyConverter(double rate, double eurAmount, bool isEUR)//false is dollars, true is euros
    {
        if(isEUR==true)
        {
            amountInEUR=eurAmount;
            amountInUSD=eurAmount/rate;
        }
        else
        {
            amountInUSD=eurAmount;
            amountInEUR=eurAmount*rate;
        }
    }
    void showCurrency();
    operator double(){return amountInUSD;}
};
void CurrencyConverter:: showCurrency()
{
    cout<<"USD amount: "<<amountInUSD<<endl;
    cout<<"EUR(equivalent) amount: "<<amountInEUR<<endl;
}
int main()
{
    CurrencyConverter convert(0.85,5,true),convert1(0.85,10,false);
    convert.showCurrency();
    convert1.showCurrency();
    float val=static_cast<double>(convert);
    cout<<"USD converted: "<<val<<endl;
}
