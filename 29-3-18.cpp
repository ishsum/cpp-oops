#include<iostream>
using namespace std;
int main()
{
int num,deno;
cin>>num>>deno;
try{
    if(deno==0)
    {

        throw 20;
    }
    else{
        float result;
        result =num/deno;
        cout<<result;
    }
}
catch(int i)//datatype should match with deno i.e int
{
    cout<<"Exception : division by zero";
}
return 0;
}
