
#include <iostream>

using namespace std;
class emp
{
   protected:
     int eno;
     char name[20],des[20];
   public:
     void get();
};

void emp::get()

{
    cout<<"enter eno,name and des"<<endl;
    cin>>eno;
    cin.ignore();
    cin.getline(name,20);

    cin.getline(des,20);

}

class salary:protected emp
{
protected:
    float gross,salary,HRA,DA;

public:
void get1()
{
    get();
    cout<<"enter salary hra percent and da percent"<<endl;
cin>>salary>>HRA>>DA;

}

void calculate()
{
HRA=(HRA*salary)/100;
DA=(DA*salary)/100;
gross=salary+HRA+DA;
}

void display()
{
cout<<eno<<endl;
cout<<name<<endl;

cout<<gross<<endl;

}
};

//STUDENT CODE HERE

int main()
{
    int i,n;
    char ch;
    salary s[10];

    cin>>n;//maximum 10 employees
    for(i=0;i<n;i++)
    {         s[i].get1();
              s[i].calculate();
    }
    for(i=0;i<n;i++)
    {        s[i].display();}
    return 0;
}


