#include<iostream>
using namespace std;

template<class T>
T nth_max(T ar[],int n)
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(ar[j]>ar[i])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    return ar[n-1];
}

int main()
{
    float ar[]={4.22,3.45,1.13,9.11,5.67};
    cout<<"Third largest element is: "<<nth_max(ar,3)<<endl;
    int br[]={12,43,65,11,9};
    cout<<"Fourth largest element is: "<<nth_max(br,4)<<endl;
}