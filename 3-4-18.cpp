#include<iostream>
using namespace std;
void function1()
{
try
{
throw 10;
}
catch (int i)
{
cout<<"Inside Function"<<endl;
throw;//rethrowing an exception
}
}
int main()
{
cout<<"In main function"<<endl;
try
{
function1();
}
catch(int i)
{
cout<<"Return exception caught in main function"<<endl;
}
return 0;
}


