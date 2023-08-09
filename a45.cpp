#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A(){}
    A(int a,int b)
    {
        a=a;
        b=b;
    }
    A(A &m)
    {
        a=m.a;
        b=m.b;
    }
    ~A()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};
int main()
{
    A obj(2,3),obj2;
    return 0;
}