#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<iostream>
using namespace std;
///deletion from beg
/*
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
ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}
cout<<endl;
ptr=head;

head=ptr->next;
ptr->next=NULL;
delete ptr;

ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}


}
*/

//deletion at end
/*
struct node
{
int data;
struct node *next;
};

int main()
{
    int n1,n2;
struct node *head,*ptr,*ptr1;
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
ptr=head;
while(ptr->next->next!=NULL)
{
ptr=ptr->next;
}
ptr1=ptr;
ptr->next=NULL;
delete ptr1;
ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}


}
*/





struct node
{
int data;
struct node *next;
};

int main()
{
    int n1,n2;
struct node *head,*ptr,*ptr1;
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
ptr=head;
while(ptr->next->data!=3)
{

    ptr=ptr->next;
}
ptr1=ptr->next;
ptr->next=ptr1->next;
ptr1->next=NULL;
delete ptr1;



ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}


}
