#include<bits/stdc++.h>
using namespace std;
int parent[100];
void init(int n)
{
	for(int i=1;i<=n;i++)
	{
		parent[i]=i;
	}
}
int Find(int a)
{
	if(parent[a]!=a)
		return Find(parent[a]);
	return a;
}
void Union(int a,int b)//默认b>a 
{
	parent[b]=a;
}
bool Check(int a,int b)
{
	if(Find(a)==Find(b))
		return true;
	return false;
}
int main()
{
	int n;//点数 
	cin>>n;
	init(n);
	
	int m;//边数 
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		Union(a,b);
	} 
	
	int k; //操作数 
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int a;cin>>a;
		/*
		0-查询两个节点是否有关
		1-合并两个节点
		2-切断两个节点的联系 
		*/
		int x,y;
		cin>>x>>y;
		if(a==0)
		{
			if(Check(x,y)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		} 
		if(a==1)
		{
			Union(max(x,y),min(x,y));
		}
		if(a==2)
		{
			parent[max(x,y)]=max(x,y);
		}
	}
	return 0;
}

