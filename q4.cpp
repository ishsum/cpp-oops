#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iostream>
using namespace std;
#include<math.h>

#include<string.h>

class alpha
{
protected:
    int a1;
public:

alpha(int j)
{
    a1=j;
}

void show_alpha()
{
    cout<<"a1= "<<a1<<endl;
}
};

class beta
{
    protected:
    float b1;
    public:

        beta(float i)
        {
            b1=i;
        }
    void show_beta()
    {
        cout<<"b1= "<<b1<<endl;
    }

};

class gamma:public alpha,public beta{

protected:
    int u,v;
public:

    gamma(int a,int b,float c):beta(c),alpha(2*a)
    {
        u=a;
        v=b;

    }
    void show_gamma()
    {
        cout<<" u= "<<u<<endl;
        cout<<" v= "<<v<<endl;
    }

};


int main () {
  int a,b;
  float c;
cin>>a>>b>>c;
  gamma g(a,b,c);
    g.show_alpha();
  g.show_beta();

  g.show_gamma();
  return 0;
}
