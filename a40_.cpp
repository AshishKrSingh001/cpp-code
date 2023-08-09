#include <iostream>
#include <string>
using namespace std;

class A
{
    public:
    virtual void method()
    {
        cout<<"This is Base class A"<<endl;
    }
};
class B : public A
{
    public:
    void method()
    {
        cout<<"This is Base class B"<<endl;
    }
};
class C : public A
{
    public:
    void method()
    {
        cout<<"This is Base class C"<<endl;
    }
};
class D : public A
{
    public:
    void method()
    {
        cout<<"This is Base class D"<<endl;
    }
};

int main()
{
    
    A *ptr,a;
    a.method(); // This is Base class A
    ptr=&a;
    ptr->method(); // This is Base class A

    B b;
    b.method(); // This is Base class B
    ptr=&b;
    ptr->method(); // This is Base class B

    C c;
    c.method(); // This is Base class C
    ptr=&c;
    ptr->method(); // This is Base class C

    D d;
    d.method(); // This is Base class D
    ptr=&d;
    ptr->method(); // This is Base class D

    
    d.A::method(); // This is Base class A
    ptr=&d;
    ptr->A::method(); // This is Base class A
    return 0;
}