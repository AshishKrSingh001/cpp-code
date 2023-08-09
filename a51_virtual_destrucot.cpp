#include <iostream>
using namespace std;
class A
{
    public:
    virtual ~A()
    {
        cout<<"Base"<<endl;
    }
};
class B:public A
{
    public:
    ~B()
    {
        cout<<"Derive"<<endl;
    }
};
int main()
{
    A *ptr;
    ptr   =  new B;
    delete ptr;
}