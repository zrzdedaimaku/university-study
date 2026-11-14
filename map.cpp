#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	m[100]=1,m[101]=2,m[2]=3;
	for(const auto& kv : m)
	{
		cout<<m.first<<":"<<m.second<<endl;
	}
	return 0;
}

