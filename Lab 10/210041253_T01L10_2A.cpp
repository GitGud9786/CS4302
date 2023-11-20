#include<iostream>
#include<string>
using namespace std;

class Product
{
    protected:
    string title;
    string dir_actor;
    int ID;
    static int cou;
    public:
    //Product(){cou++;}
    Product(string t,string a, int i):title(t),dir_actor(a),ID(i){cou++;}
    virtual void displayInfo(){}
    static int get_cou(){return cou;}
    bool operator < (Product &p)
    {
        return get_ID()<p.get_ID();
    }
    virtual int get_ID(){return -1;}
};
int Product:: cou=0;

class Book:public Product
{
    public:
    Book(string t,string a, int i): Product(t,a,i){};
    void displayInfo()
    {
        cout<<"Book title: "<<title<<endl;
        cout<<"Book author: "<<dir_actor<<endl;
        cout<<"Book ID: "<<ID<<endl;
    }
    int get_ID(){return ID;}
};
class DVD:public Product
{
    public:
    DVD(string t,string a, int i): Product(t,a,i){};
    void displayInfo()
    {
        cout<<"DVD title: "<<title<<endl;
        cout<<"DVD author: "<<dir_actor<<endl;
        cout<<"DVD ID: "<<ID<<endl;
    }
    int get_ID(){return ID;}
};
int main()
{
    Product* ar[5];
    ar[0]=new Book("Huckle Berry Fin","Charles",2319);
    ar[1]=new Book("The Book Thief","Mark Zusack",11211);
    ar[2]=new Book("Introduction to Linear Algebra","Gilbert Strang",2348);
    ar[3]=new DVD("Uncharted","Jackson",1041);
    ar[4]=new DVD("Red Dead Redemption","Rockstar",1899);

    if(*ar[0]<*ar[1])cout<<"Smaller"<<endl;
    else cout<<"Bigger"<<endl;
   // sort_ID(ar,5);

    for(int i=0;i<5;i++)
    {
        ar[i]->displayInfo();
        cout<<endl;
    }
    Book Book1("Test Book","Tester",123);//THIS INCREASES TO 6
    Book Book2=Book1;//THIS BOOK 2 WILL NOT INCREASE THE COUNT TO 7
    cout<<Product::get_cou();
//---------------------------INITIALIZATION--------------------------------
}