#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
map<int,string> m;
map<int,string> :: iterator i;
int n,a;
char str[20];
cin>>n;
for(int i1=0;i1<n;i1++)
{
   cin>>str;
m.insert(pair<int,string>(i1,str));
}
cin>>a;
i=m.find(a);
cout<<(*i).second;
return 0;
}


