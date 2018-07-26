#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class student
{
protected:
int rollno;
char stu_name[30];
char course[15];
public:
student(int rno,char *n,char *c)
{
    rollno=rno;
    strcpy(stu_name,n);
    strcpy(course,c);
}

student()
{

    cout<<"In base class constructor"<<endl;
}

~student()
{

    cout<<"In base class destructor"<<endl;
}

};

class marks:public student
{
protected:
    int sub1,sub2,sub3;

public:
marks()
{

    cout<<"In marks class constructor"<<endl;
}

~marks()
{

    cout<<"In marks class destructor"<<endl;
}
marks(int,char*,char*,int,int,int);

};

marks::marks(int roll,char *n,char *c,int marks1,int marks2,int marks3):student(roll,n,c)

{
sub1=marks1;
sub2=marks2;
sub3=marks3;

}
class result:public marks

{

protected:
float total;
float percent;
char *div;
public:
    result(int roll,char *n,char *c,int marks1,int marks2,int marks3):marks(roll,n,c,marks1,marks2,marks3)
{


marks *ptr=new result;
}
result()
{

    cout<<"In derived class constructor"<<endl;
}
~result()
{
    cout<<"In derived class destructor"<<endl;
}

void display()
{
    total=sub1+sub2+sub3;
    percent=(total/300)*100;

if(percent>=60)
{

    div="FIRST";
}
else if(percent>=50)
{

    div="SECOND";
}
else
{
    div="THIRD";
}
    cout<<"Rollno="<<rollno<<endl;
      cout<<"Name="<<stu_name<<endl;
    cout<<"Total marks="<<total<<endl;
    cout<<"Percentage="<<fixed<<setprecision(2)<<percent<<endl;
    cout<<"Division="<<div<<endl;
}
};
int main()
{
    int rollno,marks1,marks2,marks3;
    char name[30],course[30];
    cin>>rollno;
    cin.ignore();
    cin.getline(name,30);
    cin.getline(course,30);
    cin>>marks1>>marks2>>marks3;
    result r(rollno,name,course,marks1,marks2,marks3);
    r.display();
    return 0;
}






