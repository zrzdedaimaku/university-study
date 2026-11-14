#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< map<int,int> > v[10];
	map<int,int> m1;
	m1[1]=2;
	v[0].push_back(m1);
	map<int,int> m2;
	m2[2]=3;
	v[0].push_back(m2);
	for(vector<map<int,int> >::iterator it=v[0].begin();it!=v[0].end();it++)
	{
		for(map<int,int>::iterator mit=it->begin();mit!=it->end();mit++)
			cout<<mit->first<<" "<<mit->second<<endl;
	}
	return 0;
}

