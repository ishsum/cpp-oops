#include <iostream>
using namespace std;

class student {
protected:
    int roll, m1, m2;

public:
void get();
 };

class extracurriculum {
protected:
    int marks;
public:

void getmarks()
{

    cin>>marks;
}

};
void student::get()
{
    cin>>roll>>m1>>m2;
}
class information:public extracurriculum,public student
{

protected:
int total,avg;
public:

void getsm()
{
    getmarks();
    total=m1+m2+marks;
}
void display()
{
    avg=(m1+m2+marks)/3;
    cout<<"Rollno: "<<roll<<endl;
cout<<"Total: "<<total<<endl;
cout<<"Average: "<<avg<<endl;

}
};
int main()
{
    information i;
    i.get();
    i.getsm();
i.display();
return 0;
}
