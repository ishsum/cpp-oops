#include<iostream>
#include<algorithm>
#include<list>

using namespace std;



int main()
{


int n;
list<int>li1,li2,li3;

list<int>::iterator it;

for(int i=0;i<4;i++)
{
    cin>>n;
    li1.push_back(n);
}
for(int i=0;i<4;i++)
{
    cin>>n;
    li2.push_back(n);
}
if(li2.empty())
{

    cout<<"LIST2 IS EMPTY"<<endl;

for(int i=0;i<li1.size();i++)
{

    cout<<li1[i];
}


}
else
{

li1.sort();
li2.sort();

li1.merge(li2);

for(it=li1.begin();it!=li1.end();it++)
{

    cout<<"hello"<<*it;
}


}
}
