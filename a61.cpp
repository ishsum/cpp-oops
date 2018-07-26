#include<iostream>
using namespace std;
class figure
    {
    public:
    float radius, height,vol;
    virtual void volume()=0;
};
//STUDENT COD HERE

class cone:public figure{
protected:
    int R,H;
public:
void input()
{
cin>>R>>H;

}

void volume()
{

float v1;
v1=(3.14*R*R*H)/3;
cout<<v1;

}
};

class cylinder:public figure
{
    protected:
        int r,h;
public:

void input()
{
cin>>r>>h;
}
void volume()
{
    float v;
    v=3.14*r*r*h;
cout<<v;

}
};
int main() {
   cone ob1;
    ob1.input();
    ob1.volume();
    cylinder ob2;
    ob2.input();
    ob2.volume();
    return 0;
}

