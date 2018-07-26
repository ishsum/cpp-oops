
#include<iostream>
#include<iomanip>
using namespace std;
class university
{
	protected:
		char uni_name[20];
	public:
		 virtual void clerk()=0;
		 virtual void read()=0;
};

class emp:public university
{

public:

void getdata()
{
    cin>>uni_name;
}

};

class cse:public emp{
protected:
    char name[20];
    float salary;
    int age;
public:
    void read()
    {
getdata();
cin.ignore();
cin.getline(name,20);
cin>>age>>salary;
    }

    void clerk()
    {
cout<<"University:"<<uni_name<<endl;
cout<<"Dept:CSE"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"salary:"<<salary<<endl;

    }
};

class ece:public emp{
protected:
    char name1[20];
    float salary1;
    int age1;
public:
    void read()
    {
        getdata();
cin.ignore();
cin.getline(name1,20);
cin>>age1>>salary1;
    }

    void clerk()
    {
cout<<"University:"<<uni_name<<endl;
cout<<"Dept:ECE"<<endl;
cout<<"Name:"<<name1<<endl;
cout<<"Age:"<<age1<<endl;
cout<<"salary:"<<salary1<<endl;

    }
};

class me:public emp{
protected:
    char name2[20];
    float salary2;
    int age2;
public:
    void read()
    {
getdata();
cin.ignore();
cin.getline(name2,20);
cin>>age2>>salary2;
    }

    void clerk()
    {
cout<<"University:"<<uni_name<<endl;
cout<<"Dept:ME"<<endl;
cout<<"Name:"<<name2<<endl;
cout<<"Age:"<<age2<<endl;
cout<<"salary:"<<salary2<<endl;

    }
};

int main()
{
    university *ptr;
    int ch;
    cin>>ch;
    cin.ignore();
    switch(ch)
    {
       case 1: {
         cse c;
         ptr=&c;
         ptr->read();
         ptr->clerk();
         break;
}
        case 2:{
ece e;
ptr=&e;
         ptr->read();
    	  ptr->clerk();
        break;
}
        case 3: {
me m;
 	      ptr=&m;
         ptr->read();
         ptr->clerk();
         break;
}
        default:
        cout<<"INVALID CHOICE";
    }

      return 0;
}

