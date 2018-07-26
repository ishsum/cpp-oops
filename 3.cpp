#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main()
{
deque<int>deq;
deque<int>::reverse_iterator it;
deque<int>::iterator i;

int n,val;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>val;
    deq.push_back(val);
}

for(it=deq.rbegin();it!=deq.rend();it++)
{

cout<<*it;
}

cout<<endl;
deq.pop_back();
for(int i=deq.size()-1;i>=0;i--)
{

cout<<deq[i]<<" ";
}
return 0;
}

