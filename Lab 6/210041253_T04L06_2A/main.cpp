#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter c1(3,3),c2(1,1),c3(2,2);
    c3=c1+c2;

    cout<<c3.Getcou()<<" "<<c3.Getinc_steps();
}
