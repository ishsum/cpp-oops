///ASSOCIIATIVE CONTAINER

///set container
///no duplicacy

#include<iostream>
#include<set>

using namespace std;
/*
int main()
{
    set<int>::iterator it;

    set<int>st;
    st.insert(30);
    st.insert(40);
    st.insert(60);

    st.insert(30);
for(it=st.begin();it!=st.end();it++)
{

    cout<<*it<<endl;
}

}
*/

/*
int main()
{
    set<string>::iterator it,it2;

    set<string>st;
    st.insert("one");
    st.insert("two");
    st.insert("three");

    st.insert("one");
   //st.erase("three");
   //st.clear();
for(it=st.begin();it!=st.end();it++)
{

    cout<<*it<<endl;
}
cout<<endl;
cout<<"size "<<st.size();

it=st.begin();
it2=it+3;

st.erase(it);

for(it=st.begin();it!=st.end();it++)
{

    cout<<*it<<endl;
}
}
*/


#include<algorithm>
/*
int main()
{
int n;
    set<int>st;
    for(int i=0;i<5;i++)
    {
        cin>>n;
    st.insert(n);
    }
int c;
c=count(st.begin(),st.end(),5);
cout<<c<<endl;


}


*/


/*
///multiset
int main()
{
int n;
    multiset<int>m;
    for(int i=0;i<5;i++)
    {
        cin>>n;
    m.insert(n);
    }
int c;
c=count(m.begin(),m.end(),5);
cout<<c<<endl;


}
*/
/*
int main()
{
int n;
set<int>::iterator it;
    set<int,greater<int> >mset;
    for(int i=0;i<5;i++)
    {
        cin>>n;
    mset.insert(n);
    }

    for(it=mset.begin();it!=mset.end();it++)
    {

        cout<<*it;
    }

}
*/



#include<map>

int main()
{
    map<int,int>m;
    map<int,int>::iterator it;
    m.insert(pair<int,int>(2,4));
    m.insert(pair<int,int>(3,9));
    m.insert(pair<int,int>(4,16));


    for(it=m.begin();it!=m.end();it++)
    {
cout<<endl;
        cout<<(*it).first<<endl;
        cout<<"\t";
cout<<(*it).second<<endl;

    }




}
