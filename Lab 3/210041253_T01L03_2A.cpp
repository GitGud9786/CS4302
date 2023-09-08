#include<iostream>
using namespace std;
class RationalNumber
{
private:
    int numerator,denominator;
public:
    void assig_n(int numerate, int denominate)
    {
        if(denominate==0)return;
        numerator=numerate;
        denominator=denominate;
    }
    double convert()
    {
        return (double)numerator/(double)denominator;
    }
    void invert()
    {
        if(numerator==0)
        {
            cout<<"The invert is mathematically undefined."<<endl;
            return;
        }
        double inverted=(double)denominator/(double)numerator;
    }
    void print()
    {
        if(denominator==0)
        {
            cout<<"Mathematically undefined."<<endl;
            return;
        }
        cout<<"The rational number is "<<numerator<<'/'<<denominator<<endl;
    }

};
int main()
{
    RationalNumber ration;
    int p,q;
    cin>>p>>q;
    ration.assig_n(p,q);
    double store=ration.convert();
    ration.invert();
    ration.print();
}
