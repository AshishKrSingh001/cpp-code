#include <iostream>
using namespace std;

class test
{
    private:
    int x;
    public:
    test(int z);
    test(test &m);
    void show();
};
test::test(int z)
{
    x=z;
}
test::test(test &m)
{
    x=m.x;
}
void test::show()
{
    cout<<"value: "<<x<<endl;
}
int main()
{
    test t(10);
    test b(t);
    t.show();
    b.show();

    return 0;
}