#include <iostream>
using namespace std;

class Academic
{
    protected:
        double Matric_per,inter_per;
    public:
        Academic()
        {
            cout<<"Enter percentage of Matric and Inter seperated by White space"<<endl;
            cin>>Matric_per>>inter_per;
        }
};
class Physical
{
    protected:
        double height,weight;
    public:
        Physical()
        {
            cout<<"Enter your Height and Weight seperated by White space"<<endl;
            cin>>height>>weight;
        }
};
class Details:public Academic,public Physical
{
    private:
        int Id;
        //string name,no;
        char name[10],no[15];
    public:
        Details()
        {
            
            cout<<"Enter your Id, Name and Phone number seperated by White space"<<endl;
            cin>>Id>>name>>no;
        }
        ~Details()
        {
            cout<<"\n******Details*******\n";
            cout<<"Id: "<<Id<<endl<<"Name: "<<name<<endl<<"Matric percentage: "<<Matric_per<<endl<<"Inter percentage: "<<inter_per<<endl<<"Height: "<<height<<endl<<"Weight: "<<weight<<endl<<"Phone number: "<<no<<endl;
        }

};
int main()
{
    Details d;
    return 0;
}