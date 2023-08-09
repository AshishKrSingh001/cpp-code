#include <iostream>
using namespace std;

class A
{
    private:
    int a=10;
    protected:
    int b=20;
    public:
    int c=30;
    A()
    {
        cout<<"\nClass A"<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
    
};
class B:public A
{
    // a cannot be accessed because of private
    // b works as protected
    // c works as public
    public:
    
    B()
    {
        cout<<"\nClass B"<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
};
class C:private A
{
    // a cannot be accessed because of private
    // b works as private
    // c works as private
    public:
    C()
    {
        cout<<"\nClass C"<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
};
class D:protected A
{
    // a cannot be accessed because of private
    // b works as protected
    // c works as protected
    public:
    D()
    {
        cout<<"\nClass D"<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
};

int main()
{
   A obj1;
   B obj2;
   C obj3;
   D obj4;

    return 0;
}