#include<iostream>
using namespace std;
int main()
{
int num,deno;
cin>>num>>deno;
try{
    if(deno==0)
    {

        throw (float)20.7;
    }
    else{
        float result;
        result =num/deno;
        cout<<result;
    }
}
catch(float i)//datatype should match with deno i.e int
{
    cout<<"Exception : division by zero";
}
return 0;
}
