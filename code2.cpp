#include<iostream>

#include<stack>

using namespace std;

int main()
{
        int val,n,i;
    stack<int>s1;
    cin>>n;

try{
if(n>5)
    throw 6;
}
catch(int i)
{
    cout<<"Overflow"<<endl;
}

for(i=0;i<5;i++)
{
    cin>>val;
    s1.push(val);
}
{
    for(i=0;i<5;i++)
    {

    cout<<s1.top();
    s1.pop();
    }
s1.pop();
    }
return 0;
}

