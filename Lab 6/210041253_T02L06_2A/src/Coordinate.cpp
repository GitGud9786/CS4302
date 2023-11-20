#include "Coordinate.h"
#include<cmath>
//Coordinate::Coordinate()
//{
//    //ctor
//}

Coordinate::~Coordinate()
{
    //dtor
}
float Coordinate::getDistance(const Coordinate &C) const
{
    float x = (C.abcissa - abcissa) * (C.abcissa - abcissa);
    float y = (C.ordinate - ordinate) * (C.ordinate - ordinate);
    return sqrt(x+y);
}
float Coordinate::getDistance()
{
    float x = (abcissa) * (abcissa);
    float y = (ordinate) * (ordinate);
    return sqrt(x+y);
}
void Coordinate::move_x(float x)
{
    abcissa+=x;
}
void Coordinate::move_y(float y)
{
    ordinate+=y;
}
void Coordinate::movE(float x)
{
    abcissa+=x;
    ordinate+=x;
}
bool  Coordinate::operator >= (Coordinate &C)
{
            if(getDistance()>=C.getDistance()) return true;
            else return false;
}
bool Coordinate::operator <= (Coordinate &C)
{
            if(getDistance()<=C.getDistance()) return true;
            else return false;
}
bool Coordinate::operator == (Coordinate &C)
{
            if(getDistance()==C.getDistance()) return true;
            else return false;
            }
bool Coordinate::operator != (Coordinate &C)
{
            if(getDistance()!=C.getDistance()) return true;
            else return false;
}
void Coordinate::operator ++ ()
{
            abcissa++;
            ordinate++;
}
void Coordinate::operator -- ()
{
            abcissa--;
            ordinate--;
}
//---POSTFIX
void Coordinate::operator ++ (int)
{
            abcissa++;
            ordinate++;
}
void Coordinate::operator -- (int)
{
            abcissa--;
            ordinate--;
}
