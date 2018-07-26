#include<iostream>
using namespace std;
template<class t>
t square(t num)
{
    return(num*num);
}
 int main()
 {
     int num1=2;
     cout<<"square of num1="<<square<int>(num1)<<endl;//orsquare(num1);orsquare<int>(num1);

     cout<<"square of num2="<<square<float>(4.6)<<endl;

     cout<<"square of num3="<<square<double>(4.6329)<<endl;
 }
