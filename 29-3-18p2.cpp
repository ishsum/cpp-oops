#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,c;
char a;
cin>>n;
try{
    if(n>655359)
    {

        throw 20;
    }
    else if(n<0)
    {

        throw 'a';
        }
        else
        {
        c= sqrt(n);
        cout<<c;
        }


}
catch(int i)//datatype should match with deno i.e int
{
    cout<<"n is greater than 655359";
}
catch(char j)//datatype should match with deno i.e int
{
    cout<<"n is less than 0";
}
return 0;
}
