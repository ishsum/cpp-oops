#include<iostream>
using namespace std;
template<class t>
t swap1(t a,t b)
{
  t temp;
  temp=a;
  a=b;
  b=temp;
  cout<<a<<endl<<b;

}
int main()
{
    int a,b;
    float c,d;
    char e,f;
    cout<<"enter 2 integer value=";
    cin>>a>>b;
    swap1(a,b);
    cout<<"enter 2 float value=";
    cin>>c>>d;
    swap1(c,d);
    cout<<"enter 2 character value=";
    cin>>e>>f;
    swap1(e,f);
}
