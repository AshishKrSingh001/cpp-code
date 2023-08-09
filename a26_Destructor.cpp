#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    A()
    {
        cout<<"Welcome to class A"<<endl;
    }
    void in()
    {
        cout<<"Enter three values: "<<endl;
        cin>>a>>b>>c;
    }
    void out()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
    ~A()
    {
        cout<<"Bye"<<endl;
    }
    
};


int main()
{
    A obj;
    obj.in();
    obj.out();
    return 0;
}