#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

struct product
{
	string p_name,c_name;
	int quan;
	float MRP,b_price;
};
class A
{
	ifstream fin;
	ofstream fout;
	int count;
	struct product p[100];
	public:
	A()
	{
		fin.open("D:\\Project\\Product.data");
		fout.open("P.data");
		for(count=0;fin.eof()==0;count++)
		{
			fin>>p[count].p_name>>p[count].c_name>>p[count].quan>>p[count].b_price>>p[count].MRP;
		}
	}
	~A()
	{
		for(int i=0;i<count-1;i++)
		{
			fout<<strupr(p[i].p_name)<<"\t"<<p[i].c_name<<"\t"<<p[i].quan<<"\t"<<p[i].MRP<<"\t"<<p[i].MRP*p[i].quan<<endl<<endl;
		}
		fin.close();
		fout.close();
	}
};
int main()
{
	A a;
	return 0;
}