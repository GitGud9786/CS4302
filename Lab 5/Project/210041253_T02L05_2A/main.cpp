#include <iostream>
#include "StudentInfo.h"
#include<string>
using namespace std;

int main()
{
    StudentInfo student1,student2,student3;
    student1.setinfo("Muhammad Tausif Ul Islam","18/09/2002","210041253","3.74");
    student2.setinfo("Shahir Awlad","27/07/2002","210041201","4.00");
    student3.setinfo("Yameen Saseer","20/06/2002","210041234","3.98");

    student1.getinfo();
    student2.getinfo();
    student3.getinfo();
    return 0;
}
