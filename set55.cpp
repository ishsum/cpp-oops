#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
    char name1[20];
    int age1;
    public:
        person(char *name,int age)
        {
strcpy(name1,name);
age1=age;
        }


};

class Batsman:public person
{
protected:
int o,h,r;
float a,s;
public:
Batsman(char *name,int age,int odi,int half,int run,float avg,float strike):person(name,age)
{
o=odi;
h=half;
r=run;
a=avg;
s=strike;

}

void show()
{
    cout<<"Name:"<<name1<<endl;
    cout<<"Age:"<<age1<<endl;
    cout<<"ODI Played:"<<o<<endl;
    cout<<"Half centuries made:"<<h<<endl;
    cout<<"Run made:"<<r<<endl;
    cout<<"Batting average:"<<a<<endl;
    cout<<"Strike Rate:"<<s<<endl;
}

};

int main()
{
char name[20];
int age;
int run,odi,half;
float avg,strike;
cin.getline(name,20);
cin>>age;
cin>>odi;
cin>>half;
cin>>run;
cin>>avg;
cin>>strike;
Batsman b(name,age,odi,half,run,avg,strike);
b.show();
return 0;
}
