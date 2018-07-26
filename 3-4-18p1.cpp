#include<iostream>
using namespace std;
void f1(int val) throw(int,char)
{
if(val==0)
{
throw 'a';
}
if(val==1)
{
throw 10;
}
}
int main()
{
cout<<"In main function"<<endl;
try
{
f1(1);
}
catch (int)
{
cout<<"int type exception caught"<<endl;
}
catch(char)
{
cout<<"character type exception caught"<<endl;
}
return 0;
}
