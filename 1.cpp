#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
int size1,value;
cin>>size1;
vector<int>v;
vector<int>:: iterator i,m,n;
vector<int>::reverse_iterator it;
for(int i=0;i<size1;i++)
{
    cin>>value;
    v.push_back(value);
}

for(it=v.rbegin();it!=v.rend();it++)
{

    cout<<*it;
}
cout<<endl;

m=max_element(v.begin(),v.end());
n=min_element(v.begin(),v.end());
cout<<*m<<endl<<*n;  //Maximum and Minimum element
return 0;
}
