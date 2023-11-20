#include<iostream>
using namespace std;
class seat
{
    private:
    bool comfortable;
    bool seatWarmer;
    public:
    void get_seat(bool comfort, bool warmer)
    {
        comfortable=comfort;
        seatWarmer=warmer;
    }
    string get_comfortable(){return comfortable? "Yes":"No";}
    string get_seatWarmer(){return seatWarmer? "Yes":"No";}
};
class wheels
{
    private:
    float circumference;
    public:
    void get_wheels(float circ)
    {
        circumference=circ;
    }
    float get_circumference(){return circumference;}
};
class engine
{
    private:
    float consum_rate;
    float energy_rate;
    float rpm;
    public:
    void get_engine(float consumption, float energy, float r)
    {
        consum_rate=consumption;
        energy_rate=energy;
        rpm=r;
    }
    float get_crate(){return consum_rate;}
    float get_energyrate(){return energy_rate;}
    float get_rpm(){return rpm;}
};
class door
{
    private:
    bool sideways;
    bool upways;
    public:
    void get_door(bool side,bool up)
    {
        sideways=side;
        upways=up;
    }
    string get_sideways(){return sideways? "Yes":"No";}
    string get_upways(){return upways? "Yes":"No";}
};
class Car
{
    private:
    engine E;
    door D;
    wheels W;
    seat S;
    public:
    void get_car(float consumption,float energy,float r,float circ,bool side,bool up,bool comfort,bool warmer)
    {
        E.get_engine(consumption,energy,r);
        D.get_door(side,up);
        W.get_wheels(circ);
        S.get_seat(comfort,warmer);
    }
    void display()
    {
        cout<<endl<<"SHOWING DETAILS OF CAR"<<endl;
        cout<<"Engine: Consumption, energy and Rpm: "<<E.get_crate()<<" litres/km, "<<E.get_energyrate()<<" J/L, "<<E.get_rpm()<<" Rpm"<<endl;
        cout<<"Seat: Comfortable, Seatwarmer: "<<S.get_comfortable()<<", "<<S.get_seatWarmer()<<endl;
        cout<<"Door: Upways, sideways: "<<D.get_sideways()<<", "<<D.get_upways()<<endl;
        cout<<"Wheels: Circumference: "<<W.get_circumference()<<" inches"<<endl;
    }
};

int main()
{
    Car C1;
    float consumption,energy,r;
    cout<<"Consumption, energy, rpm: ";
    cin>>consumption>>energy>>r;
    float circ;
    cout<<"Circumference: ";
    cin>>circ;
    bool side,up;
    cout<<"sideways and upways: ";
    cin>>side>>up;
    bool comfort,warmer;
    cout<<"comfortable, seatwarmer: ";
    cin>>comfort>>warmer;
    C1.get_car(consumption,energy,r,circ,side,up,comfort,warmer);
    C1.display();
}