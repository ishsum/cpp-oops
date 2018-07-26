#include<iostream>
using namespace std;
int main()
{
int num,deno;
cin>>num>>deno;
try{
    if(deno==0)
    {

        throw (char*)("division not possible");
    }

    else{
        float result;
        result =(float)num/deno;
        cout<<result;
    }
}
catch(char* msg)
{
    cout<<msg;
}
return 0;
}
