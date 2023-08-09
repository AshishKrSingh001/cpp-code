#include <iostream>
using namespace std;

int main(int argc,char*argv[])
{
	if(argc==1)
	{
		cout<<"Bad command"<<endl;
		return 0;
	}
	int a[20],i,j;
	for(i=1,j=0;j<argc-1;j++,i++)
	a[j]=atoi(argv[i]);

	for(i=0;i<argc-1;i++)
	{
		for(j=0;j<argc-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout<<"Bubble Sorted Array: "<<endl;
	for(i=0;i<argc-1;i++)
	cout<<a[i]<<"\t";
	return 0;
}