#include<iostream>
#include<string>
using namespace std;
class Animals
{  
    public:
    //TASK 2
    virtual void animalDetails(){}
    virtual int get_weight(){return -1;}
    virtual void set_sound(string n){}
};
class mammals: public Animals
{
    private:
    string type;
    string mobility;
    string color;
    int weight;

    string sound;
    public:
    mammals(string t,string m, string c, int w)
    {
        type=t;
        mobility=m;
        color=c;
        weight=w;
    }
    void animalDetails()
    {
        cout<<"Type: "<<type<<endl;
        cout<<"Mobility: "<<mobility<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"New attribute sound: "<<sound<<endl;
    }
    int get_weight(){return weight;}
    void set_sound(string s){sound=s;}

};
class birds: public Animals
{
    private:
    string type;
    string mobility;
    string color;
    int weight;

    string sound;
    public:
    birds(string t,string m, string c, int w)
    {
        type=t;
        mobility=m;
        color=c;
        weight=w;
    }
    void animalDetails()
    {
        cout<<"Type: "<<type<<endl;
        cout<<"Mobility: "<<mobility<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"New attribute sound: "<<sound<<endl;
    }
    int get_weight(){return weight;}
    void set_sound(string s){sound=s;}
};
class fish: public Animals
{
    private:
    string type;
    string mobility;
    string color;
    int weight;

    string sound;
    public:
    fish(string t,string m, string c, int w)
    {
        type=t;
        mobility=m;
        color=c;
        weight=w;
    }
    void animalDetails()
    {
        cout<<"Type: "<<type<<endl;
        cout<<"Mobility: "<<mobility<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"New attribute sound: "<<sound<<endl;
    }
    int get_weight(){return weight;}
    void set_sound(string s){sound=s;}
};
class reptiles: public Animals
{  
    private:
    string type;
    string mobility;
    string color;
    int weight;
    string sound;
    public:
    reptiles(string t,string m, string c, int w)
    {
        type=t;
        mobility=m;
        color=c;
        weight=w;
    }
    void animalDetails()
    {
        cout<<"Type: "<<type<<endl;
        cout<<"Mobility: "<<mobility<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"New attribute sound: "<<sound<<endl;
    }
    int get_weight(){return weight;}
    void set_sound(string s){sound=s;}
};
//-----------------------------
/*class Dog: public mammals
{
    public:
    Dog(string m, string c, int w)
    {
        type="Dog";
        mobility=m;
        color=c;
        weight=w;
    }
};
class Cat: public mammals
{
    public:
    Cat(string m, string c, int w)
    {
        type="Cat";
        mobility=m;
        color=c;
        weight=w;
    }
};

class Salmon: public fish
{
    public:
    Salmon(string m, string c, int w)
    {
        type="Salmon";
        mobility=m;
        color=c;
        weight=w;
    }
};
class Shark: public fish
{
    public:
    Shark(string m, string c, int w)
    {
        type="Shark";
        mobility=m;
        color=c;
        weight=w;
    }
};

class Snake: public reptiles
{
    public:
    Snake(string m, string c, int w)
    {
        type="Snake";
        mobility=m;
        color=c;
        weight=w;
    }
};
class Turtle: public reptiles
{
    public:
    Turtle(string m, string c, int w)
    {
        type="Turtle";
        mobility=m;
        color=c;
        weight=w;
    }
};

class Eagle: public birds
{
    public:
    Eagle(string m, string c, int w)
    {
        type="Eagle";
        mobility=m;
        color=c;
        weight=w;
    }
};
class Penguin: public birds
{
    public:
    Penguin(string m, string c, int w)
    {
        type="Penguin";
        mobility=m;
        color=c;
        weight=w;
    }
};*/
//TASK 4
void sortAnimalWeight(Animals *a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int w=a[i]->get_weight();
        Animals *max_w=a[i];
        int loc=i;
        for(int j=i+1;j<8;j++)
        {
            if(a[j]->get_weight()>max_w->get_weight())
            {
                w=a[j]->get_weight();
                max_w=a[j];
                loc=j;
            }
        }
        Animals *temp=a[i];
        a[i]=max_w;
        a[loc]=temp;
    }
}
int main()
{
    //TASK 1
    Animals* a[10];
    a[0]=new mammals("Cat","Walking","Orange",6);
    a[1]=new mammals("Dog","Walking","Brown",20);
    a[2]=new birds("Eagle","Flying","Blue",6);
    a[3]=new birds("Penguin","Walking","White",15);
    a[4]=new reptiles("Snake","Crawling","Green",2);
    a[5]=new reptiles("Turtle","Walking","Green",40);
    a[6]=new fish("Salmon","Swimming","Red",3);
    a[7]=new fish("Shark","Swimming","Blue",90);
    
    /*for(int i=0;i<8;i++)
    {
        a[i]->animalDetails();
        cout<<endl;
    }*/

    //TASK 3
    a[0]->set_sound("Meow");
    a[1]->set_sound("Bark");
    a[2]->set_sound("Screech");
    a[3]->set_sound("Honk");
    a[4]->set_sound("Psss");
    a[5]->set_sound("Hisssing");
    a[6]->set_sound("Silence");
    a[7]->set_sound("Silence");
    

    //TASK 4
    sortAnimalWeight(a,8);
    for(int i=0;i<8;i++)
    {
        a[i]->animalDetails();
        cout<<endl;
    }
}