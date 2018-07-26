
#include <iostream>

 using namespace std;
class employee
{
protected:
int id;
char name[20];
char des[20];
public:
void get_emp_data();
void show_emp_data();
};
void employee::get_emp_data()
{

cout<<"enter id"<<endl;
    cin>>id;

    cout<<"enter name"<<endl;
    cin.ignore();
    cin.getline(name,20);
    cout<<"enter des"<<endl;
    cin.ignore();
    cin.getline(des,20);

}
void employee::show_emp_data()
{
    cout<<"Employee Id"<<id<<endl;
    cout<<"Employee name"<<name<<endl;
    cout<<"designation of employee"<<des<<endl;
}
class contract:public employee
{
    protected:
        int hr;//no of working hrs
        int w;//wages per hour
        public:

 void get_cont_data()
 {
     get_emp_data();

     cin>>hr>>w;


 }

    float salary;

 void show_cont_data()
{
salary=hr*w;
show_emp_data();
cout<<salary<<endl;
}

};
///basic pay, HRA, TA and calculate its DA (10% of the basic salary), and displays the calculated salary(sum of basic,HRA,TA,DA).
class permanent:public employee
{
protected:
    int pay;
    int hra;
    int ta;


public:
int da;
 void get_per_data()
{
cin>>pay>>hra>>ta;
}

void show_per_data()
{


}


};

//STUDENT CODE HERE
int main()
{
contract c;
c.get_cont_data();
permanent p;
p.get_per_data();
c.show_cont_data();
p.show_per_data();
return 0;
}
