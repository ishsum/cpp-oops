
#include<iostream>
#define max 51

using namespace std;


template<class type>
type sum(type a[])
{

    type sum=0;
    for(int i=0;i<max;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
template<class type>
void read(type a[])
{
    for(int i=0;i<max;i++)
    cin>>a[i];
}
int main()
{
    int array1[max];
    cout<<"enter elements";
    read(array1);
    cout<<"sum="<<sum(array1);
    float array2[max];
    cout<<"enter elements";
    read(array2);
cout<<"sum="<<sum(array2);
}
