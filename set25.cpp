#include<iostream>
using namespace std;
class bill
{
protected:
    int item_price;
    int qty;
    int bill;


public:

void getdata()
{

    cin>>item_price>>qty;
}

void cal()
{

    bill=item_price*qty;
}

};

class cash:public bill
{
    protected:
        int cash;
int a,b,c,d;
public:

void get_cash()
{
    getdata();
    cin>>a>>b>>c>>d;
    cash=a*2000+b*100+c*50+d*10;

}
void display()
{
cal();
//cout<<bill<<endl;
if(bill==cash)
{

    cout<<"Clear"<<endl;
}
else if(bill>cash)
{

cout<<"Need to pay:"<<(bill-cash)<<endl;
}
else
{
    cout<<"clear"<<endl;
}
}
};
int main()
{
    cash d;
    d.get_cash();
    d.display();
	return 0;
}


