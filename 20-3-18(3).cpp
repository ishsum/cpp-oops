#include<iostream>
#define max 5
using namespace std;
template<class type>
type linear_search(type a[])
{
 type search;
 cout<<"enter search:";

cin>>search;
 for(int i=0;i<max;i++)
 {
    if(a[i]==search)
    {
        cout<<"element is present at location:"<<i<<endl;

    }

 }

 return 0;
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
    cout<<"enter elements:";

    read(array1);
    linear_search(array1);
    float array2[max];
    cout<<"\n enter elements:";
    read(array2);
    linear_search(array2);
    char array3[max];
    cout<<"\n enter elements:";
    read(array3);
    linear_search(array3);
    return 0;
}
