#include "StudentInfo.h"
#include<string>
#include<iostream>
using namespace std;
StudentInfo::StudentInfo()
{
    name="";
    id="";
    cgpa="";
    birth="";
}

StudentInfo::~StudentInfo()
{
    //dtor
}

void StudentInfo::setinfo(string n,string b,string i,string c)
{
    Setname(n);
    Setbirth(b);
    Setid(i);
    Setcgpa(c);
}

void StudentInfo::getinfo()
{
    cout<<Getname()<<" "<<Getbirth()<<" "<<Getid()<<" "<<Getcgpa()<<endl;
    cout<<"----------------------------------------------------"<<endl;
}
