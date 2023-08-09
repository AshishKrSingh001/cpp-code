//Define 
#include <iostream>
using namespace std;

class Employee
{
    private:
        int Id;
        string name,p_no;
    public:
        Employee()
        {
            cout<<"Enter Employees Name: "<<endl;
            cin>>name;
            cout<<"Enter Employees Id: "<<endl;
            cin>>Id;
            cout<<"Enter Employees Phone number: "<<endl;
            cin>>p_no;

        }
    
};
class Details:public Employee
{
    public:
    ~Details()
        {
            cout<<"Employees Name: "<<endl<<"Employees Id: "<<endl<<"Enter Employees Phone number: "<<endl;
            
            
        }
};
int main()
{
    for(int i=1;i<=3;i++)
    {
        Details d[i];
    }
    
    
    return 0;
}