#include<iostream>
using namespace std;
#include<math.h>

#include<string.h>
//DIFFERENCE BETWEEN POINTER AND REFRENCE
/*
struct A
{

    int a;
};

int main()
{
int *p;
int x=5;
int y=6;
A d;
p=&x;
p=&y;
int &r=x;
//&r=y;
x=y;
p=NULL;
//&r=NULL;
p++;
r++;
cout<<&p<<" "<<endl<<&r<<endl;//address of p
cout<<&r<<" "<<endl<<&x;//address of r

A *q=&d;
A &b=d;
q->a=8;
//q.a=8;
b.a=8;
//b->8;
cout<<p<<endl;
cout<<r<<endl;
cout<<b.a<<endl;
cout<<q->a<<endl;

return 0;
}
*/

//gretest of two num----------------------------------------------------------------------------------------------------------------
/*

int &great(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b,res;
    cout<<"enter values of a and b"<<endl;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    res=great(a,b);
    cout<<res<<endl;
    great(a,b)= -1;
    cout<<a<<" "<<b;
return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------

// swaping of two variables using
/*
class swap2{
           int a,b;
       public:

        void getdata()
        {
            cin>>a;
            cin>>b;

        }
           void displaydata()
           {

               cout<<a;
               cout<<b;
           }

           void swap1()
           {

               int temp;

               temp=a;
               a=b;
               b=temp;
           }


           };


           int main()
           {

            swap2 s;
            s.getdata();
            s.swap1();
            s.displaydata();
            return 0;
           }
           */
//------------------------------------------------------------------------------------------------------------------------------


//swap using call by value
/*


class swap2
{
    int a,b;

public:
void swap1(int a,int b)
{    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap"<<endl<<a<<endl<<b<<endl;

}
void display(int a,int b)
{
    cout<<"before"<<endl<<a<<endl;
    cout<<b;
}};
int main()
{  swap2 s;
  s.swap1(2,3);
s.display(2,3);
    return 0;
    }

*/

//swap using call by refrence

/*
class swap2
{
    int a,b;

public:
void swap1(int &a,int &b)
 {    int temp;
    temp=a;
    a=b;
    b=temp;

}
void display(int a,int b)
{
    cout<<"after"<<endl<<a<<endl;
    cout<<b;
}};
int main()
{  swap2 s;
int a,b;
cin>>a>>b;
  s.swap1(a,b);
s.display(a,b);
    return 0;
    }

*/

//call by address
/*
class swap2
{int a,b;
public:
void swap1(int*a,int*b)
{    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int *a,int *b)
{   cout<<endl<<*a<<endl;
    cout<<*b;
}};
int main()
{
     swap2 s;
int a,b;
cin>>a>>b;
s.swap1(&a,&b);
s.display(&a,&b);
    return 0;
    }

*/


//call by refrence
/*


           int& great(int &a,int &b)
           {
             int res;

             res=a>b?a:b;

return res;
           }



int main()
{

int a,b,res;
cin>>a>>b;
res=great(a,b);
cout<<res;
 return 0;


}
*/

//function overloading
/*
 int area(int r);//circle
    int area(int a,int b);//rectangke
    int area(int s);//square

int main()
{
    float r;
    int a,b,s;
 int res,res1,res2;


 res=area(2);
 cout<<res<<endl;

 res1=area(1,3);
 cout<<res1<<endl;
 res2=area(3);
 cout<<res2<<endl;

}
    int area(float r)
    {

        int area;
        area=3.14*r*r;
return area;
    }


    int area(int a,int b)
    {

        int area;
        area=a*b;
        return area;

    }

    int area(int s)
    {

        int area;
        area=s*s;
        return area;
    }

*/



//swapping using call by value (call swap in put data)
/*

class swap1
{

    int a,b;
public:

    int swap2(int a,int b);
    void getdata()

    {

        cin>>a>>b;



    }

    void display()
    {

        swap2(a,b);


    }

};

int swap1::swap2(int a,int b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;
        cout<<a<<b;

}

int main()
{
    swap1 s;
    s.getdata();
    s.display();
    return 0;

}
*/

/*
//decimal to binary

class convert
{
    int a;

public:
void convert1(int a)

{            int rem,b=0,i=0;
    while(a>0)
    {

    rem=a%2;

    b=b+rem*pow(10,i);
     a=a/2;
i++;
    }

cout<<b;
}

};


int main()
{
convert s;
s.convert1(2);

return 0;
}

*/

//factorial of number

/*
class fact
{
    int a;
public:

    void fact1(int a)
    {

        int f=1;
        while(a>1)
        {

        f=f*a;
        a=a-1;
        }
cout<<f;

    }


} ;

int main()
{
    fact s;

    s.fact1(5);

    return 0;

}
*/


//palidrome no.


/*
class pal
{
    int a;

public:

    void pali(int a)
    {
       int temp=a;
        int rem,sum=0;
        while(a>0)
        {

        rem=a%10;
        sum=sum*10+rem;
        a=a/10;

    }
if(sum==temp)
{
    cout<<"yes";

}
else
    cout<<"no";
    }




};


int main()
{
    int a;
   pal s;
   cin>>a;
    s.pali(a);
    return 0;
}
*/


//fibonacci number
/*
class fib
{

    int a;

public:

    void fib1(int a,int b,int n)
    {
        if(n==1)

        {
                       cout<<"0";
        }
else
{
            cout<<a<<b;

        int c=a+b;

        cout<<c;

        while(c<n)
        {
            a=b;
            b=c;

            c=a+b;
            cout<<c;

        }

}
    }


};


int main()
{

fib s;
int n;
cin>>n;
s.fib1(0,1,n);
return 0;
}


*/
//even odd

/*
class odd
{
    int a;

public:

    void even(int a)
    {
        if(a%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }



};


int main()
{
    int a;
odd s;
cin>>a;
s.even(a);
}
*/


//prime
/*
class prime
{
    int a;

    public:

    void prime1(int a)
    {
        int i;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }

        if(i==a)
            cout<<"prime";

    }

};


int main()
{
    int a;
    prime s;
    cin>>a;
    s.prime1(a);
    return 0;
}
*/
/*

//calculator

class calci
{
    int a;

public:

    void calci1(int a,int x,int y)
    {
int c;
        switch(a)
        {
    case 1:
c=x+y;
cout<<c;
break;
    case 2:
        c=x-y;
        cout<<c;
break;
    case 3:
        c=x*y;
        cout<<c;
    break;

    case 4:
        c=x/y;
        cout<<c;
        break;

        }

    }


};


int main()
{
    int a,x,y;
    calci s;
    cout<<"choose 1 for addition";
    cout<<"choose 2 for subtraction";
    cout<<"choose 3 for multiplication";
    cout<<"choose 4 for division";

    cin>>a;
cin>>x;
cin>>y;
    s.calci1(a,x,y);



    return 0;

}
*/
//Bank account

/*
class bank
{

string name;
int accno;
string type;
int bal;

public:

    void value()
{

    cin>>name>>accno>>type>>bal;
}

void deposit()
{
    int temp;
cout<<"enter depositted amount"<<endl;
    cin>>temp;
    bal=bal+temp;

}

void with()
{
 int with;
 cout<<"enter withdrawl amont"<<endl;
 cin>>with;
 bal=bal-with;

}

void display()
{

    cout<<name<<" "<<bal;
}

};

int main()
{
    bank s;
    s.value();
    s.deposit();
    s.with();
    s.display();
return 0;
}


*/
//lenght of string
/*


class lenght
{
    int a;

public:


    void len(string name)
    {
        int i,c=0;
       for(i=0;name[i]!='\0';i++)
        {
                    c++;
    }
cout<<c;
    }


};

int main()
{

    string name;
    lenght s;
    cin>>name;
    s.len(name);
    return 0;




}

*/



//lenght of string
/*
int main()
{
    string name;
    cin>>name;
    cout<<name.size();
    return 0;



}
*/




//passing oject as an argument to function

/*
class time{

int hrs,mins,sec;

public:


    void getdata()
    {

        cin>>hrs>>mins>>sec;



    }

    void display()
    {
cout<<hrs<<endl<<mins<<endl<<sec;



    }
    void sum(time t1,time t2)
    {

        hrs=t1.hrs+t2.hrs;
        mins=t1.mins+t2.mins;
        sec=t1.sec+t2.sec;

if(mins>60)
{
    hrs=hrs+1;
    mins=mins-60;

}

if(sec>60)
{
    mins=mins+1;
    sec=sec-60;

}
    }


};


int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t3.display();
return 0;
}
*/


//adding complex numbers by passing an object(by value and address)
/*
class comp{

int real,imag;
public:

    void getdata()
    {
        cin>>real>>imag;


    }

    void sum(comp c1,comp *c2)

{
    real=c1.real+c2->real;
    imag=c1.imag+c2->imag;


}


void putdata()
{

    cout<<real<<"+"<<"i"<<imag;
}

};


int main()
{
    comp c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,&c2);
    c3.putdata();

    return 0;


}

*/


//by refrence


/*
class comp{

int real,imag;
public:

    void getdata()
    {
        cin>>real>>imag;


    }

    void sum(comp &c1,comp &c2)

{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;


}


void putdata()
{

    cout<<real<<"+"<<"i"<<imag;
}

};


int main()
{
    comp c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c3.putdata();

    return 0;


}
*/


//return object from function
/*
class complex{

int real,imag;
public:

    void getdata()
    {
        cin>>real>>imag;


    }

    complex sum(complex c2)

{
    complex temp;
    temp.real=real+c2.real;
    temp.imag=imag+c2.imag;
return temp;
}


void putdata()
{

    cout<<real<<"+"<<"i"<<imag;
}

};


int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.sum(c2);
    c3.putdata();

    return 0;
}

*/

/*
class add
{

    int hrs,mins,sec;

public:


    void get()
    {

        cin>>hrs>>mins>>sec;
    }

    add sum(add c2)
    {
       add temp;
        temp.hrs=hrs+c2.hrs;
        temp.mins=mins+c2.mins;
        temp.sec=sec+c2.sec;
        return temp;
    }


    void put()
    {

        cout<<hrs<<" "<<mins<<" "<<sec;
    }
};


int main()
{

    add c1,c2,c3;

    c1.get();
    c2.get();
    c3=c1.sum(c2);
    c3.put();
    return 0;


}
*/

//add,mul,div,sub

/*
class cal
{

    int real,imag;

public:

    void get()
    {
        cin>>real>>imag;

    }

    void add(cal c1,cal c2)
    {

real=c1.real+c2.real;
imag=c1.imag+c2.imag;
cout<<real<<"+i"<<imag<<endl;
    }


    void sub(cal c1,cal c2)
    {

        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;

    cout<<real<<"+i"<<imag<<endl;

    }


    void mul(cal c1,cal c2)
    {

        real=c1.real*c2.real;
        imag=c1.imag*c2.imag;
          cout<<real<<"+i"<<imag<<endl;
    }

    void div(cal c1,cal c2)
{
  real=(c1.real)/(c2.real);
        imag=(c1.imag)/(c2.imag);
          cout<<real<<"+i"<<imag<<endl;


}
};


int main()
{

    cal c1,c2,c3,c4,c5,c6;
    c1.get();
    c2.get();
    c3.add(c1,c2);
    c6.sub(c1,c2);
    c4.mul(c1,c2);
    c5.div(c1,c2);


    return 0;

}



*/

//friend function




//deafualt argument constructor

/*
class stud
{

    int roll;
    int marks;

public:

    stud()
    {

        roll=0;
        marks=0;

    }


    stud(int r,int m=0)
    {
        roll=r;
        marks=m;

    }

    void display();
};


void stud::display()
{

    cout<<roll<<" ";
    cout<<marks<<endl;
}
int main()


{

    stud s1;
    s1.display();
    stud s2(30);
    s2.display();
    stud s3(30,50);
    s3.display();
    return 0;



}


*/

//constructor overloading with an array
/*
class rectangle
{
    int lenght;
    int breadth;
public:
    rectangle()
    {

        lenght=0;
        breadth=0;
    }
    rectangle(int l,int b)
    {
        lenght=l;
        breadth=b;


    }



    rectangle(int l)
    {
        lenght=l;
        breadth=l;


    }

    void display()
    {
        cout<<"area="<<(lenght*breadth)<<endl;;

    }



};


int main()
{
    int i;
    rectangle r[4]={rectangle(),rectangle(5,6),rectangle(5)};

    for(i=0;i<4;i++)
    {

        r[i].display();
    }

}

*/

/*
class sample
{
    int a;

public:

    sample(int i)
    {
        a=i;

        cout<<"constructor is invoked";

    }

    ~sample()
    {

        cout<<"destruction is invoked"<<endl;
    }
};

int main()
{
    sample s1(10);
    sample s2(20);
    sample s3(40);

    return 0;

}
*/


//operatorn overloading(uniary)
/*
class marks
{
    int intmarks;
    int exmarks;
public:
    marks()
    {
        intmarks=0;
        exmarks=0;

    }

    marks(int in,int ex)
    {
        intmarks=in;
        exmarks=ex;

    }

    marks operator+(marks m)
    {
        marks temp;
        temp.intmarks=intmarks+m.intmarks;
        temp.exmarks=exmarks+m.exmarks;
        return temp;
    }

    void display()
    {

        cout<<intmarks<<endl<<exmarks;
    }

};
int main()
{
    marks m1(20,30),m2(40,50),m3;

m3=m1+m2;

m3.display();



}
*/

//string compare
/*
class string1
{
    char str[40];

public:

    string1()
{

    strcpy(str," ");



}

string1(char s[])
{

    strcpy(str,s);
}

void read()
{

    cin>>str;

}

void display()
{


    cout<<str;
}

    int operator<(string1 s)
    {

        if(strcmp(str,s.str)<0)
            return 1;
        else
            return 0;
    }
};


int main()
{

    string1 s1("efg");
    string1 s2;
    s2.read();
    if(s1<s2)
        cout<<"s1 is less than s2";
    else
        cout<<"not equal";

}
*/



//compare strings alpabattically
/*
class string1
{
    char str[40];

public:

    string1()
{

    strcpy(str," ");



}

string1(char s[])
{

    strcpy(str,s);
}

void read()
{

    cin>>str;

}

void display()
{


    cout<<str;
}

    int operator<(string1 s)
    {

        if(str<s.str)
            return 0;
        else
            return 1;
    }
};


int main()
{

    string1 s1("efg");
    string1 s2;
    cout<<"enter s2";
    s2.read();
    if(s1<s2)
        cout<<"s1 is less than s2";
    else
        cout<<"s2 is less than s1";

}

*/


//constant members

/*
class emp
{
    const int id;

public:

    emp(int i):id(i)
    {


    }
    void display()
    {

        cout<<id;
    }


};


int main()
{

    emp a(5);
    a.display();
    return 0;
}
*/
//constant data members
/*
class constant
{
    int a;

public:

    void show() const
    {
        a++;

    }

    void display()
    {
        cout<<a;
    }

};


int main()
{

    constant s2;
    s2.show();
    s2.display();
    return 0;

}
*/
/*

class constant
{
    int a;

public:

    constant()
    {
        a=0;

    }

    void show() const
    {
       // a++;

    }

    void display() const
    {
        cout<<a;
    }

};


int main()
{

    const constant s2;
    s2.show();
    s2.display();
    return 0;

}
*/


//type casting
/*

class string1
{
    char str[40];

public:

    string1()
{

    strcpy(str," ");



}

string1(char s1[])
{

strcpy(str,s1);
}

void display()
{


    cout<<str;
}

};


int main()
{

    char s1[50];
    cin>>s1;
    string1 s2;

    s2=s1;
    s2.display();

}
*/
//type casting
/*
class dist
{
    int km,m;

    public:


        dist()
        {
            km=0;
            m=0;

        }
        dist(int d)
        {
            km=d/1000;
            m=d%1000;

        }

        void display()
{

    cout<<km<<" "<<m<<endl;
}

operator int()
{
    int t=km*1000+m;
    return t;

}
operator float()
{
   float t=(float)km+(float)m/1000;
    return t;

}
};


int main()
{
    dist d;
    int met;
    cout<<"enter met";
    cin>>met;

    d=met;
    d.display();
    met=d;
    cout<<met<<endl;

    float k=d;
    cout<<k<<endl;
    return 0;
}




*/

//array with dyanamic memory allocation
/*
int i;
class arr
{
    int *a;
    int n;
    public:

        arr(int num)
        {
n=num;
int i;
a=new int[10];
    for(i=0;i<n;i++)
    {

    cin>>a[i];
    }
        }

        void displaydata()
        {


    for(i=0;i<n;i++)
    {

    cout<<a[i]<<" ";
    }
    delete[]a;
        }

};

int main()
{
int num;
cin>>num;
    arr s(num);
    s.displaydata();
    return 0;

}
*/


//pointer to function

//pointer to function
/*
int(*ptr)(int,int);
int add(int,int);

int main()
{

    int a=5,b=10,c;

    ptr=add;

    c=ptr(a,b);
    cout<<c;
}

int add(int a,int b)
{

    return(a+b);
}
*/


//pointer to object
/*
class rectangle
{

    int lenght;
    int breadth;

public:

    void getdata(int l,int b)

    {

        lenght=l;
        breadth=b;
    }

    void display()
    {

        cout<<lenght<<" "<<breadth<<endl;

        cout<<(lenght*breadth);
    }

};

int main()
{

    rectangle r,*ptr;

    ptr=&r;
    ptr->getdata(20,40);
    (*ptr).display();
    return 0;
}

*/



//dyanamic memory allocation
/*
class rectangle
{

    int lenght;
    int breadth;

public:

    void getdata(int l,int b)

    {

        lenght=l;
        breadth=b;
    }

    void display()
    {

        cout<<lenght<<" "<<breadth<<endl;

        cout<<(lenght*breadth);
    }

};

int main()
{

    rectangle r;
    rectangle *ptr=new rectangle;
    ptr->getdata(20,40);
    (*ptr).display();
    return 0;
}

*/

/*
class test
{
    public:
    int a;


public:

    void display();
};

void test::display()
{
    cout<<a<<endl;
}

int main()
{
    test t,*tp;

    int test::*ptr=&test::a;
    t.*ptr=40;
    t.display();
    tp=&t;
    tp->*ptr=30;
    tp->display();
}
*/

//pointer to member function of a class
/*
class test
{

public:
    int a;
    test()
    {
        cin>>a;
    }
    void display()
    {

        cout<<a;
    }
};

int main()
{

    void(test::*fptr)(void);
    fptr=&test::display;
    test t;
    (t.*fptr)();
    return 0;
}
*/


/*
class add
{

int a,b;
public:


 void getdata()
 {
     a=30;
     b=20;
 }
 friend int sum(class add);

};

int sum(add t)
{
int c;
c=t.a+t.b;
return c;
}

int main()
{
void(add::*fptr)(void);
fptr=&add::getdata;
add t;
(t.*fptr)();
cout<<sum(t);
return 0;
}

*/


//tyoe casting

/*
class time
{

    int hr,m;

public:
    time()
    {
        hr=0;
        m=0;

    }
    time(int t)

    {
        hr=t/60;
        m=t%60;

    }
    void getdata()
    {
        cin>>hr>>m;

    }

    void display()
    {

        cout<<hr<<" "<<m;
    }

    operator int()
    {

        int t;
        t=hr*60+m;
        return t;
    }

};


int main()

{

    time t1;
    int minutes;
    cout<<"enter minutes";
    cin>>minutes;
    t1=minutes;
    t1.display();
    cout<<"enter hour and minutes";
    t1.getdata();
    minutes=t1;
    cout<<"minutes"<<minutes;
return 0;
}
*/

/*
class square;//source class

class rectangle
{
    int lenght,breadth;

    public:

    rectangle()
    {

        lenght=0;
        breadth=0;
    }


    rectangle(int l,int b)
    {

        lenght=l;
        breadth=b;
    }


};

class square
{
    int side;

    public:

        square()
        {

            side=0;
        }

        square(int s)
        {

            side=s;
        }

};

int main()
{
    rectangle r(10,20);

    square s(10);

    r=s;
    return 0;
}
*/

/*

class square;//source class

class rectangle
{
    int lenght,breadth;

    public:

    rectangle()
    {

        lenght=0;
        breadth=0;
    }


    rectangle(int l,int b)
    {

        lenght=l;
        breadth=b;
    }

void show()
{

    cout<<lenght<<" "<<breadth;
}

};

class square
{
    int side;

    public:

        square(int s)
        {

            side=s;
        }
       operator rectangle()
    {
     rectangle r(side,side);
    return r;
    }

};

int main()
{
    rectangle r(10,20);
    square s(10);
    r=s;
r.show();
    return 0;
}

*/


/*problem

class square;//source class

class rectangle
{
    int lenght,breadth;

    public:

    rectangle()
    {

        lenght=0;
        breadth=0;
    }


    rectangle(int l,int b)
    {

        lenght=l;
        breadth=b;
    }
    operator square()
    {

        square s(lenght,breadth);
        return s;
    }
 void show()
{

    cout<<lenght<<" "<<breadth;
}

};

class square
{
    int side;

    public:

        square(int s)
        {

            side=s;
        }


};

int main()
{
    rectangle r(30,20);
    square s(10);
    s=r;
r.show();
    return 0;
}
*/

/*
class rectangle
{

    int l;
    int b;

public:
rectangle()
{

    l=0;
    b=0;
}
    void setdata(int l,int b)
    {
        this->l=l;
        this->b=b;
    cout<<"address of calling object is:  "<<this<<endl;

    }
    void display()
    {

        cout<<l<<" "<<b<<endl;
        cout<<"address of calling object is:  "<<this<<endl;
    }

    void area()
    {
        cout<<"area is:"<<this->l*this->b;

    }
};

int main()
{

    rectangle r;
    r.setdata(10,15);
    r.display();
    r.area();
    return 0;
}
*/
/*
class city
{

public:
    char *name;
    int lenght;
    city()
    {

        lenght=0;
        name=new char[lenght+1];

    }

    void getname()
    {

        char *s;
        s=new char[30];
        cout<<"enter city";
        cin>>s;
        lenght=strlen(s);
        name=new char[lenght+1];
        strcpy(name,s);
    }
    void printname()
    {

        cout<<name;
    }
};

int main()
{

    city cptr[10];
    int n=1;
    int option;
    do
    {

        cptr[n]=new city;
        cptr[n]->getname();
        n++;
        cout<<"do you want to enter name of more cities?";
        cin>>option;
    }

    while(option)
    {
        for(i=0;i<n;i++)
        {

            cptr[i]->printname();
        }
    }

}
*/


/*
class person
{
    char name[20];
    float age;
    public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age=a;
    }
    person & greater(person &y)
    {

        if(y.age>=age)
            return y;
        else
            return *this;
    }
void display()
{


    cout<<name<<" "<<age<<endl;
}


};

int main()
{
    person p1("john",37.50);
    person p2("amit",47.6);
    person p3("ajay",39.5);
person p=p1.greater(p3);
p.display();
p=p1.greater(p2);
p.display();


    return 0;
}
*/

/*

int main()
{

    void *ptr;
    cout<<sizeof(ptr);
    return 0;
}
*/



/*
int main()
{
    char c='F';
    int i=21;
    void *p;
    char *q=&c;
    int *r=&i;

    p=r;
    cout<<(int *)p<<" ";
     p=q;
    cout<<*(char *)p<<" ";
i=2018;
p=r;
    cout<<*(int *)p;
    return 0;
}


*/
///////////////////////////important///////////////////////////////**********************///////////////IMPORTANT////////////////////
/*
class array1
{
    int **a;
    int rows,columns;

public:
array1()
{
    rows=0;
    columns=0;

}
array1(int r,int c)
{

    rows=r;
    columns=c;

     a=new int*[rows];
    for(int i=0;i<rows;i++)
{
    a[i]=new int [columns];

}

}
void getdata()
{

    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<columns;j++)
        {

            cin>>a[i][j];
        }
    }
}

array1 operator+(array1 &a2)
{
    array1 a3(rows,columns);
    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<columns;j++)
        {
            a3.a[i][j]=a[i][j]+a2.a[i][j];

        }
    }
    return a3;
}

array1 operator-(array1 &a2)
{

    array1 a3(rows,columns);
    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<columns;j++)
        {
            a3.a[i][j]=a[i][j]-a2.a[i][j];

        }
    }
    return a3;
}
void show()
{
    for(int i=0;i<rows;i++)
    {
cout<<endl;
        for(int j=0;j<columns;j++)
        {

            cout<<a[i][j]<<" ";
        }
    }

}
};

int main()
{

    int r,c;
    cin>>r>>c;
    array1 a1(r,c),a2(r,c),a3;
    a1.getdata();
    a2.getdata();
    a3=a1+a2;
    a3.show();
    a3=a1-a2;
    a3.show();
    return 0;
}



*/

///...........................................Inheritance


/*
class base{
private:
int a;
public:
    int b;
    void getdata();
    int get_a();
    void show();

};


    void base::getdata()
    {
        cout<<"enter a and b";

        cin>>a>>b;
    }

    int base::get_a()
    {

        return a;
    }

    void base::show()
    {

        cout<<"a="<<a;
    }

    class derived:public base
{
    private:
int c;

public:
    void display();
    void multiply();

};

    void derived::multiply()
    {

        c=b*get_a();
    }

    void derived::display()
    {

        show();
        cout<<"b="<<b;
        cout<<"c="<<c;
    }

    int main()
    {

        derived d;

        d.getdata();
        d.multiply();
        d.show();
        d.display();

        return 0;
    }

*/
///MULTIPLE INHERITANCE
/*
class M
{

protected:
    int m;
public:
    void get_m(int);
};

class N
{

protected:
    int n;
public:
    void get_n(int);
};

class P:public M,public N
{
public:
    void display();


};


void M::get_m(int a)
{

    m=a;
}

void N::get_n(int b)
{

    n=b;
}

void P::display()
{

    cout<<"m="<<m<<endl;
    cout<<"n="<<n<<endl;
    cout<<"m*n= "<<m*n;
}


int main()
{
    P p;
    p.get_m(30);
    p.get_n(40);
    p.display();
    return 0;
}

*/

/*
class B1
{

public:

    void show()
    {

        cout<<"In base class B1"<<endl;
    }
};

class B2
{

public:

    void show()
    {

        cout<<"In base class B2"<<endl;
    }
};

class D:public B1,public B2
{

    public:
        void display()

        {
 B1::show();
        B2::show();
            cout<<"In derived class D";
        }


};

int main()
{

    D d;
    d.B1::show();
    d.B2::show();

    d.display();
    return 0;
}
*/

/*
class B1
{


public:

    void display()
    {

    cout<<"In Base class";
    }
};

class D:public B1
{

public:
    void display()
    {

    cout<<"In derived"<<endl;
    }
};

int main()
{

    D d;
    d.display();
    d.D::display();
    d.B1::display();
    return 0;
}


*/


//multilevel Inheritance
/*
class student
{

protected:
    int roll;

public:
    void getno(int);
    void putno();

};

void student::getno(int a)
{
   roll=a;

}

void student::putno()
{

    cout<<"roll no"<<roll<<endl;
}

class test:public student{
protected:

    float sub1,sub2;
public:
    void getmarks(float x,float y)
    {

        sub1=x;
        sub2=y;
    }

void putdata()
{

    cout<<"sub1"<<sub1<<endl;
    cout<<"sub2"<<sub2<<endl;

}

};


class result:public test{
float total;
public:
    void display()
    {
        total=sub1+sub2;
        putno();
        putdata();
        cout<<"total="<<total<<endl;
    cout<<roll;
    }

};

int main()

{

    result r;
    r.getno(20);
    r.getmarks(40.6,60.6);
    r.display();
    return 0;

}

*/
/*

class student{
protected:

    int roll;

public:
    void getroll(int a)
    {
        roll=a;

    }

void putroll()
{

    cout<<roll<<endl;
}
};


class test:public student{

protected:

    float sub1,sub2;
public:

    void getmarks(float x,float y)
    {

        sub1=x;
        sub2=y;
    }
void putmarks()
{

    cout<<"sub1="<<sub1<<endl;
    cout<<"sub2="<<sub2<<endl;
}
};

class sports
{

protected:
    float score;
public:
    void getscore(float s)
    {
        score=s;

    }
    void putscore()
    {

        cout<<"sports weightage is"<<score<<endl;
    }

};

class result:public test,public sports
{

    float total;
public:
    void display()
    {

        total=sub1+sub2+score;
        putroll();
    putmarks();
    putscore();
    cout<<"total="<<total<<endl;
}
};

int main()
{
    result r;
    r.getroll(20);
    r.getmarks(40.5,60.5);
    r.getscore(6.8);
    r.display();


}


*/


/*
class base
{

public:

    base()
    {
        cout<<"in base class constructor"<<endl;
    }
    ~base()
    {

        cout<<"in base class destructor"<<endl;
    }
};

class derived:public base{

public:
    derived()
    {

        cout<<"in derived class constructor"<<endl;
    }
~derived()
{

    cout<<"in derived class destructor"<<endl;
}
};

int main()
{
    derived d;

    return 0;

}
*/






///MULTIPLE

/*
class base2
{

public:

    base2()
    {
        cout<<"in base2 class constructor"<<endl;
    }
    ~base2()
    {

        cout<<"in base2 class destructor"<<endl;
    }
};

class base1
{

public:

    base1()
    {
        cout<<"in base1 class constructor"<<endl;
    }
    ~base1()
    {

        cout<<"in base1 class destructor"<<endl;
    }
};


class derived:public base2,public base1{

public:
    derived()
    {

        cout<<"in derived class constructor"<<endl;
    }
~derived()
{

    cout<<"in derived class destructor"<<endl;
}
};

int main()
{
    derived d;

    return 0;

}
*/


///MULTILEVEL
/*



class base1
{

public:

    base1()
    {
        cout<<"in base1 class constructor"<<endl;
    }
    ~base1()
    {

        cout<<"in base1 class destructor"<<endl;
    }
};
class base2:public base1
{

public:

    base2()
    {
        cout<<"in base2 class constructor"<<endl;
    }
    ~base2()
    {

        cout<<"in base2 class destructor"<<endl;
    }
};


class derived:public base2{

public:
    derived()
    {

        cout<<"in derived class constructor"<<endl;
    }
~derived()
{

    cout<<"in derived class destructor"<<endl;
}
};

int main()
{
    derived d;

    return 0;

}


*/

/*


///HEIRARICHAL


class base2
{

public:

    base2()
    {
        cout<<"in base2 class constructor"<<endl;
    }
    ~base2()
    {

        cout<<"in base2 class destructor"<<endl;
    }
};

class derived1:public base2{

public:

     derived1()
    {
        cout<<"in derived1 class constructor"<<endl;
    }
    ~derived1()
    {

        cout<<"in derived1 class destructor"<<endl;
    }


};



class derived2:public base2{

public:

     derived2()
    {
        cout<<"in derived2 class constructor"<<endl;
    }
    ~derived2()
    {

        cout<<"in derived2 class destructor"<<endl;
    }


};


class derived3:public base2{

public:

     derived3()
    {
        cout<<"in derived3 class constructor"<<endl;
    }
    ~derived3()
    {

        cout<<"in derived3 class destructor"<<endl;
    }


};


int main()
{
    derived2 d;

    return 0;

}
*/


///PARAMETRIZED CONSTRUCTOR IN SINGLE INHERITANCE
/*
class base
{

protected:

    int a;

public:
    base(int i)
    {

        a=i;
        cout<<"base class constructor"<<endl;
    }

    void show()
    {

        cout<<"a="<<a<<endl;
    }
};

class derived:public base
{
protected:
    float b;
public:
    derived(int x,float y):base(x)
    {

        b=y;
        cout<<"derived class constructor"<<endl;
    }
    void show()
    {

        cout<<"b="<<b<<endl;
    }
};

int main()
{
    derived d(5,30.5);
    d.derived::show();
    d.base::show();
    return 0;
}
*/

///PARAMETRIZED CONSTRUCTOR IN MULTIPLE INHERITANCE
/*
    class base1
    {
    protected:
        int a;
    public:
        base1(int i)
        {
            a=i;
            cout<<"base class initialized"<<endl;

        }
        void show()
        {
            cout<<"a="<<a<<endl;

        }
    };

    class base2
    {
    protected:
        float b;
    public:
        base2(float j)
        {

            b=j;
        }
        void show()
        {

            cout<<"b="<<b<<endl;
        }
    };

    class derived:public base2,public base1
    {
protected:
    int m,n;
    public:

    derived(float x,int y,int w,int z):base2(x),base1(y)
    {

    m=w;
    n=z;
    }
    void show()
    {

        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;

    }

    };

    int main()
    {
        derived d(90.5,10,30,40);

        d.base1::show();
        d.base2::show();
        d.derived::show();
        return 0;

    }
*/
///virtual class base
/*
class A
{
public:

    int a;

};

class B:virtual public A
{

public:
    int b;
};

class C:virtual public A
{

public:
    int c;
};

class D:public B,public C
{

public:
    int e;
};

int main()
{

    D d;
    d.a=10;
    d.b=20;
    d.c=30;
    d.e=40;
    cout<<d.a<<d.b<<d.c<<d.e;
}

*/
/*
class base
{

public:
   virtual void show()
    {

        cout<<"base class is called";

    }
};


class derived:public base
{
public:

    void show()
    {

    cout<<"derived class is called"<<endl;
    }
};

int main()
{

    base *bptr,b;

    derived d;
    bptr=&d;

    bptr->show();


    return 0;
}

*/


///VIRTUAL MEMBER FUNCTION

/*class geometricshape
{
    public:

        virtual void show()
        {

            cout<<"in base class"<<endl;
        }


};


class rectangle:public  geometricshape
{
public:
    int a,b;

    void show()
    {
        cin>>a>>b;
        int area;
        area=a*b;
        cout<<"area of rectangle is "<<area<<endl;

    }

} ;



class triangle:public  geometricshape
{
    public:
    int b,h;
    void show()
    {
cin>>b>>h;
        int area;
        area=.5*b*h;
        cout<<"area of trianle is"<<area;
    }

} ;

int main()
{
geometricshape *rptr,g;
rptr=&g;
rptr->show();
rectangle r;
rptr=&r;

rptr->show();
triangle t;
rptr=&t;
rptr->show();
return 0;
}
*/
///PURE VIRTUAL FUNCTION
/*
class geometricshape
{
    public:

        virtual void show()=0;

};


class rectangle:public  geometricshape
{
public:
    int a,b;

    void show()
    {
        cin>>a>>b;
        int area;
        area=a*b;
        cout<<"area of rectangle is "<<area<<endl;

    }

} ;



class triangle:public  geometricshape
{
    public:
    int b,h;
    void show()
    {
cin>>b>>h;
        int area;
        area=.5*b*h;
        cout<<"area of trianle is"<<area;
    }

} ;

int main()
{
geometricshape *rptr;

rectangle r;
rptr=&r;

rptr->show();
triangle t;
rptr=&t;
rptr->show();
return 0;
}







///DYANAMICALLY MEMORY ALLOCATION TO DERIVED
/*
class base
{

public:
    base()
    {

        cout<<"in base class constructor"<<endl;
    }
    virtual ~base()
    {
        cout<<"in base class destructor"<<endl;

    }
};

class derived:public base{
public:

    derived()
    {

        cout<<"in derived class constructor"<<endl;
    }
~derived()
{

    cout<<"in derived class destructor"<<endl;
}


};

int main()
{
    base *ptr=new derived();
    delete ptr;
    return 0;

}
*/

#include<stdio.h>
#include<iomanip>
/*
class person
{
    protected:
    char name[30];
    long int phn;
    public:

    void read()
    {
        cout<<"in person class enter name and phn no";
cin.ignore();
        cin.getline(name,30);

        cin>>phn;
    }

    void show()
    {
        cout<<name<<endl;
        cout<<phn<<endl;

    }
};


class student:virtual public person
{
    protected:
    int roll;
    int age;
    public:

        void read()
        {
cout<<"in student class enter roll and age";
        cin>>roll>>age;
        }

        void show()
        {
            cout<<name<<endl<<age<<endl<<roll;

        }
};

class teacher:virtual public person
{

protected:

    char dept[20];
    char qual[200];
public:

    void read()
    {
        cout<<"in teacher class enter dept and qual"<<endl;
cin.ignore();
cout<<"enter dept"<<endl;
        cin.getline(dept,20);
cout<<"enter qual"<<endl;
        cin.getline(qual,200);
 fflush(stdin);
    }

    void show()
    {

        cout<<dept<<endl<<qual<<endl;
    }
};


class result:public student,public teacher
{
    protected:
    float marks1,marks2;
public:

    void read()

    {
cout<<"in class result enter marks of two subjects"<<endl;
        cin>>marks1>>marks2;
    }
    void show()
    {

        cout<<marks1<<endl<<marks2<<endl;
    }

};


int main()

{
    result d;
    d.person::read();
    d.person::show();
    d.student::read();
    d.student::show();
    d.teacher::read();
    d.teacher::show();
    d.result::read();
    d.result::show();
    return 0;
}
*/

/*

class fruit
{
 public:

     virtual void show()=0;

     void show1()
     {

         cout<<"Fruits are good for health. Eat fruits on daily basis"<<endl;
     }


};

class apple:public fruit
{

    void show()
     {

         cout<<"an apple a day keeps the doctor away"<<endl;
     }
};

class mango:public fruit
{

    void show()
     {

         cout<<"iron man eats a mango daily"<<endl;
     }
};

class orange:public fruit{

  void show()
     {

         cout<<"an orange is a color or fruit?"<<endl;
     }

};

int main()
{
    fruit *bptr;
fruit *f;
f->show1();

    apple a;

    bptr=&a;

    bptr->show();

    mango m;
    bptr=&m;

    bptr->show();

    orange o;
    bptr=&o;

    bptr->show();
    return 0;

}
*/


///virtual functions/polymorphisom
/*
#include<iomanip>
class student
{
protected:
    int roll;
    char name[20];
    char course[20];

public:
    void read()
    {
        cout<<"enetr roll no name and course";

        cin>>roll;
        cout<<"enter name"<<endl;
        cin.ignore();
        cin.getline(name,20);
        cout<<"enter course"<<endl;

        cin.getline(course,20);

    }

    void show()
    {

        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<course<<endl;

    }

};


class employee{

protected:
    int emp_code;
    float sal;

public:

    void read()
    {
        cout<<"enter emp code and sal"<<endl;
        cin>>emp_code;
        cin>>sal;
    }

    void show()
    {

        cout<<emp_code<<endl;
        cout<<sal<<endl;
    }
};

class pts:public student,public employee
{
protected:
    int hours_worked;
    public:

    void read()
    {

    cout<<"enter hours worked"<<endl;
        cin>>hours_worked;
    }

    void show()
    {

    cout<<sal<<endl;
        cout<<"sal is"<<fixed<<setprecision(3)<<sal*hours_worked<<endl;
    }

};


int main()
{

pts d;

d.student::read();
d.student::show();

d.employee::read();
d.employee::show();

d.read();
d.show();

return 0;
}
*/
/*
class base
{

    public:
        virtual void show()=0;
};



 class triangle:public base{

 protected:
     int h,b;
 public:

void show()
{
    float area;
    cout<<"enter values of h and b"<<endl;
    cin>>h>>b;
    cout<<"area of triangle is" <<fixed<<setprecision(4)<<.5*h*b;
}

 };

 class rectangle:public base
 {
 protected:
    int l,b;
   public:

       void show()
       {
           cout<<"enter l and b of rectangle"<<endl;
           cin>>l>>b;
           cout<<"area of rec is"<<l*b;
       }

 };


 int main()
 {

     base *bptr;
     rectangle r;
     triangle t;
     int ch;
     cout<<"enter 1 to find area of triangle"<<endl;
     cout<<"enter 2 to find area of rectangle"<<endl;
     cin>>ch;
     switch(ch)
     {
     case 1:
        bptr=&t;

        bptr->show();
         break;

     case 2:
        bptr=&r;

        bptr->show();
        break;

        default:cout<<"invalid choice.enter 1 or 2"<<endl;

     }

     return 0;
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ;;

*/



/*
class base
{

    public:
        virtual void show()=0;
};



 class triangle:public base{

 protected:
     int h,b;
 public:

void show()
{
    float area;
    cout<<"enter values of h and b"<<endl;
    cin>>h>>b;
    cout<<"area of triangle is" <<fixed<<setprecision(4)<<.5*h*b;
}

 };

 class rectangle:public base
 {
 protected:
    int l,b;
   public:

       void show()
       {
           cout<<"enter l and b of rectangle"<<endl;
           cin>>l>>b;
           cout<<"area of rec is"<<l*b;
       }

 };


 int main()
 {

     base *bptr[2];
     rectangle r;
     triangle t;
     int ch;
        bptr[0]=&t;

        bptr[0]->show();
         bptr[1]=&r;

        bptr[1]->show();


     return 0;
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ;;
*/
///TEMPLATE FUNCTIONS
/*
template<class type>

type square(type num)
{

    return (num*num);
}


int main()
{

    int num1=2;

    cout<<"square of num1 is"<<square(num1)<<endl;
    float num2=4.5;

    cout<<"square of num2 is"<<square(num2)<<endl;
    double num3=4.668;
    cout<<"sqaure of num3 is"<<square(num3);
}

*/

/*
template<class T>

T fact(T num)
{

    if(num==1)
    {

        return 1;
    }
    else
    {

        return num*(fact(num-1));
}
}


int main()
{

    int num;
    cin>>num;
    cout<<"fact is"<<fact(num);

    return 0;

}
*/
/*

template<class a,class b>

a greatest(a p,b q)
{

    if(p>q)
    {

        return p;
    }
    else{
        return q5;
    }
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    cout<<"greatest num is"<<greatest(num1,num2);
    return 0;
}
*/

///logic prob
/*

template<class a,class b,class c>

a greatest(a p,b q,c r)
{

if(p>q)
{


        return p;

}

else if(p>r)
{

    return p;
}
else if(q>r){

                return r;

}

else if(q>p)
{

    return q;
}
else
    return r;
}

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    cout<<"greatest num is"<<greatest(num1,num2,num3);
    return 0;
}
*/
/*

template<class type>

class array1
{

    type *a;
    int s;
    public:
    array1(int n)
    {
        a=new type[n];
        s=n;

    }
    void read()
    {
        for(int i=0;i<s;i++)
        {

            cin>>a[i];
        }
    }
    void print();
    void add(array1);
    void sub(array1);
};

template<class type>
void array1<type>::print()
{
    for(int i=0;i<s;i++)
    {

        cout<<a[i];
    }
}

template<class type>
type array1::add(array1 b)
{
    type sum[s];
    for(int i=0;i<s;i++)
    {
        sum[i]=a[i]+b.a[i];

    }
        for(int i=0;i<s;i++)
    {

        cout<<sum[i]<<" ";
    }
    cout<<endl;

    return type;
}


template<class type>
void array1<type>::sub(array1 b)
{

     type diff[s];
    for(int i=0;i<s;i++)
    {
        diff[i]=a[i]-b.a[i];

    }
        for(int i=0;i<s;i++)
    {

        cout<<diff[i]<<" ";
    }
    cout<<endl;

}

int main()
{

    array1<int>a(5);
    cout<<"enter integer elements";
    a.read();
    array1<int>b(5);
    cout<<"enter elements of array 2";
    b.read();
   a.add(b);
   a.print();
   a.sub(b);
    return 0;
}



*/
/*
template<class one,class two>

void swap1(one a,two b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<b;
}

int main()
{
swap1(3,4);
}

*/
/*

template<class type1,class type2,class type3=float>

class employee
{

    type1 empid;
    type2 name;
    type3 salary;

public:
    void setdata(type1 eid,type2 n,type3 s)
    {

        empid=eid;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<empid<<" "<<name<<" "<<salary;

    }
};

int main()
{

    int id;
    float salary;
    employee<int,char *>e;

     char name[20];
     cin>>id>>salary>>name;
    e.setdata(id,name,salary);
    e.display();
}
*/



/*
template<class type>


type sum(type a[5])
{
    type sum=0;

    for(int i=0;i<5;i++)
    {

    sum=sum+a[i];
    }

    return sum;

}

template<class type>
type read(type a[5])
{

    for(int i=0;i<5;i++)
    {

        cin>>a[i];
    }
}
int main()
{


    int array1[5];
    read(array1);
    cout<<sum(array1);

}
*/
/*
struct student
{


    int roll;
    char name[20];
    float marks;

};

template<class type1,class type2,class type3>
void show(type1 roll,type2 name,type3 marks)
{

    cout<<roll<<endl;
    cout<<name<<endl;
    cout<<marks;
}
template<class type1>
void display(type1 &s)
{

    cout<<s.roll<<endl;
    cout<<s.name<<endl;
    cout<<s.marks;
}

int main()
{

    student s;
    int roll;
    float marks;
    char name[20];
    cin>>roll>>name>>marks;
    show(roll,name,marks);
    cin>>s.roll>>s.name>>s.marks;

    display(s);



}
*/


/*

template<class type>

class array1
{

    type *a;

public:

    array1()
    {

        a=new type[5];


    }

    void read(type a[s])
    {
        for(int i=0;i<s;i++)
        {

            cin>>a[i];
        }

    }

    void show(type a[s])
    {
        for(int i=0;i<s;i++)
        {

            cout<<a[i];
        }

    }



};

int main()
{
    array1<int>a(5);

    cout<<"enter elements of an array";

    cin>>read(array1);

    cout<<show(array1);


}
*/

/*

class student
{
    public:
    int roll;
    char name[20];

public:

     student()
    {
        cout<<"enter roll and name"<<endl;

        cin>>roll>>name;
    }
};
template<class type>
class marks1:public student
{
public:

 type marks[5];
 //no of subjects

 public:

     marks1()
     {
         //cout<<"enter no of subjects"<<endl;
         //cin>>s;

         cout<<"enter marks"<<endl;
         for(int i=0;i<5;i++)
         {
                      cin>>marks[i];
         }

 for(int i=0;i<5;i++)
         {
                      cout<<marks[i];
         }
     }
void sum()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
sum=sum+marks[i];
    }

}
};
int main()
{
//student s1;
marks1<float>m;
m.sum();
return 0;
}
*/


///mutiple inheritance
/*

class student
{
    int roll;

public:

    void getno();
    void display();


};


void student::getno()
{

    cin>>roll;
}

void student::display()
{

    cout<<roll<<endl;
}

class test:public student

{
    protected:
float sub1,sub2;

public:

    void getmarks();




};


void test::getmarks()
{
    cin>>sub1>>sub2;

}

class result:public test{

float total;

 public:

    void display()
    {
        total=sub1+sub2;
cout<<total;

    }

};


int main()
{


    result d;

    d.getno();
    d.getmarks();
    d.student::display();
    d.display();
    return 0;
}
*/


///HEIRARICHAL INHERITANCE

/*
class student
{
    protected:
    int roll;
    char name[20];

    public:

        void getstudentdetails()
        {
            cout<<"enter roll and name"<<endl;
            cin>>roll;
            cin.ignore();
            cin.getline(name,20);

        }


};

class academics:public student
{
protected:

    float marks;
    char grade[20];
public:
    void getadetails()
    {
        getstudentdetails();
        cout<<"enter grade and marks"<<endl;
        cin>>marks;
        cin.ignore();
        cin.getline(grade,20);
    }

    void show()
    {

        cout<<"name of student "<<name<<endl;
        cout<<"roll of student "<<roll<<endl;
        cout<<"marks of student "<<marks<<endl;
        cout<<"grade of student "<<grade<<endl;
    }

};

class accounts:public student
{
protected:
    int fee;
    char due[20];

    public:

    void getdetails()
    {
        getstudentdetails();

        cout<<"enter fee and if any dues"<<endl;
         cin>>fee;
        cin.ignore();
        cin.getline(due,20);

    }

    void display()
    {

        cout<<"name of student "<<name<<endl;
        cout<<"roll no of student "<<roll<<endl;
        cout<<"fees of student "<<fee<<endl;
        cout<<"dues yes or n! "<<due<<endl;
    }
};


int main()
{
    accounts s;
s.getdetails();
    s.display();

    academics a;

a.getadetails();
    a.show();

    return 0;
}
*/

/*
///HYBRID INERITANCE

class student
{
protected:

    int roll;

public:
    void get_roll(int a)
    {

        roll=a;
    }

void putno()
{

    cout<<"roll is "<<roll<<endl;
}


};

class test:public student{

protected:
    float sub1,sub2;
public:
    void get_marks(float x,float y)
    {
        sub1=x;
        sub2=y;

    }

    void displaymarks()
    {
        cout<<"sub1 -"<<sub1<<endl;
        cout<<"sub2 -"<<sub2<<endl;

    }

};

class sports
{

protected:
    int score;
public:
    void get_score(int s)
    {
        score=s;
    }
    void displayscore()
    {

        cout<<"score is"<<score<<endl;
    }
};
class result:public sports,public test
{
protected:

    float total;
public:

    void display()
    {

        total=sub1+sub2;
putno();
displayscore();
displaymarks();

        cout<<"total marks"<<total<<endl;
    }

};
int main()
{

    result r;

    r.get_roll(50);

    r.get_marks(500.55,60.55);
    r.get_score(60);

    r.display();


}
*/



///PARAMETRIZED CONSTRUCTOR IN SINGLE INHIRITANCE

/*
class base
{

    int a;

public:
    base(int x)
    {

        a=x;
    }

    void show()
    {

        cout<<a<<endl;
    }
};


class derived:public base
{
    int b;

public:
    derived(int i,int y):base(i)
    {

        b=y;
    }

    void show()
    {

        cout<<b;
    }


};

int main()
{
    derived d(2,3);
    d.base::show();
    d.derived::show();
    return 0;
}
*/

///parametrized constructor in multiple inheritance
/*
 class base1
 {

     int a;

 public:

    base1(int x)
    {
        a=x;

    }

    void show()
    {

        cout<<"a="<<a<<endl;
    }
 };

 class base2
 {

     int b;
 public:

    base2(int y)
    {

        b=y;
    }
    void show()
    {

        cout<<"b="<<b<<endl;
    }
 };

 class derived:public base1,public base2{

 float c;

 public:

     derived(int m,int n,float s):base1(m),base2(n)
     {

         c=s;
     }
 void show()
 {

     cout<<"c="<<c;
 }
 };
int main()
{

    derived d(2,3,4.5);
    d.base1::show();
    d.base2::show();
    d.derived::show();
}
*/

///VIRTUAL DESTRUCTOR

/*
class base
{

public:
    base()
    {

        cout<<"base class constructor"<<endl;
    }
     virtual~base()
    {
        cout<<"base destructor"<<endl;
    }
};

class derived:public base{
public:

    derived()
    {
        cout<<"derived constructor"<<endl;
    }
    ~derived()
    {

        cout<<"derived destructor"<<endl;
    }


};

int main()

{

    base *bptr=new derived;
    delete bptr;
}
*/


///EXCEPTION HANDLING
/*

int main()
{
    int num,deno;
cin>>num>>deno;
try
{

if(deno==0)
{
    throw deno;
}
else
    {
    float result;
    result=(float)num/deno;
    cout<<result;
}
}
catch(int i)
{
    cout<<"Exception:division by zero";
}
return 0;
}
*/




/*
int main()
{
    int n;
cin>>n;
try
{

if(n>655359)
{
    throw n;
}
else if(n<0)
    {
        throw 'n';
}
else{

    float sqr;
    sqr=sqrt(n);
    cout<<sqr;
}
}
catch(int i)
{
    cout<<"Throw integer value";
}
catch(char i)
{
    cout<<"enter positive value";
}
return 0;
}
*/



