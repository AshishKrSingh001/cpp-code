/*

*/
#include <iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    test()
    {
        x=10;
    }
    test(int z)
    {
        x = z;
    }
    test(test &z)
    {
        x = z.x+1;
    }
    ~test()
    {
        cout<<"Number: "<<x<<endl;
    }

};
int main()
{
    test t;
    test b(t);
    test a(20);
    
    return 0;
}