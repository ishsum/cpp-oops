
#include <iostream>
using namespace std;
class cement
{
    protected:
    int a;//no of bag
    int b;//cost of each bag
    public:
        cement(int n,int cc)
        {
            a=n;
            b=cc;
        }
cement();
};

cement::cement()
{
cout<<"In cement class"<<endl;

}
class steel
{
protected:
    int c;//tons of steel
    int d;//cost of steel
public:
    steel(int ts,int cs)
    {
        c=ts;
        d=cs;
    }
steel();
};
steel::steel()
{
    cout<<"In steel class"<<endl;

}
class wood
{
    protected:
    int e;//cubic feet of wood

    int f;//cost of wood
public:
    wood(int f1,int c1)
    {
        e=f1;
        f=c1;
    }

    wood();
};

wood::wood()
{

    cout<<"In wood class"<<endl;
}
class house:public cement,public steel,public wood{

public:

house();
   house(int n,int cc,int ts,int cs,int f1,int c1):cement(n,cc),steel(ts,cs),wood(f1,c1)
{
cout<<"Derived class constructor"<<endl;

    cout<<"cost of cement="<<a*b<<" rupees"<<endl;
    cout<<"cost of steel="<<c*d<<" rupees"<<endl;
    cout<<"cost of wood="<<e*f<<" rupees"<<endl;

}
};
house::house()
{
    cout<<"Derived class constructor"<<endl;
}



int main()
{
int no_of_bags,cost_cement, tons_of_steel,cost_steel,cubicfeet_of_wood,wood_cost;
cin>>no_of_bags>>cost_cement>>tons_of_steel>>cost_steel>>cubicfeet_of_wood>>wood_cost;
house h(no_of_bags,cost_cement, tons_of_steel,cost_steel,cubicfeet_of_wood,wood_cost);
return 0;
}
