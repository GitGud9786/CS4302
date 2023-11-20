#include <fstream>            //for file-stream functions
#include <iostream>
#include <typeinfo>           //for typeid()
using namespace std;
#include <process.h>          //for exit()

const int LEN = 32;           //maximum length of last names
const int MAXEM = 100;        //maximum ID of Products

enum Product_type {book, dvd};
////////////////////////////////////////////////////////////////
class Product                //Product class
   {
   private:
      char name[LEN]; 
      int price;
      unsigned long ID;        //Product name
      static int n;           //current ID of Products
      static Product* arrap[];  //array of ptrs to emps
   public:
      virtual void getdata()
         {
         cin.ignore(10, '\n');
         cout << "   Enter name: "; cin >> name;
         cout << "   Enter price: "; cin >> price;
         cout << "   Enter ID: ";      cin >> ID;
         }
      virtual void putdata()
         {
         cout << "\n   Name: " << name;
         cout << "\n   Price: "<<price;
         cout << "\n   ID: " << ID;
         }
      virtual Product_type get_type();  //get type
      static void add();      //add an Product
      static void display();  //display all Products
      static void read();     //read from disk file
      static void write();    //write to disk file
   };
//--------------------------------------------------------------
//static variables
int Product::n;              //current ID of Products
Product* Product::arrap[MAXEM];  //array of ptrs to emps
////////////////////////////////////////////////////////////////
//manager class
class Book : public Product
   {
    private:
        char dir_actor[LEN];
   public:
      void getdata()
         {
            Product::getdata();
            cout << "   Enter Director/Actor: "; cin >> dir_actor;
         }
      void putdata()
         {
         Product::putdata();
         cout<< "\n     Author name: "<<dir_actor;
         }
   };
////////////////////////////////////////////////////////////////
//scientist class
class DVD : public Product
   {
   private:
      char director[LEN];               //ID of publications
   public:
      void getdata()
         {
         Product::getdata();
         cout << "   Enter Director name: "; cin >> director;
         }
      void putdata()
         {
         Product::putdata();
         cout << "\n   Name of director: " << director;
         }
   };
////////////////////////////////////////////////////////////////   
////////////////////////////////////////////////////////////////
//add Product to list in memory
void Product::add()
   {
   char ch;
   cout << "'b' to add a Book"
           "\n'd' to add a DVD"
           "\nEnter selection: ";
   cin >> ch;
   switch(ch)
      {                       //create specified Product type
      case 'b': arrap[n] = new Book;   break;
      case 'd': arrap[n] = new DVD; break;
      default: cout << "\nUnknown Product type\n"; return;
      }
   arrap[n++]->getdata();     //get Product data from user
   }
//--------------------------------------------------------------
//display all Products
void Product::display()
   {
   for(int j=0; j<n; j++)
      {
      cout  << (j+1);           //display ID
      switch( arrap[j]->get_type() )   //display type
         {
         case book:    cout << ". Type: Book";   break;
         case dvd:  cout << ". Type: DVD"; break;
         default: cout << ". Unknown type";
         }
      arrap[j]->putdata();    //display Product data
      cout << endl;
      }
   }
//--------------------------------------------------------------
//return the type of this object
Product_type Product::get_type()
   {
   if( typeid(*this) == typeid(Book) )
      return book;
   else if( typeid(*this)==typeid(DVD) )
      return dvd;
   else
      { cerr << "\nBad Product type"; exit(1); }
   return book;
   }
//--------------------------------------------------------------
//write all current memory objects to file
void Product::write()
   {
   int size;
   cout << "Writing " << n << " Products.\n";
   ofstream ouf;              //open ofstream in binary
   Product_type etype;       //type of each Product object

   ouf.open("EMPLOY.DAT", ios::trunc | ios::binary);
   if(!ouf)
      { cout << "\nCan't open file\n"; return; }
   for(int j=0; j<n; j++)     //for every Product object
      {                       //get its type
      etype = arrap[j]->get_type();
                              //write type to file
      ouf.write( (char*)&etype, sizeof(etype) );
      switch(etype)           //find its size
         {
         case book:   size=sizeof(Book); break;
         case dvd: size=sizeof(DVD); break;
         }                    //write Product object to file
      ouf.write( (char*)(arrap[j]), size );
      if(!ouf)
         { cout << "\nCan't write to file\n"; return; }
      }
   }
//--------------------------------------------------------------
//read data for all Products from file into memory
void Product::read()
   {
   int size;                  //size of Product object
   Product_type etype;       //type of Product
   ifstream inf;              //open ifstream in binary
   inf.open("EMPLOY.DAT", ios::binary);
   if(!inf)
      { cout << "\nCan't open file\n"; return; }
   n = 0;                     //no Products in memory yet
   while(true)
      {                       //read type of next Product
      inf.read( (char*)&etype, sizeof(etype) );
      if( inf.eof() )         //quit loop on eof
         break;
      if(!inf)                //error reading type
         { cout << "\nCan't read type from file\n"; return; }
      switch(etype)
         {                    //make new Product
         case book:       //of correct type
            arrap[n] = new Book;
            size=sizeof(Book);
            break;
         case dvd:
            arrap[n] = new DVD;
            size=sizeof(DVD);
            break;
         default: cout << "\nUnknown type in file\n"; return;
         }                    //read data from file into it
      inf.read( (char*)arrap[n], size  );
      if(!inf)                //error but not eof
         { cout << "\nCan't read data from file\n"; return; }
      n++;                    //count Product
      }  //end while
   cout << "Reading " << n << " Products\n";
   }
////////////////////////////////////////////////////////////////
int main()
   {
   char ch;
   while(true)
      {
      cout << "'a' -- add data for an Product"
              "\n'd' -- display data for all Products"
              "\n'w' -- write all Product data to file"
              "\n'r' -- read all Product data from file"
              "\n'x' -- exit"
              "\nEnter selection: ";
      cin >> ch;
      switch(ch)
         {
         case 'a':            //add an Product to list
            Product::add(); break;
         case 'd':            //display all Products
            Product::display(); break;
         case 'w':            //write Products to file
            Product::write(); break;
         case 'r':            //read all Products from file
            Product::read(); break;
         case 'x': exit(0);   //exit program
         default: cout << "\nUnknown command";
         }  //end switch
      }  //end while
   return 0;
   }  //end main()

