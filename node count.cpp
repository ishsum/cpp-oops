#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
};

int main()
{
    int n1,n2;
struct node *head,*ptr;
int i=0;
struct node *f1=new node;
cout<<"enter data of first node"<<endl;
cin>>n1;
f1->data=n1;
f1->next=NULL;
    head=f1;
    ptr=head;
    cout<<"enter no of nodes you want to link"<<endl;
cin>>n2;
while(i<n2-1)
{

f1=new node;
int d;
cout<<"enter data you want to insert in next node"<<endl;
cin>>d;

f1->data=d;
f1->next=NULL;
    ptr->next=f1;
    ptr=ptr->next;
i++;

}
int x;
int count=0;
ptr=head;
struct node *s=new node;
s->data=10;
s->next=NULL;
cout<<"enter node after which you want to insert"<<endl;
cin>>x;
while(ptr!=NULL)
{
    count++;
if(x==count)
{
    s->next=ptr->next;
ptr->next=s;


}
else
{

ptr=ptr->next;
}
}

ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}


}




