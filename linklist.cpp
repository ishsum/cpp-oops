#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <iostream>
using namespace std;
///insertion at end
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


}
*/



///insertion at beggining
/*
struct node
{

    int value;
    struct node *next;
};

int main()
{
int i,n,d;
struct node *head,*ptr;
struct node *f1=new node;
f1->value=1;
f1->next=NULL;
head=f1;
ptr=head;
i=0;
cin>>n;
while(i<n)
{
    cin>>d;
    f1=new node();
    f1->value=d;
    f1->next=head;
    head=f1;
i++;

}



ptr=head;
while(ptr!=NULL)
{

    cout<<ptr->value;
    ptr=ptr->next;
}


}


*/



///remove duplicacy
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
while(ptr!=NULL)
{
    while(ptr1!=NULL)
    {
        if(ptr->data==ptr1->data)
        {
            delete ptr1;
            ptr1=ptr1->next;
           }

           ptr1=ptr1->next;
    }
ptr=ptr->next;
}

ptr=head;
while(ptr!=NULL)
{

    cout<<ptr->data;
    ptr=ptr->next;
}


}
*/


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
while(i<n2)
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


}
*/


///insertion at middle
