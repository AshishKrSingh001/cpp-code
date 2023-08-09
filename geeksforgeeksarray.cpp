#include <iostream>

 using namespace std;
 
 void sort(int *A,int N)
 {
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(*(A+i)>*(A+j))
			{
				int temp = *(A+i);
				*(A+i) = *(A+j);
				*(A+j) = temp;
			}
		}
	}
 }
 int findMinDiff(int A[],int N,int M)
 {
	sort(A,N);
	int min_diff=A[N-1];
	int min;
	for(int i=0;i<N-M;i++)
	{
		min = A[i+M-1]-A[i];
		if(min<min_diff)
		{
			min_diff = min;
		}
	}
	return min_diff;
 }
 
 int main()
 {
	int N;
	cout<<"Enter size of Array:"<<endl;
	cin>>N;
	int A[N];
	
	cout<<"Enter "<<N<<" Array element: "<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	
	int M;
	cout<<"Enter no of student: "<<endl;
	cin>>M;
	
	int min_diff = findMinDiff(A,N,M);
	cout<<"Minimum Difference: "<<min_diff<<endl;
	
	 return 0;
 }