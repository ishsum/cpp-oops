#include<iostream>
using namespace std;
class data
{
    int a,b,c;
public:
    void getdata()
    {
        cin>>a;
    }

    data operator -()
    {
        a--;
    }
    data operator --()
    {
        --a;
    }
    data operator +()
    {

    }
    void print()
    {
        cout<<a;
    }
};
int main()
{
    data o1,o2,o3,o4,o5;
    o1.getdata();
    o1.print();
}
