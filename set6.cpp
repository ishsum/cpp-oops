
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	protected:
	char name[20];
	int age;
	char sex;

	public:
        person(char *n,int a,char s)
        {
            strcpy(name,n);
            age=a;
            sex=s;
        }
};
class student:public person
{
protected:
    int rollno;
    char course[20];
public:
student(char *n,int a,char s,int r,char *c):person(n,a,s)
{
rollno=r;
strcpy(course,c);

}

void show_s_data()
{

    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Sex:"<<sex<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Course:"<<course<<endl;
}

};
class faculty:public person
{
protected:
    char des1[20];
    char dept[20];
public:
faculty(char *n,int a,char s,char *des,char *dpt):person(n,a,s)
{
strcpy(des1,des);
strcpy(dept,dpt);

}
};

class publications:public faculty
{
protected:
    int num;//no of reserach
    int book;//no of books pub

public:
publications(char *n,int a,char s,char *des,char *dpt,int rp,int books):faculty(n,a,s,des,dpt)
{

num=rp;
book=books;

}

void show_pub_data()
{
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Sex:"<<sex<<endl;
cout<<"Designation:"<<des1<<endl;
cout<<"Department:"<<dept<<endl;
cout<<"Research papers:"<<num<<endl;
cout<<"Books:"<<book<<endl;

}
};

int main()
{
	int choice;
	cin>>choice;
	if(choice==1)
	{
		char n[20],s,c[20];
		int a,r;
		cin.ignore();
		cin.getline(n,20);//name of student
		cin>>a;//age
		cin>>s;//sex
		cin>>r;//roll
		cin>>c;//course
		student stu(n,a,s,r,c);
		stu.show_s_data();
	}
	else if(choice==2)
	{
		char n[20],s,des[20],dpt[20];
		int a,rp,books;
		cin.ignore();
		cin.getline(n,20);
		cin>>a;
		cin>>s;
		cin>>des;
		cin>>dpt;
		cin>>rp>>books;
		publications p(n,a,s,des,dpt,rp,books);
		p.show_pub_data();
	}
	return 0;
}
