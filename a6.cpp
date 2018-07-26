#include<iostream>
using namespace std;
class student
    {
    private:

    int rollno;
    char name[100];
public:
    void get_stu_data();
    void show_stu_data();
   };

   void student::get_stu_data()
   {
       cout<<"enter roll name"<<endl;
cin>>rollno>>name;

   }
   void student::show_stu_data()
   {
cout<<"roll no:"<<rollno<<endl;
cout<<"name"<<name<<endl;

   }

   class academics:virtual public student
   {
protected:
    float marks;
    char grade;

    public:
        void getdata()
        {
            cout<<"enter marks"<<endl;
            cin>>marks;



        }


   };
   class accounts:virtual public student
   {
protected:
    float fees;
    float dues;

public:

    void getdata1()
    {
        cout<<"enter fees and dues"<<endl;
        cin>>fees>>dues;

    }


   };


   class guardian:public academics,public accounts
   {
   public:
       void get()
       {


            if (marks>=90)
            {
                grade ='A';
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

    void show()
    {
cout<<"marks"<<marks<<endl;
cout<<"grade"<<grade<<endl;
cout<<"fees"<<fees<<endl;
cout<<"dues"<<dues<<endl;

    }

   };
//STUDENT CODE HERE
int  main()
    {
student s;
            s.get_stu_data();

    guardian g;
    g.getdata();
    g.getdata1();
    g.get();
    g.show();

}

