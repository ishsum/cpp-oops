#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int rollno;
    char name[20];
    student(char name1[20],int x)
     {
rollno=x;
strcpy(name,name1);
     }

};

class Marks:public student
{
protected:
    int m[3];
public:

 Marks(int *marks,char *name,int rno):student(name,rno)
    {

     for(int i=0;i<3;i++)
     {

         m[i]=marks[i];
     }
    }


    };


class Result:public Marks
{
protected:
    int total=0;
public:
    Result(int rno,char *name,int *marks):Marks(marks,name,rno)
{
for(int i=0;i<3;i++)
{
    total=total+marks[i];
}
cout<<rollno<<endl;
cout<<name<<endl;
cout<<total<<endl;
}

};
     int main() {
    int rno,i;
    char name[20];
    int marks[3];
    cin>>rno;
    cin>>name;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];

    }
    Result r(rno,name,marks);
    return 0;
}

