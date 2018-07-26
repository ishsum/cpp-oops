#include<iostream>
using namespace std;
template<class t>
void display(t x)
{
    cout<<"value of x="<<x;
}
template<class t1, class t2>
void display(t1 a,t2 b)
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void display(int z)
{
    cout<<"z="<<z;
}
int main()
{
    display(30);
    display(23.2,14.6);
    display(60);
    display(12.3,"ABC");
    display(60.93);

}
