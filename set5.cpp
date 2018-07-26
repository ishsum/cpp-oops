#include <iostream>
using namespace std;
class Dimensions
{
  protected:
	int l,b,h;
	float c,f;
  public:
    void input()
    {
		cin>>l;
		cin>>b;
		cin>>h;
		cin>>c;//cost of ciel and walls
		cin>>f;//cost of floor per sq m.
    }

};


class Four_walls:virtual public Dimensions
{
    protected:
        int a1;
public:
    void cal3()
    {
        a1=2*h*(l+b);
            }

};
class Ceiling:virtual public Dimensions
{
protected:
    int b1;
public:
    void cal1()
    {
        b1=l*b;
    }

};

class Floor:virtual public Dimensions
{
protected:
    int c1;
public:
    void cal2()
    {
        c1=l*b;
    }

};
class Cost:public Four_walls,public Ceiling,public Floor
{
protected:
    int total;
public:

void total_cost()
{
cal1();
cal2();
cal3();
total=c*(a1+b1)+f*c1;
cout<<total<<endl;
}
};
int main()
{
    Cost c;
    c.input();
    c.total_cost();
    return 0;
}
