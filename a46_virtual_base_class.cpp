#include <iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base()
    {
        cout<<"This is base class constructor"<<endl;
    }
};
class Derived:public Base
{
    public:
    ~Derived()
    {
        cout<<"This is derived class constructor"<<endl;
    }
};
int main()
{
    Base *b;
    b = new Derived();
    delete b;
    return 0;
}