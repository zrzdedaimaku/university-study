#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
	//1.单向链表 
	struct Stu{
		int no;
		Stu *next;
	}*head,*tail,*p;
	//创建 
	int stuno;
	head=tail=NULL;
	cin>>stuno;
	while(stuno!=0) //输入直至0结束 
	{
		p=(Stu *)malloc(sizeof(Stu));	//没有会死 !!! 
		p->no=stuno;
		p->next=NULL;
		if(head==NULL) 
			head=p;
		else
			tail->next=p;
		tail=p;
		cin>>stuno;
	}
	
	//插入
		//头插 
	Stu s1;
	p=&s1;
	cin>>p->no;
	p->next=head;
	head=p;
		//尾插 
	Stu s2;
	p=&s2;
	cin>>p->no;
	p->next=NULL;
	tail->next=p;
	tail=p;
	
	//输出
	p=head;
	while(p!=NULL)
	{
		cout<<p->no<<" ";
		p=p->next;
	}
	cout<<endl;
	*/
	
	//2.双向链表
	struct Stu{
		Stu *prior;
		int no;
		Stu *next;
	}*head,*tail,*p;
	//创建 
	int stuno;
	head=tail=NULL;
	cin>>stuno;
	while(stuno!=0) //输入直至0结束 
	{
		p=(Stu *)malloc(sizeof(Stu));	//没有会死 !!! 
		p->prior=tail;
		p->no=stuno;
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
			p->prior=NULL;
		}
		else
			tail->next=p;
		tail=p;
		cin>>stuno;
	}
	
	//插入
		//头插 
	Stu s1;
	p=&s1;
	cin>>p->no;
	p->next=head;
	p->prior=NULL;
	head->prior=p;
	head=p;
		//尾插 
	Stu s2;
	p=&s2;
	cin>>p->no;
	p->next=NULL;
	p->prior=tail;
	tail->next=p;
	tail=p;
	
	//输出
	p=head;
	while(p!=NULL)
	{
		cout<<p->no<<" ";
		p=p->next;
	}
	cout<<endl;
	p=tail;
	while(p!=NULL)
	{
		cout<<p->no<<" ";
		p=p->prior;
	}
	cout<<endl;
	return 0;
}

