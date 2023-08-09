#include <iostream>
using namespace std;

class StaticMethod
{
    public:
    static int x;
    StaticMethod()
    {
        x=2;
    }
    static void show()
    {
        
        cout<<"Number1: "<<x<<endl;
    }
};
int StaticMethod::x;
int main()
{
    StaticMethod sm;    
    sm.show();
    return 0;
}
