#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isEven(int i)
{
return ((i%2)==0);
}
int main()
{
    int  val,n;
    cin>>n;
vector<int> v;
int mycount;   //count of even numbers
for (int i=0; i<n; i++)
    cin>>val;
    v.push_back(val); // myvector: 1 2 3 4 5 6 7 8 9

mycount=count_if(v.begin(),v.end(),isEven);

cout<<mycount;
return 0;
}
