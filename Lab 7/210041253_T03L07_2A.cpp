#include<iostream>
using namespace std;
class CurrencyBDT
{
    private:
        double taka;
        double poisha;
    public:
        CurrencyBDT():taka(0),poisha(0){};
        CurrencyBDT(double t,double p):taka(t),poisha(p){};
        void display()
    {
        cout<<"Taka: "<<taka<<endl;
        cout<<"Poisha: "<<poisha<<endl;
    }
};
class CurrencyDollar
{
private:
    double dollar;
    double cent;
public:
    CurrencyDollar():dollar(0),cent(0){};
    CurrencyDollar(double t,double p):dollar(t),cent(p){};


    CurrencyBDT usdTObdt()
    {
        double dol=dollar+(cent/100);
        double taka=(double)(1/0.0091)*dol;
        int onlytaka=taka;
        double poisha=(taka-onlytaka)*100;
        return CurrencyBDT(taka, poisha);
    }
    void display()
    {
        cout<<"Dollars: "<<dollar<<endl;
        cout<<"Cents: "<<cent<<endl;
    }
};
class CurencyEuro
{
private:
    double euro;
    double cents;
public:
    CurrencyEuro()
    {
        euro=0;
        cents=0;
    }
    CurrencyEuro(double t,double p)
    {
        euro=t;
        cents=p;
    }
    void display()
    {
        cout<<"Euros: "<<euro<<endl;
        cout<<"Cents: "<<cents<<endl;
    }

    CurrencyBDT euroTObdt()
    {
        double eur=euro+(cents/100);
        double taka=(double)(1/0.0085)*eur;
        int onlytaka=taka;
        double poisha=(taka-onlytaka)*100;
        return CurrencyBDT(taka,poisha);
    }
};
int main()
{
    CurrencyBDT cBDT(1,45);
    CurrencyDollar cDollar(500,19);

    cBDT.display();

    CurrencyBDT c1BDT=cDollar.usdTObdt();
    c1BDT.display();
}
