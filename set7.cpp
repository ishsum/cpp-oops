#include<iostream>
using namespace std;
class employee
{
 char emp_name[20];
 public:
 void read_emp_name()
 {
// cout<<"Enter name of employee";
 cin.ignore();
 cin.getline(emp_name,20);

}
void show()
{
    cout<<"Employee Name="<<emp_name<<endl;
}
virtual void input()=0;
virtual int isunderperformer()=0;
};


class manager:public employee{
protected:
   long int funds;
public:
    void input()
    {
cin>>funds;
    }

    int isunderperformer()
    {
if(funds<1000000)
{

    cout<<"Employee should be terminated"<<endl;
}
else{


    cout<<"Employee is a good performer"<<endl;
}
    }
};
class me:public employee

{
protected:
    int num;
public:
    void input()
    {
cin>>num;
    }

    int isunderperformer()
    {
if(num<20)
{

    cout<<"Employee should be terminated"<<endl;
}
else{


    cout<<"Employee is a good performer"<<endl;
}
    }
};

int main()
{
employee *e;
manager m;
me x;
int ch;
cin>>ch;
switch(ch)
{
case 1:
e=&x;
x.read_emp_name();
e->input();

x.employee::show();
e->isunderperformer();
break;
case 2:
e=&m;
m.read_emp_name();

e->input();
m.employee::show();
e->isunderperformer();
break;
default:
    cout<<"Invalid choice"<<endl;
}



}
