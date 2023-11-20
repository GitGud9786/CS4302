#include <iostream>
#include "FLOAT.h"
using namespace std;

int main()
{
    FLOAT f1(5.052),f2(9.01),f3(7.90),f4(12.1),f5();
    f1+f2;
    f4-f3;
    f2*f3;
    f3/f1;
    cout<<f1.Getdata()<<" "<<f2.Getdata()<<" "<<f3.Getdata()<<" "<<f4.Getdata()<<endl;
    int i;
    f1=i;
    cout<<"Value of i is: "<<i;
}
