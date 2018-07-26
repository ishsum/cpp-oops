#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <iostream>
using namespace std;

struct node
{
int data;
struct node *next;
};
/*

void ilist()
{
    struct node *head,*ptr;
int n1;
struct node *f1=new node;
cout<<"enter data of first node"<<endl;
cin>>n1;
f1->data=n1;
f1->next=NULL;
    head=f1;
    ptr=head;


}
*/

void mlist()
{
   struct node *head,*ptr;
int n1;
struct node *f1=new node;
cout<<"enter data of first node"<<endl;
cin>>n1;
f1->data=n1;
f1->next=NULL;
    head=f1;
    ptr=head;
    int n2,d;
    int i=0;
    cout<<"enter no of nodes you want to link"<<endl;
cin>>n2;
while(i<n2-1)
{
f1=new node;
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

void blist()
{
    struct node *head,*ptr;
int n1;
struct node *f1=new node;
cout<<"enter data of first node"<<endl;
cin>>n1;
f1->data=n1;
f1->next=NULL;
    head=f1;
    ptr=head;
int i,n,d;
i=0;
cout<<"enter count of nodes"<<endl;
cin>>n;
while(i<n-1)
{
     cout<<"enter next node data"<<endl;
    cin>>d;
f1=new node();
    f1->data=d;
    f1->next=head;
    head=f1;
i++;

}
ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}
}


void elist()
{
    struct node *head,*ptr;
int n1;
struct node *f1=new node;
cout<<"enter data of first node"<<endl;
cin>>n1;
f1->data=n1;
f1->next=NULL;
    head=f1;
    ptr=head;
    int n2,d;
int i=0;
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
/*
void display()
{
 struct node *head,*ptr;
ptr=head;
while(ptr!=NULL)
{
    cout<<ptr->data;
    ptr=ptr->next;

}

}
*/
int main()
{
int ch=1;

while(ch!=0)
{
 cout<<endl;
    cout<<"Enter 1 to insert node at end"<<endl;
    cout<<"Enter 2 to insert node at beginning"<<endl;
    cout<<"Enter 3 to insert node in middle"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    cin>>ch;

    switch(ch)

{
case 1:

        //ilist();
        elist();
  // display();

    break;

case 2:

        //ilist();
        blist();
    //    display();

    break;

case 3:

        //ilist();
        mlist();
      //  display();

default:
    cout<<"please enter valid choice"<<endl;

}
}
}
