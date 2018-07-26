#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iostream>
using namespace std;
#include<math.h>


class array1
{

    int *a;
    int s;

public:
    array1(int n)
    {
        s=n;
        a=new int[s];

    }
    void input()
    {
cout<<"Enter elemenst of array"<<endl;
        for(int i=0;i<s;i++)
        {

            cin>>a[i];
        }
    }

    void output()
    {
cout<<"Elements in array are"<<endl;
        for(int i=0;i<s;i++)
        {

            cout<<a[i];
        }
        cout<<endl;
    }

    void insert1()
    {
        int value;
        int pos;
        cout<<"enter value and position at you want to insert"<<endl;
        cin>>value;
        cin>>pos;

        for(int i=s;i>=pos-1;i--)
        {

            a[i+1]=a[i];
        }
        a[pos-1]=value;

        for(int i=0;i<s+1;i++)
        {

            cout<<a[i];
        }
        cout<<endl;
    }

    void delete1()
    {
        int pos;
        cout<<"enter pos from you want to delete element"<<endl;
cin>>pos;
        for(int i=pos-1;i<s;i++)
        {

            a[i]=a[i+1];
        }



    for(int i=0;i<s+1;i++)
    {

        cout<<a[i];
    }
    cout<<endl;
    }
void lsearch()
{
    int num;
    int flag=0;
    cout<<"enter element you want to find"<<endl;
    cin>>num;
    for(int i=0;i<s;i++)
    {
        if(a[i]==num)
        {
            flag==1;
            cout<<"found at pos"<<i+1<<endl;
            break;
        }
    }
        if(flag==0)
    {

            cout<<"Not found"<<endl;
        }


}


};
int main()
{

    int n;
    cout<<"Enter SIZE OF AN ARRAY"<<endl;
    cin>>n;
    array1 a(n);
    int ch=1;



    while(ch!=0)
    {
         cout<<"Enter 1 to input element"<<endl;
    cout<<"Enter 2 for output"<<endl;
    cout<<"Enter 3 for insert an element"<<endl;
    cout<<"Enter 4 to delete an element"<<endl;
    cout<<"Enter 5 to search am element"<<endl;
cout<<"Enter 0 to stop"<<endl;
cout<<"Enter your choice"<<endl;
        cin>>ch;
    switch(ch)
    {

    case 1:
    a.input();
    break;
    case 2:
a.output();
break;
case 3:
a.insert1();
break;
case 4:
a.delete1();

break;
case 5:
    a.lsearch();
    break;
}
    }
}
