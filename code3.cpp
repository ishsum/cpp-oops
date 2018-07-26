#include<iostream>
#include<algorithm>
#include<list>

using namespace std;


int main()
{
    int n;    //no. of elements
    list<int>l;
    list<int>::iterator t,p;
cin>>n;
int i,val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        l.push_back(val);

    }


    list<int>::reverse_iterator it;

    for(it=l.rbegin();it!=l.rend();it++)
{
    cout<<*it;
}

    for(t=l.begin();t!=l.end();t++)

  cout<<*t;


    cout<<endl;
    for(t=l.begin(); t!=l.end(); t++)
    {
          *t+=*t;
        cout<<*t<<" ";
    }
   cout<<endl;
    t=max_element(l.begin(), l.end());
    p=min_element(l.begin(),l.end());
    cout<<*t <<endl;    //Max_element
cout<<*p;     //Min_element
return 0;
}

