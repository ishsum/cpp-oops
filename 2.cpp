
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main() {
list<int> L;
int n,val,a,b;
cin>>n;
list<int>::iterator itr;
for(int i=0;i<n;i++)
{
    cin>>val;
    L.push_back(val);
}
cout<<"enter a and b"<<endl;
cin>>a;///before this no
cin>>b;///no to be inserted

    for(itr=L.begin();itr!=L.end();itr++)
    {

    if(*itr==a)
    {
        L.insert(itr,b);
    }
    }



for(itr=L.begin();itr!=L.end();itr++)
cout<<*itr<<"";
return 0;
}
