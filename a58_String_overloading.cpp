#include <iostream>
#include <string.h>
using namespace std;

class A
{
    private:
    char str[10];
    public:
    // A()
    // {
    //     str[] = new char;
    // }
    void input()
    {
        cout<<"Enter a string: "<<endl;
        cin>>str;
    }
    void output()
    {
        cout<<"String: "<<str<<endl;
    }
    //friend A operator +(A &a,A &b);
    A operator +(A &b)
    {
        A c;
        strcat(str,b.str);
        strcpy(c.str,str);
        return c;
    }
};
int main()
{
    A a,b,c,d,e,f;
    a.input();
    //a.output();
    b.input();
    //b.output();
    d.input();
    e.input();
    f.input();
    c=a+b+d+e+f;
    c.output();
    return 0;
}