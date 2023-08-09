#include <iostream>
#include <string>
using namespace std;

class A
{
    public:
    virtual ~A()
    {
        cout<<"This is Base class A"<<endl;
    }
};
class B : public A
{
    public:
    ~A()
    {
        cout<<"This is Base class B"<<endl;
    }
};
class C : public A
{
    public:
    ~A()
    {
        cout<<"This is Base class C"<<endl;
    }
};
class D : public A
{
    public:
    ~A()
    {
        cout<<"This is Base class D"<<endl;
    }
};

int main()
{
    
    A *ptr,a;
    a.~A(); // This is Base class A
    ptr=&a;
    ptr->~A(); // This is Base class A

    B b;
    b.~A(); // This is Base class B
    ptr=&b;
    ptr->~A(); // This is Base class B

    C c;
    c.~A(); // This is Base class C
    ptr=&c;
    ptr->~A(); // This is Base class C

    D d;
    d.~A(); // This is Base class D
    ptr=&d;
    ptr->~A(); // This is Base class D

    D e;
    d.A::~A(); // This is Base class A
    ptr=&d;
    ptr->A::~A(); // This is Base class A
    return 0;
}