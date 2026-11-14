#include<bits/stdc++.h>
using namespace std;
void Output(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int Partition(int a[],int s,int t)
{
	int i=s,j=t;
	int tmp=a[s];
	while(i!=j)
	{
		while(j>i&&a[j]>=tmp) j--;
		a[i]=a[j];
		//cout<<i<<" "<<j<<":";
		//Output(a,5); 
		while(i<j&&a[i]<=tmp) i++;
		a[j]=a[i];
		//cout<<i<<" "<<j<<":";
		//Output(a,5); 
	}
	 
	a[i]=tmp;
	//Output(a,5);
	//cout<<endl;
	return i;
}
void QuickSort(int a[],int s,int t)
{
	
	if(s<t)
	{
		int i=Partition(a,s,t);
		QuickSort(a,s,i-1);
		QuickSort(a,i+1,t);
	}
}
int main()
{
	int a[5]={3,4,3,5,2};
	Output(a,5);
	QuickSort(a,0,4);
	Output(a,5);
	return 0;
}

