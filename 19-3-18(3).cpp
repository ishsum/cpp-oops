#include<iostream>
using namespace std;
template <class t>
t factorial(t num)
{
  if(num==1)
  {
  return 1;
  }
  else
  {

  return num*(factorial(num-1));
  }
}
int main()
{
    int num1;
    cout<<"\n enter number:";
    cin>>num1;
    cout<<"factorial="<<factorial(num1)<<endl;
    long int num2;
    cout<<"enter another number:";

    cout<<"factorial="<<factorial(num2);
}
