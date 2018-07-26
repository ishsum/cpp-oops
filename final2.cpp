
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main() {
list<int> L;
int n,val;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>val;
    L.push_back(val);
}
list<int>::iterator it,itr;
int a;
cin>>a;//no before which new no adde
it=find(L.begin(),L.end(),a);

int b;
cin>>b;
L.insert(it,b);
for(itr=L.begin();itr!=L.end();itr++)
cout<<*itr<<" ";
return 0;
}
