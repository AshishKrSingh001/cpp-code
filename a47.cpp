//WAP to find out factorial of any number using class
#include <iostream>
using namespace std;

class Fact
{
    private:
    int num,fact;
    public:
    Fact(int n)
    {
        num = n;
        fact=1;
    }
    ~Fact()
    {
        for(int i=1;i<=num;i++)
        {
            fact = fact*i;
        }
        cout<<"Factorial: "<<fact<<endl;
    }
    
};
int main()
{
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    Fact d(a);
    return 0;
}