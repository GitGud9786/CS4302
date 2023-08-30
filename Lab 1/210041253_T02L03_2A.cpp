#include<iostream>
#include<cstring>
using namespace std;
class Medicine
{
private:
    char name[20],genericName[20];
    double discountPercent,unitPrice;
public:
    void assignName(char namE[],char genericNamE[])
    {
        strcpy(name,namE);
        strcpy(genericName,genericNamE);
    }

    void assignPrice(double price=0)
    {
        if(price<0)
        {
            cout<<"Invalid price."<<endl;
            return;
        }
        unitPrice=price;
    }
    void setDiscountPercent(double percent=5)
    {
        if(percent<=0 || percent>=45)
        {
            cout<<"Invalid discount."<<endl;
            return;
        }
        discountPercent=percent;
    }
    double getSellingPrice()
    {
        double dis=(discountPercent/100)*unitPrice;
        return (unitPrice-dis);
    }
    void display()
    {
        if(unitPrice<0 || (discountPercent<=0 || discountPercent>=45))return;
        else
        {
        double val=getSellingPrice();
        cout<<name<<" "<<'('<<genericName<<')'<<" "<<"has a unit price BDT "<<val<<". "<<"Current discount "<<discountPercent<<'%'<<endl;
        }
    }

};
int main()
{
    Medicine med;
    double p,d;
    char nam[20],gnam[20];
    cout<<"Enter names: ";
    cin>>nam>>gnam;
    cout<<"Enter values: ";
    cin>>p>>d;
    med.assignName(nam,gnam);
    med.assignPrice(p);
    med.setDiscountPercent(d);
    med.getSellingPrice();
    med.display();
}
