#include<iostream>
using namespace std;
void checkno(int i) throw(int)
{
if(i==0)
{
throw i;
}
else if(i==-1)
{
throw (float)i;
}
else
    {
    throw (char)i;
}
}
int main()
{
int n;
cout<<"In main function"<<endl;
cin>>n;
try
{
checkno(n);
}
catch (int)
{
cout<<"int type exception caught"<<endl;
}
catch(char)
{
cout<<"character type exception caught"<<endl;
}

catch(float )
{
cout<<"float type exception caught"<<endl;
}
return 0;
}
