#include<iostream>
using namespace std;
struct student
{
    int rollno;
    float marks;
    char name[10];
};
template<class type1 ,class type2,class type3>
void display(type1 rollno,type2 marks,type3 name)//definition(simple display function)
{
    cout<<"rollo="<<rollno<<endl;

    cout<<"marks="<<marks<<endl;
    cout<<"name="<<name<<endl;

}
template<class type1>
void display(type1 &s)//definition(display func of structure
{
    cout<<"rollno="<<s.rollno<<endl;
    cout<<"marks="<<s.marks<<endl;
    cout<<"name="<<s.name<<endl;
}
int main()
{
    int rollno;
    float marks;
    char name[10];

    cout<<"enter rollno"<<endl;
    cin>>rollno;
    cout<<"enter marks"<<endl;
    cin>>marks;
    cout<<"enter name"<<endl;
   cin>>name;

    display(rollno,marks,name);
    student s;
    cout<<"enter rollno"<<endl;
     cin>>s.rollno;
        cout<<"enter marks"<<endl;
        cin>>s.marks;
        cout<<"enter name"<<endl;
     cin>>s.name;

    display(s);


}
