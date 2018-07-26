#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;


class bill
{
		protected:
			int items[10];
			float price[10];
			int size1;
            float sum=0;
            char products[20];

		public:
			bill(int items[],float price[],int size1);
			virtual void total()=0;
			virtual void display()=0;
};


bill::bill(int items[],float price[],int size1)
{
    //this->items[10]=items[10];
    //this->price[10]=price[10];
this->size1=size1;
for(int i=0;i<10;i++)
{
 this->price[i]=price[i];
 this->items[i]=items[i];
 }

cin.ignore();
     cout<<"Enter products"<<endl;

for(int i=0;i<size1;i++)

{
    cin.getline(products,20);
}
}
class Cash:public bill
{

protected:
float t,dis;

public:

    Cash(int *items,float *price,int s):bill(items,price,s)
    {



    }

    void total()
    {

for(int i=0;i<size1;i++)
{

sum=sum+this->price[i];


}
 }


    void discount()
    {
        cout<<"Enter percentage of discount on total price"<<endl;
        cin>>dis;

        t=(sum*dis)/100;

        sum=sum-t;
    }
    void display()
    {
cout<<"--------------------------------------------------------------Payed by Cash------------------------------------"<<endl;
cout<<"--------------------------------------------------------------Total Payment to be made: "<<sum<<endl;
cout<<"-----------------------------------------------------------------Items purchased-----------------------------------------------------------------------"<<endl;
cout<<endl;
for(int i=0;i<size1;i++)
{
    cout<<products[i];
}
    }

};

class Cheque:public bill{

protected:
    char bank[20];
    int num,dis,t;


public:

    Cheque(int items[],float price[],int c_no,char n[],int s):bill(items,price,s){
       num=c_no;
       strcpy(bank,n);



    }

    void total()
    {

for(int i=0;i<size1;i++)
{

 sum=sum+this->price[i];


}

    }



    void discount()
    {
        cout<<"Enter percentage of discount on total price"<<endl;
        cin>>dis;

        t=(sum*dis)/100;

        sum=sum-t;
    }
    void display()
    {
        cout<<"-------------------Payed by cheque-----------------------------"<<endl;
       cout<<"--------------------cheque number: "<<num<<endl;
        cout<<"--------------------name of bank: "<<bank<<endl;
cout<<"-----------------------------------------------------------------Items purchased-----------------------------------------------------------------------"<<endl;
cout<<endl;
for(int i=0;i<size1;i++)
{
    cout<<products[i];
}
cout<<"-----------------------------total Payment to be made= "<<sum;

    }
};

//STUDENT CODE HERE
int main()
{
    cout<<"-------------------------***********WELCOME TO SUPER-MARKET BILLING*********------------------------------------"<<endl;
	cout<<endl<<endl;
	long int s;
	cout<<"----------------------------Enter number of items----------------------------------------------------------------------"<<endl;
	cout<<endl<<endl;
	cin>>s;//no of items
	int item[s];
	     cout<<"Enter Item code"<<endl;
cout<<endl<<endl;
	for (int i=0;i<s;i++)
   	cin>>item[i];//items codes

	float price[s];//price of item corresponding to codes

cout<<"--------------------------------Enter price in INR for corresponding items-------------------------------------------------"<<endl;
	cout<<endl<<endl;
	for(int i=0;i<s;i++)
		cin>>price[i];
	int option;
	cout<<"----------------------------Enter 1 for payment by *CHEQUE* and 2 for payment by *CASH*--------------------------------"<<endl;
	cout<<endl<<endl;
	cin>>option;
	if(option==1)
	{
		int c_no;//cheque number
		char n[30];
		cout<<"---------------------------Enter cheque number----------------------------------------"<<endl;
		cin>>c_no;
		cin.ignore();
		cout<<"Enter Bank name"<<endl;
		cout<<endl<<endl;
		cin.getline(n,30);//bank name
		Cheque Ch(item,price,c_no,n,s);
		Ch.total();
		Ch.discount();
		Ch.display();
	}
	else if(option==2)
	{
		Cash C(item,price,s);

		C.total();
		C.discount();
		C.display();
	}
    return 0;
}
