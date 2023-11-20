#include <iostream>
#include "Coordinate.h"
using namespace std;

int main()
{
    Coordinate C1(10,10),C2(0,5),C3(1,1);
    cout<<C1.getDistance(C2)<<endl;
    C1.movE(10);
    C1.move_x(1);
    C1.move_y(1);
    cout<<C1.Getabcissa()<<" "<<C1.Getordinate()<<endl;

    if(C1>=C2)cout<<"C1 larger"<<endl;
    else cout<<"C2 larger"<<endl;

    if(C1<=C3)cout<<"C1 smaller"<<endl;
    else cout<<"C3 smaller"<<endl;

    if(C1==C2)cout<<"C1 and C2 Equal"<<endl;
    else cout<<"C1 and C2 Not equal"<<endl;

    if(C1!=C3)cout<<"Yes C1 and C3 unequal"<<endl;
    else cout<<"C1 and C3 not unequal"<<endl;

    ++C2;
    cout<<C2.Getabcissa()<<" "<<C2.Getordinate()<<endl;
    --C2;
    cout<<C2.Getabcissa()<<" "<<C2.Getordinate()<<endl;

    C1--;
    cout<<C1.Getabcissa()<<" "<<C1.Getordinate()<<endl;
    C1++;
    cout<<C1.Getabcissa()<<" "<<C1.Getordinate()<<endl;
}
