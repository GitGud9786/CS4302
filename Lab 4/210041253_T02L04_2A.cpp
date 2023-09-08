#include<iostream>
#include<string>
using namespace std;
class Medicine
{
private:
    string Name,GenericName;
    float DiscountPercent,UnitPrice,main_price;
public:
    Medicine(string name="",string genericName="", float discount=15.0, float price=0)
    {
        Name=name;
        GenericName=genericName;
        DiscountPercent=discount;
        UnitPrice=price;
        //main_price=price;
    }
    void set_name(string name=""){Name=name;}
    void set_gname(string gname=""){GenericName=gname;}
    void set_discount(float dis=15.0){DiscountPercent=dis;}
    void set_price(float price=0){UnitPrice=price;}

    void get_name(){cout<<"Name: "<<Name<<" ";}
    void get_gname(){cout<<"Generic Name: "<<GenericName<<" ";}
    void get_discount(){cout<<"Discount: "<<DiscountPercent<<" ";}
    void get_price(){cout<<"Price: "<<UnitPrice<<" ";}
    double getSellingPrice()
    {
        double dis=(DiscountPercent/100)*UnitPrice;
        return (UnitPrice-dis);
    }

    bool isAffordable(double budget)
    {
        if(budget>=getSellingPrice())cout<<"Affordable"<<endl;
        else cout<<"Not affordable"<<endl;
    }

    void resetPrice(){cout<<"Initial price: "<<UnitPrice<<endl;}

    void display()
    {
        double val=getSellingPrice();
        cout<<Name<<" "<<'('<<GenericName<<')'<<" "<<"has a unit price BDT "<<val<<". "<<"Discount: "<<DiscountPercent<<'%'<<endl;
    }
    ~Medicine(){cout<<endl<<"The medicine product "<<Name<<" has been destroyed."<<endl;}
};
int main()
{
    Medicine c1("Napa","Paracetamol",10,100);
    c1.display();
    c1.isAffordable(3);

    Medicine c2("Fexo","Fennadin",40,20);
    c2.isAffordable(20);
    c2.get_name();
    c2.get_gname();
    c2.get_discount();
    c2.getSellingPrice();

    Medicine c3("Histacin","NaBrO",2,1000);
    c3.set_name("Ketifen");
    c3.set_gname("NaOH");
    c3.set_discount(5);
    c3.set_price(20);

    c3.isAffordable(50);
    c3.get_name();
    c3.get_gname();
    c3.get_discount();
    c3.getSellingPrice();
}
