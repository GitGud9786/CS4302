#include "FLOAT.h"

//FLOAT::FLOAT()
//{
//    //ctor
//}

FLOAT::~FLOAT()
{
    //dtor
}
FLOAT FLOAT:: operator + (const FLOAT &val)
{
    data+=val.data;
    return FLOAT(data);
}
FLOAT FLOAT:: operator - (const FLOAT &val)
{
    data-=val.data;
    return FLOAT(data);
}
FLOAT FLOAT:: operator * (const FLOAT &val)
{
    data*=val.data;
    return FLOAT(data);
}
FLOAT FLOAT:: operator / (const FLOAT &val)
{
    data/=val.data;
    return FLOAT(data);
}
void FLOAT:: operator = (int &i)
{
    i=data;
}
