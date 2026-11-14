#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s2>>s1;
	 
	//求next数组 (有更进一步优化：数组nextval) 
	int l1=s1.length();
	int next[l1];
	next[0]=0;
	int k=1,len=0;
	while(k<l1)
	{
		if(s1[k]==s1[len])
		{
			len++;
			next[k]=len;
			k++;
		}
		else
		{
			if(len==0)
			{
				next[k]=0;
				k++;
			}
			else
			{
				len=next[len-1];//回溯 
			}
		}
	}
	
	//进行KMP搜索
	int i=0;//记录s2中当前的位置 
	int j=0;//记录s1中当前的位置
	int l2=s2.length();
	while(i<l2)
	{
		//cout<<i<<" "<<j<<endl;
		if(s2[i]==s1[j])
		{
			i++;
			if(j==l1-1)
			{
				j=next[j];
				cout<<i-l1+1<<endl;
			}
			else
			{
				j++;
			}
		}
		else
		{
			if(j==0)
			{
				i++;
			}
			else
			{
				j=next[j-1];//j=next[j]错误 ,why?	有超时、有错误。
				/*
					原因：
					当s2的第i项与s1的第j项不同时，看s1第0项至第j-1项的公共前后缀，并移动
					1.						
					s2部分	A	B	A	B	C	…… 
											^
					s1		A	B	A	B	A 	
					next	0	0	1	2	1 
											^
					2.
					s2部分	A	B	A	B	C	…… 
											^
					s1				A	B	A	B	A 	
					next			0	0	1	2	1 
											^
				*/
			}
			
		}
	} 
	
	for(int i=0;i<s1.length();i++)
	{
		cout<<next[i]<<" ";
	 } 
	cout<<endl;
	return 0;
}

