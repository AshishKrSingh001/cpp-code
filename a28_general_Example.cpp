#include <iostream>
using namespace std;

struct DOB
{
    int dd,mm,yyyy;
};
class Employee
{
    protected:
        int eId;
        float salary;
        char eName[20],post[10],grade,phoneNo[10],accNo[15];
        struct DOB dob;
        Employee()
        {
            cout<<"Enter Employee's Name:"<<endl;
            cin>>eName;
            cout<<"Enter Employee's ID:"<<endl;
            cin>>eId;
            cout<<"Enter Employee's Post:"<<endl;
            cin>>post;
            cout<<"Enter Employee's Salary:"<<endl;
            cin>>salary;
            cout<<"Enter Employee's Grade:"<<endl;
            cin>>grade;
            cout<<"Enter Employee's Account number:"<<endl;
            cin>>accNo;
            cout<<"Enter Employee's Phone number: "<<endl;
            cin>>phoneNo;
            cout<<"Enter Date of Birth(seperated by space):"<<endl;
            cin>>dob.dd>>dob.mm>>dob.yyyy;
            
        }
};
class details:protected Employee
{
    public:
        details()
        {
            cout<<"Employee's Name: "<<eName<<endl<<"Employee's ID: "<<eId<<endl<<"Employee's Salary: "<<salary<<endl<<"Employee's Grade: "<<grade<<endl<<"Employee's Account number: "<<accNo<<endl<<"Date of Birth: "<<dob.dd<<"-"<<dob.mm<<"-"<<dob.yyyy<<endl;
        }
        ~details()
        {
            cout<<"Thanks"<<endl;
        }
};

int main()
{
    details d;
    return 0;
}