#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
    string Name,ID;
    bool Availability;
    int Quantity,Mquantity,Cquantity;
    float Price;
public:
    static float total;
    Product(string name="",string id="",bool available=false,int quantity=0,float price=0.0)
    {
        Name=name;
        ID=id;
        Availability=available;
        Quantity=quantity;
        Cquantity=quantity;
        Price=price;
    }
    void set_name(string name){Name=name;}
    void set_id(string id){ID=id;}
    void set_available(bool available){Availability=available;}
    void set_qty(int qty){Quantity=qty;}
    void set_price(float price){Price=price;}

    void get_name(){cout<<"Name: "<<Name<<endl;}
    void get_id(){cout<<"ID: "<<ID<<endl;}
    void get_available(){cout<<"Name: "<<Name<<endl;}
    void get_qty(){cout<<"Quantity: "<<Quantity<<endl;}
    void get_price(){cout<<"Price: "<<Price<<endl;}

    void setMaxQuantity(int qty){Mquantity=qty;}
    bool isAvailable()
    {
        if(Quantity)
        {
            Availability=true;
            cout<<"Available"<<endl;
        }
        else
        {
            Availability=false;
            cout<<"Not available"<<endl;
        }

    }
    void purchase(int purchased_quantity)
    {
        if(isAvailable() and purchased_quantity<=Mquantity)Quantity-=purchased_quantity;
        else cout<<"Invalid quantity"<<endl;
    }
    float updatePrice(int percent)
    {
        Price+=((percent/100)*Price);
        return Price;
    }
    void displayInventoryValue()
    {
        cout<<"Total value of the product "<<Name<<" : "<<(float)Quantity*Price<<endl;
        total+=(float)Quantity*Price;
    }
    void displayDetails()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"ID: "<<ID<<endl;
        if(Quantity)cout<<"Status: Available"<<endl;
        else cout<<"Status: Unavailable"<<endl;
        cout<<"Quantity: "<<Quantity<<endl;
        cout<<"Price: "<<Price<<endl;
    }
    void displayTotalInventoryValue()
    {
        cout<<"Total inventory Value: "<<total<<endl;
    }
    ~Product()
    {
        cout<<"The product "<<Name<<" has been destroyed"<<endl;
    }
};
float Product::total;
int main()
{
    Product c1("Pantene","201",true,10,15);
    c1.updatePrice(10);
    c1.purchase(2);
    c1.displayDetails();
    //c1.isAvailable();
    c1.displayInventoryValue();
    Product c2("RTX 3090","3090",true,5,1500);
    c2.updatePrice(20);
    c2.displayDetails();
    //c2.isAvailable();
    c2.displayInventoryValue();
    Product c3("iPhone13","13",false,0,1200);
    //c3.updatePrice(30);
    //c3.displayDetails();
    //c3.isAvailable();
    //c3.displayInventoryValue();
    c2.set_name("iPhone13");
    c2.set_id("13");
    c2.set_available(false);
    c2.set_qty(0);
    c2.set_price(1200);

    c3.get_name();
    c3.get_id();
    c3.get_available();
    c3.get_qty();
    c3.get_price();
    c1.displayTotalInventoryValue();
}
