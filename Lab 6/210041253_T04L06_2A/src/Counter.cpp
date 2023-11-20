#include "Counter.h"
using namespace std;
#include<iostream>

Counter::Counter(int val,int inc)
{
    if(cou<0)cou=1;
    else cou=val;
    if(inc<0)inc_steps=1;
    else inc_steps=inc;
}
Counter::~Counter()
{
    //dtor
}
void Counter::setIncrementStep(const int &step_val)
{
    if(step_val>0)inc_steps=step_val;
}
void Counter::increment()
{
    cou+=inc_steps;
}
void Counter::resetCount()
{
    cou=0;
}
Counter Counter::operator + (const Counter c)
        {
            cou+=c.cou;
            return Counter(cou,max(inc_steps,c.inc_steps));
        }
//Counter Counter::operator = (const Counter c)
//        {
//            return Counter(c.cou,c.inc_steps);
//        }
