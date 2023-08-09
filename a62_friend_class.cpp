#include <iostream>
using namespace std;
class A
{
    private:
        int f_num,l_num;
    public:
        A()
        {
            cout<<"Enter two positive number: "<<endl;
            cin>>f_num>>l_num;

            if(f_num>l_num)
            {
                f_num=f_num-l_num;
                l_num=f_num+l_num;
                f_num=l_num-f_num;
            }
        }
    friend class Palindrome;
    friend class Prime;
};
class Palindrome
{
    public:
        Palindrome(A &obj)
        {
            cout<<endl;
            cout<<"Palindrome number between "<<obj.f_num<<" and "<<obj.l_num<<" is: "<<endl;
            for(int i=obj.f_num;i<=obj.l_num;i++)
            {
                int rev=0,num=i;
                while(num>0)
                {
                    int d=num%10;
                    rev=rev*10+d;
                    num=num/10;
                }
                if(i==rev)
                {
                    cout<<rev<<"\t";
                }
            }
            cout<<endl;
        }
};
class Prime
{
    public:
        Prime(A obj)
        {
            cout<<endl;
            cout<<"Prime number between "<<obj.f_num<<" and "<<obj.l_num<<" is: "<<endl;
            for(int i=obj.f_num;i<=obj.l_num;i++)
            {
                int j,count=0;
                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        count++;
                    }
                }
                if(count==0)
                {
                    cout<<i<<"\t";
                }
            }
            cout<<endl;
        }
};
int main()
{
    A a;
    Palindrome pa(a);
    Prime pr(a);
    return 0;
}
