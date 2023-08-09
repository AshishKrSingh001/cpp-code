#include <iostream>
using namespace std;

class StaticMethod
{
    public:
    static int x;
    int b;
    void setvar(int a,int d)
    {
        x=a;
        b=d;
    }
    void show()
    {
        
        
        cout<<"Number1: "<<x<<endl;
        cout<<"Number2: "<<b<<endl;
    }
};
int StaticMethod::x;
int main()
{
    StaticMethod sm,obj2;   
    sm.setvar(10,20); 
    sm.show();
    obj2.show();
    return 0;
}
