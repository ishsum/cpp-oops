#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
stack<int> s;

int n,val;
cin>>n;
for(int i=0;i<n;i++)
{

    cin>>val;
    s.push(val);
}

for(int i=0;i<n;i++)
{
    cout<<s.top();
    s.pop();
}
return 0;
}
