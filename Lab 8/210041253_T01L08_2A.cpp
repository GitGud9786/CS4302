#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
};
class twoD_shape:public Shape
{
    public:
    float area;
    float perimeter;
    twoD_shape(){}
    float get_area(){return area;}
    float get_perimeter(){return perimeter;}
    void whatAmI(){cout<<"I am a two dimensional shape"<<endl;}
};
class threeD_shape:public Shape
{
    public:
    float surface_area;
    float volume;
    threeD_shape(){}
    float get_surface_area(){return surface_area;}
    float get_volume(){return volume;}
    void whatAmI(){cout<<"I am a three dimensional shape"<<endl;}
};
class Circle:public twoD_shape
{
    public:
    float radius;
    Circle(float val)
    {
        radius=val;
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    Circle()
    {
        radius=0;
        area=0;
        perimeter=0;
    }
    float get_radius(){return radius;}
    void whoAmI(){cout<<"I am a circle. ";whatAmI();}
};
class Rectangle:public twoD_shape
{
    public:
    float length,breadth;
    Rectangle(float l,float b)
    {
        length=l;
        breadth=b;
        area=length*breadth;
        perimeter=2*length + 2*breadth;
    }
    Rectangle()
    {
        length=0;
        breadth=0;
        area=0;
    }
    float get_length(){return length;}
    float get_breadth(){return breadth;}
    void whoAmI(){cout<<"I am a rectangle. ";whatAmI();}
};
class Sqaure:public twoD_shape
{
    public:
    float length;
    Sqaure(float l)
    {
        length=l;
        area=length*length;
        perimeter=4*length;
    }
    Sqaure()
    {
        length=0;
        area=0;
    }
    float get_length(){return length;}
    void whoAmI(){cout<<"I am a square. ";whatAmI();}
};
//--------------------------------3D SHAPES------------------------------------
class Cube:public threeD_shape
{
    public:
    float length;
    Cube(float val)
    {
        length=val;
        surface_area=6*length*length;
        volume=length*length*length;
    }
    Cube()
    {
        surface_area=0;
        volume=0;
        length=0;
    }
    float get_length(){return length;}
    void whoAmI(){cout<<"I am a cube. ";whatAmI();}
};
class Cylinder:public threeD_shape
{
    public:
    float radius,height;
    Cylinder(float val,float heigh)
    {
        radius=val;
        height=heigh;
        surface_area=2 * 3.14 * radius * height + 2 * 3.14 * radius*radius;
        volume=3.14 * radius * radius * height;
    }
    Cylinder()
    {
        surface_area=0;
        volume=0;
        height=0;
        radius=0;
    }
    float get_radius(){return radius;}
    float get_height(){return height;}
    void whoAmI(){cout<<"I am a cylinder. ";whatAmI();}
};
class Cone:public threeD_shape
{
    public:
    float radius,height;
    Cone(float val,float heigh)
    {
        radius=val;
        height=heigh;
        surface_area=3.14 * radius *radius + sqrt(height*height) + radius*radius;
        volume=0.33333 * 3.14 * radius * radius * height;
    }
    Cone()
    {
        surface_area=0;
        volume=0;
        height=0;
        radius=0;
    }
    float get_radius(){return radius;}
    float get_height(){return height;}
    void whoAmI(){cout<<"I am a cone. ";whatAmI();}
};
int main()
{
    Circle C1(5);
    cout<<"Area of Circle: "<<C1.get_area()<<" Perimeter of Circle: "<<C1.get_perimeter()<<" Radius of Circle: "<<C1.get_radius()<<endl;
    C1.whoAmI();cout<<endl;

    Rectangle R1(10,24);
    cout<<"Area of Rectangle: "<<R1.get_area()<<" Perimeter of Rectangle: "<<R1.get_perimeter()<<" Length and breadth of Rectangle: "<<R1.get_length()<<", "<<R1.get_breadth()<<endl;
    R1.whoAmI();cout<<endl;

    Sqaure S1(2.5);
    cout<<"Area of Square: "<<S1.get_area()<<" Perimeter of Square: "<<R1.get_perimeter()<<" Length of Square: "<<S1.get_length()<<" "<<endl;
    S1.whoAmI();cout<<endl;

    Cone C2(5,4.2);
    cout<<"Surface area of Cone: "<<C2.get_surface_area()<<" Volume of Cone: "<<C2.get_volume()<<" Radius of Cone: "<<C2.get_radius()<<endl;
    C2.whoAmI();cout<<endl;

    Cylinder C3(5,4.79);
    cout<<"Surface area of Cylinder: "<<C3.get_surface_area()<<" Volume of Cylinder: "<<C3.get_volume()<<" Radius of Cylinder: "<<C3.get_radius()<<" "<<C3.get_height()<<endl;
    C3.whoAmI();cout<<endl;

    Cube C4(3.35);
    cout<<"Surface area of Cube: "<<C4.get_surface_area()<<" Volume of Cube: "<<C4.get_volume()<<" Length of Cube: "<<C4.get_length()<<endl;
    C4.whoAmI();cout<<endl;
}