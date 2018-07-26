#include<iostream>
#include<vector>
using namespace std;

/*
int main()
{
    int x;
vector<int>v;
vector<int>::iterator it1,it2;

for(int i=0;i<5;i++)
{
    cin>>x;
    v.push_back(x);
}
it1=v.begin();
it2=it1+3;
v.erase(it1,it2);
for(it1=v.begin();it1!=v.end();it1++)
{

    cout<<*it1;
}
return 0;
}


*/
#include<list>
/*
int main()
{

    int n;
    list<int>l;
    list<int>::iterator it;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        l.push_front(n);
    }

    for(it=l.begin();it!=l.end();it++)
    {

        cout<<*it;
    }
    cout<<endl;
    l.pop_front();

    for(it=l.begin();it!=l.end();it++)
    {

        cout<<*it;
    }
return 0;
}

*/
/*
int main()
{

    int n;
    list<int>l1,l2;
    list<int>::iterator it;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        l1.push_front(n);
    }

    for(it=l1.begin();it!=l1.end();it++)
    {

        cout<<*it;
    }
    cout<<endl;

    while(!l1.empty())
    {


        l2.push_front(l1.front());
        //l2.push_back(l1.front());
        l1.pop_front();
    //l1.pop_back();
    }

    for(it=l2.begin();it!=l2.end();it++)
    {

        cout<<*it;
    }
    cout<<endl;

    cout<<l2.size();
return 0;
}
*/

/*
int main()
{

    int n;
    list<int>l1,l2;
    list<int>::iterator it;
    cout<<"enter elements of l1"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        l1.push_back(n);

    }

    cout<<"enter elements for l2"<<endl;

    for(int i=0;i<5;i++)
    {

        cin>>n;
        l2.push_back(n);
    }




l1.reverse();
cout<<"l1="<<endl;
    for(it=l1.begin();it!=l1.end();it++)
    {
cout<<*it;
    }
    cout<<endl;
    l2.sort();

cout<<"l2="<<endl;
    for(it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it;
    }
cout<<endl;
    l1.merge(l2);
l1.sort();
    for(it=l1.begin();it!=l1.end();it++)
    {
cout<<*it;
    }



}
*/
