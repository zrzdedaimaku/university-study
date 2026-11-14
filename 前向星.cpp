#include<bits/stdc++.h>
using namespace std;
const int Maxn=10000; //最大点数 
struct Node{
	int v;
	int w;
	int next;
}edge[Maxn*Maxn];

int head[Maxn];
int cnt=1;
void AddEdge(int u,int v,int w)
{
	edge[cnt].v=v;
	edge[cnt].w=w;
	edge[cnt].next=head[u];
	head[u]=cnt++;
}

int main()
{
	memset(head,-1,sizeof(head));
	//创建前向星 
	int n,m; //点数 边数
	cout<<"输入点数与边数："; 
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cout<<"起点 终点 权重：";
		cin>>u>>v>>w;
		AddEdge(u,v,w);
	}
	//查询以u为起点的边 
	int u;
	cout<<"输入所要查询的起点："; 
	cin>>u;
	for(int i=head[u];~i;i=edge[i].next)
	{
		cout<<edge[i].v<<" "<<edge[i].w<<endl;
	}
	return 0;
}

