#include<iostream>
using namespace std;
int main()
{
int num,deno;
cin>>num>>deno;
try{
    if(deno==0)
    {

        throw deno;
    }
    else if(deno<0)
    {
    throw"negative denominator";
    }
    else{
        float result;
        result =(float)num/deno;
        cout<<result;
    }
}
catch(...)
{
    cout<<"There is problem performing calculation,check input";
}
return 0;
}
