#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isEven(int i)
{
return ((i%2)==0);
}
int main()
{
vector<int> v;
int mycount;   //count of even numbers
int n,value;
cin>>n;
for(int i=0;i<n;i++)
{

    cin>>value;
    v.push_back(value);
}
mycount=count_if(v.begin(),v.end(),isEven);
cout<<mycount;
return 0;
}
