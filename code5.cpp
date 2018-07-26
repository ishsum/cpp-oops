#include<iostream>
#include<algorithm>
#include<list>

using namespace std;


int main()
    {
    int n,num;//Number of Eleements
    cin>>n;
    list<int>l1;
    std::list<int>::iterator it;
    for(int i=0;i<n;i++)
        {
        cin>>num;
        l1.push_back(num);
    }
    int k=2;
    while(!l1.empty())
        {

        cout<<l1.front()<<endl;
        l1.pop_front();
       l1.reverse();
    }



    }
