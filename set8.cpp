#include<iostream>
#include<iomanip>
using namespace std;
class geometricalshape
 {
  public:
   virtual void volume()
   {
     cout<<"base";
    }
 };

class sphere:public geometricalshape
{

protected:
    int r1;
    float v1;
public:
    void getdata()
    {
        cin>>r1;
    }

    void volume()
    {
v1=1.33*(3.14*r1*r1*r1);
cout<<"Volume of sphere is"<<fixed<<setprecision(3)<<v1<<endl;
    }

};

class cone:public geometricalshape
{
protected:
    int r2,h;
float v2;

public:
    void getdata()
    {
        cin>>r2>>h;
    }
    void volume()
    {
v2=0.33*3.14*r2*r2*h;
cout<<"Volume of cine is:"<<fixed<<setprecision(3)<<v2<<endl;
    }


};

class cylinder:public geometricalshape
{
protected:
    int r3,h1;
    float v3;
public:

    void getdata()
    {
cin>>r3>>h1;
    }
    void volume()
    {
v3=3.14*r3*r3*h1;
cout<<"Volume of cylinder is"<<fixed<<setprecision(3)<<v3<<endl;
    }


};

class cube:public geometricalshape
{
protected:
int side;
float v4;
public:

void getdata()
{
    cin>>side;
}
    void volume()
    {
v4=side*side*side;
cout<<"volume of cube is"<<fixed<<setprecision(3)<<v4;

    }


};

int main()
{
int ch;
cin>>ch;
geometricalshape *bptr;
cylinder c;
cone co;
cube u;
sphere s;
switch(ch)
{

case 1:
bptr=&s;

s.getdata();
bptr->volume();
    break;

case 2:

bptr=&c;

c.getdata();
bptr->volume();
    break;
case 3:

bptr=&co;

co.getdata();
bptr->volume();
    break;

case 4:

bptr=&u;
u.getdata();
bptr->volume();
    break;


default:
    cout<<"Invalid choice"<<endl;

}

}
