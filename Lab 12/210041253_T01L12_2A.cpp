//I am Speed
#define MAX 2
#include<iostream>
using namespace std;

template<class T>
class my_stack
{
    private:
    T ar[MAX];
    int top;
    public:
    class empty
    {
    };
    class full
    {
    };
    my_stack(){top=-1;}
    void push(T obj)
    {
        if(top==MAX-1)throw full();
        else ar[++top]=obj;
    }
    T pop()
    {
        if(top==-1)throw empty();
        else return ar[top--];
    }
    T peek()
    {
        if(top==-1)throw empty();
        else return ar[0];
    }
};

int main()
{
    my_stack<int> i;
    my_stack<float> f;
    try
    {
        i.push(45);
        i.push(34);
        i.push(34);
        cout<<"Top value before popping of integer stack: "<<i.pop()<<endl;
        cout<<"First value of the integer stack: "<<i.peek()<<endl;

        f.push(8.452);
        f.push(9.69);
        f.push(9.00);
        //f.push(11.3);
        cout<<"First value of the float stack: "<<f.peek()<<endl;
        i.pop();
        i.pop();
    }
    catch(my_stack<int>::full)
    {
        cout<<"Integer Stack is full"<<endl;
    }
    catch(my_stack<int>::empty)
    {
        cout<<"Integer Stack is empty"<<endl;
    }

    catch(my_stack<float>::full)
    {
        cout<<"Float Stack is full"<<endl;
    }
    catch(my_stack<float>::empty)
    {
        cout<<"Float Stack is empty"<<endl;
    }
}