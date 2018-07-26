#include<iostream>
using namespace std;
template<class type>
class array
{
    type *a;
    int size;
    public:
    array(int n)
    {
        a=new type[n];
        size=n;
    }
    void read()
    {
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }
    }
    void print();
};
template< class type>
void array<type>::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    array<int>a(5);
    cout<<"enter integer elements";
    a.read();
    cout<<"array elements are:";
    a.print();
    array<char>b(7);
    cout<<"enter character elements:";
    b.read();
    cout<<"array values are:";
    b.print();
}

