#include<iostream>
using namespace std;
class Time
{
private:
    int hour,minute,second;
public:
    int hours(int h)
    {
        hour=h;
        return h;
    }
    int minutes(int m)
    {
        minute=m;
        return m;
    }
    int seconds(int s)
    {
        second=s;
        return s;
    }
    void reset(int h,int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void advance(int h,int m, int s)
    {
        if(second+s>=60)
        {
            second=(s+second)%60;
            minute=(second+s)/60;
        }
        else
        {
            second+=s;
        }
        if(minute+m>=60)
        {
            minute=(m+minute)%60;
            hour=(minute+m)/60;
        }
        else
        {
            minute+=m;
        }
        if(hour+h>=24)
        {
            hour=(h+hour)%24;
        }
        else
        {
            hour++;
        }
    }
    void print()
    {
        cout<<hour<<" hours "<<minute<<" minutes "<<"and "<<second<<" seconds."<<endl;
    }
};
int main()
{
    Time tyme;
    int h,m,s;
    cin>>h>>m>>s;
    tyme.hours(h);
    tyme.minutes(h);
    tyme.seconds(h);
    tyme.reset(h,m,s);
    tyme.advance(h,m,s);
    tyme.print();
}
