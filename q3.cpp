#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iostream>
using namespace std;
#include<math.h>

#include<string.h>


class bill
{
    protected:
    int item_code[30];
    float price[30];
    float total=0;

    public:

        void getinfo(int n)
        {
            cout<<"enter item codes and its prices"<<endl;
            for(int i=0;i<n;i++)
            {

            cin>>item_code[i]>>price[i];
        }

        for(int i=0;i<n;i++)
        {

            total=total+price[i];
        }
        }
};


class cash:public bill
{
protected:

    int deno[20];//number of denominations
    int value[20];//value of denominations
    int num;

public:

    void getinfo()
    {

        cout<<"enter number of denominations"<<endl;
        cin>>num;

        cout<<"enter values of each denomination"<<endl;

        for(int i=0;i<num;i++)
        {

            cin>>deno[i]>>value[i];
        }

    }


void show()
{

    cout<<"total price"<<total<<endl;
    cout<<"notes="<<num<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<deno[i]<<endl<<value[i]<<endl;
    }
}
};

class cheque:public bill{

protected:
    int check_no;
    char bank_name[20];

public:

void getinfo()
{
    cout<<"enter cheque num and bank name"<<endl;
    cin>>check_no;
    cin.ignore();
    cin.getline(bank_name,20);

}

void show()
{

    cout<<"total price"<<total<<endl;
    cout<<check_no<<endl;
    cout<<bank_name<<endl;
}

};


int main()
{
    bill *ptr;
    int n;
    cout<<"enter no of items"<<endl;
    cin>>n;


cash c;
cheque h;
c.bill::getinfo(n);
cout<<"press 1 for cheque 2 for cash payment"<<endl;
int ch;
cin>>ch;
switch(ch)
{
    case 1:
        h.getinfo();
        h.show();

    break;
case 2:
    c.getinfo();
    c.show();
break;
}


return 0;
}
