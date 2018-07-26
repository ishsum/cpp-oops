
using namespace std;
#include<iostream>
class Object
{
  protected:
    double r, h;
  public:
     void getdata()
     {
         cin>>r>>h;
     }

};
class Cone:public Object
{
protected:
    float v2;
public:

      void display_area()
      {
          v2=(3.14*r*r*h)/3;
          cout<<v2<<endl;

      }


};

class Cylinder:public Object
{
protected:
    float v1;
    public:

      void display_area()
      {
          v1=(3.14*r*r*h);
          cout<<v1<<endl;

      }
};

int main()
{
  Cone c1;
  Cylinder c2;
  c1.getdata();
  c2.getdata();
  c1.display_area();
  c2.display_area();
  return 0;
}
