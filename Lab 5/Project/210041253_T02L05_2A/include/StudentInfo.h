#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>
using namespace std;
class StudentInfo
{
    public:
        StudentInfo();
        ~StudentInfo();

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getbirth() { return birth; }
        void Setbirth(string val) { birth = val; }
        string Getid() { return id; }
        void Setid(string val) { id = val; }
        string Getcgpa() { return cgpa; }
        void Setcgpa(string val) { cgpa = val; }

        void setinfo(string n,string b,string i,string c);
        void getinfo();
    protected:

    private:
        string name;
        string birth;
        string id;
        string cgpa;
};

#endif // STUDENTINFO_H
