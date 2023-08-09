#include <iostream>
using namespace std;

int main(int argc,char*argv[])
{
	if(argc== 1)
	{
		cout<<"Bad command"<<endl;
		return 0;
	}
	int a[20],i,j;
	for(i=1,j=0;j<argc-1;j++,i++)
	a[j]=atoi(argv[i]);

	for(i=0;i<argc-2;i++)
	{
		for(j=i+1;j<argc-1;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<"Selection Sorted Array: "<<endl;
	for(i=0;i<argc-1;i++)
	cout<<a[i]<<"\t";
	return 0;
}