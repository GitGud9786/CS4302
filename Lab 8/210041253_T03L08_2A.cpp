#include<iostream>
#include<string>
#include<vector>
#define MAX 100
using namespace std;
class Book
{
    private:
    string title;
    string author;
    string date;
    string ISBN;
    string edition;
    public:
    Book(string t, string a, string d, string i, string e):title(t),author(a),date(d),ISBN(i),edition(e)
    {};
    string get_title(){return title;}
    string get_author(){return author;}
    string get_date(){return date;}
    string get_isbn(){return ISBN;}
    string get_edition(){return edition;} 
};
class Member
{
    private:
    string name;
    string postaladd;
    string number;
    string email;
    string status;
    public:
    Member(string n, string p, string nu, string e, string s):name(n),postaladd(p),number(nu),email(e),status(s)
    {};
    string get_name(){return name;}
    string get_postal(){return postaladd;}
    string get_number(){return number;}
    string get_email(){return email;}
    string get_status(){return status;}
};
class Library
{
    private:
    vector<Book> b;
    vector<Member> m;
    public:
    void get_Library(string title, string author,string date, string isbn, string edition, string name, string postal, string number, string email,string status)
    {
        Book B1(author,title,date,isbn,edition);
        Member M1(name,postal,number,email,status);
        b.push_back(B1);
        m.push_back(M1);
    }
    void display()
    {
        for(int i=0;i<b.size();i++)
        {
           cout<<"Name: "<< m[i].get_name()<<"Postal: "<<m[i].get_postal()<<"Number: "<<m[i].get_number()<<"Email: "<<m[i].get_email()<<"Status: "<<m[i].get_status()<<endl;
           cout<<"Author: "<<b[i].get_title()<<"Author: "<<b[i].get_author()<<"Date: "<<b[i].get_date()<<"ISBN: "<<b[i].get_isbn()<<"Edition: "<<b[i].get_edition()<<endl; 
        }
    }
};
int main()
{
    Library L1;
    int n;
    cin>>n;
    while(n--)
    {
        string title,author,date,isbn,edition,name,postal,number,email,status;
        cout<<"Give the inputs as mentioned: title, author, date, ISBN, edition for Members. For books: name, postal, number, email, status: ";
        cin>>title>>author>>date>>isbn>>edition>>name>>postal>>number>>email>>status;
        L1.get_Library(title,author,date,isbn,edition,name,postal,number,email,status);
    }
    L1.display();
}