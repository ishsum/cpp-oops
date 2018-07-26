#include <iostream>
using namespace std;
class student
{
public:
int rollno;
char *name;
};
class academics:virtual public student
{
protected:
    int marks;
    char grade;
public:

void getdata()
{
cin>>rollno;
name=new char[20];
cin.ignore();
cin.getline(name,20);
cin>>marks;

    	if (marks>=90)
        {
            grade='A';
        }
	else if (marks>=75 && marks<90)
    {
        grade='B';
    }
	else if (marks>=60 && marks<75)
    {

    grade='C';
    }
	else if (marks>=45 && marks<60)
    {
        grade='D';
    }
	else
    {
        grade='F';
    }
}

};

class accounts:virtual public student
{
    protected:
    int fees;
    int dues;
    public:
void get1()
{

cin>>fees>>dues;



}


};
class Information:public academics,public accounts
{
protected:

    public:
void get()
{
getdata();
}
void account()
{
    get1();
}
void info()
{

cout<<name<<endl;
cout<<rollno<<endl;
cout<<marks<<endl;
cout<<grade<<endl;
cout<<dues<<endl;
}

};
int main()
{
Information i;
i.get();
i.account();
i.info();
return 0;
}
