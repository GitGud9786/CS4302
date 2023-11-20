#include<iostream>
#include<vector>
#include<string>
using namespace std;

class BookCollection
{
private:
    vector<string> name;
    vector<double> prices;
    int numBooks;
    vector<string> author;
public:
    BookCollection(): name(NULL),prices(NULL),author(NULL) {};
    double operator [](string &title);
    void addBook(string str, double price, string writer);
    void book_display();
};
double BookCollection:: operator [] (string &title)
{
    for(int i=0; i<numBooks; i++)if(title==name[i])return prices[i];
    return 0.0;
}
//void BookCollection:: operator [] (string &str)
//{
//    for(int i=0;i<numBooks;i++)
//    {
//        if(str==name[i])
//        {
//            prices[i]=newprice;
//            cout<<"Price of "<<str<<" updated"<<endl;
//            return;
//        }
//    }
//    addBook(str,newprice,"John Doe");
//}
void BookCollection:: book_display()
{
    for(int i=0; i<numBooks; i++)
    {
        cout<<"Title: "<<name[i]<<endl;
        cout<<"Price: "<<prices[i]<<endl;
        cout<<"Author: "<<author[i]<<endl;
    }
    cout<<numBooks<<endl;
}
void BookCollection:: addBook(string str, double num, string writer)
{
    if(numBooks>=5)
    {
        cout<<"Max capacity. Undoable"<<endl;
        return;
    }
    name.push_back(str);
    numBooks++;
    prices.push_back(num);
    author.push_back(writer);
    cout<<"Added book"<<endl;
}
int main()
{
    BookCollection coll;
    coll.addBook("Sapiens",1500,"Tausif");
    coll.addBook("Huckleberry",3000,"Shahir");
    coll.addBook("Coral Island",3500,"Yead");
    coll.addBook("Prometheus",5000,"Dipto");
    coll.addBook("Angels and demons",500,"Oshayer");
    coll.addBook("Nock!",10000,"Faheem");
    string s="Sapiens";
    cout<<coll[s]<<endl;
    coll.book_display();
}
