#include <iostream>
using namespace std;

class A
{
    private:
        int *f_num,*l_num;
    public:
        A()
        {
            f_num = new int;
            l_num = new int;
            
            cout<<"Good Morning"<<endl;
        }
        void input()
        {
            cout<<"Enter two number:"<<endl;
            cin>>*f_num>>*l_num;
            if(*f_num>*l_num)
            {
                *f_num = *f_num - *l_num;
                *l_num = *f_num + *l_num;
                *f_num = *l_num - *f_num;
            }
        }
        void palindrome()
        {
            cout<<"Palondrome number between "<<*f_num<<" and "<<*l_num<<":"<<endl;
            for(int i=*f_num;i<=*l_num;i++)
            {
                int d,rev=0,z=i;
                while(z>0)
                {
                    d = z%10;
                    rev = rev*10 + d;
                    z=z/10;
                }
                if(i==rev)
                {
                    cout<<rev<<"\t";
                }
            }
        }
        void prime_num()
        {
            cout<<endl<<"Prime number between "<<*f_num<<" and "<<*l_num<<":"<<endl;
            for(int i=*f_num;i<=*l_num;i++)
            {
                int c=0;
                for(int j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        c++;
                    }
                }
                if(c==0)
                {
                    cout<<i<<"\t";
                }
            }
        }
        ~A()
        {
            delete f_num;
            delete l_num;
            cout<<"\nThanks\nHave a good day.\n";
        }
    
};

int main()
{
    A obj;
    obj.input();
    obj.palindrome();
    obj.prime_num();
    return 0;
}