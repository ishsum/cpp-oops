
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void showlist(list<int> &l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;

    it=max_element(l.begin(),l.end());
    cout<<*it;
    cout<<endl;
    it=min_element(l.begin(),l.end());
cout<<*it;
}

//Write your code here

int main() {
int n;    //no. of elements
list<int> l;
list<int>st;
cin>>n;
int num;
for(int i=0; i<n; i++)
    {
cin>>num;
l.push_back(num);
    }
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        num=(*it)*2;

        st.push_back(num);

    }

    copy(st.begin(),st.end(),l.begin());
showlist(l);
return 0;
}
