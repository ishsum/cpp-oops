#include<iostream>
#include<string>
using namespace std;

class admin
{

public:
     int pno[40],a=0,j;
    string name[50];
    float price[40],qty[40],tax[40],dis[40],p[40];




    void create_product()
    {

        char p;
         do{
        cout<<"\nPlease Enter The Product No. of The Product ";
        cin>>pno[a];
        cout<<"\n\nPlease Enter The Name of The Product ";
        cin>>name[a];
        cout<<"\n\nPlease Enter The Price of The Product ";
        cin>>price[a];
        cout<<"\n\ndo you want to enter another product in the menu? (y/n)";
        cin>>p;
         a++;
        }while(p=='y');
    }

    void show_product()
    {
        cout<<"\t\tMENU OF ITEMS"<<endl;
        cout<<"*******************************************"<<endl;
        cout<<"PNo.\t\t Name \t\t Price \t\t"<<endl;
        cout<<"*******************************************"<<endl;
        for(j=0;j<a;j++)
        {
        cout<<pno[j]<<"\t\t"<<name[j]<<"\t\t"<<price[j]<<endl;
        }
}

};
class customer:public admin
{
    int pn[20],quantity[20],total=0,amount[30],pr[50];
    char ch;
    int c=0;

public:
    void order()
    {
        cout<<"*****PLACE YOUR ORDER******"<<endl;
   quantity[0]={0};
        do{
        cout<<"Enter the product no. of product:"<<endl;
        cin>>pn[c];
        cout<<"Enter Quantity:"<<endl;
        cin>>quantity[c];

        cout<<"do you want another product ? (y/n)";
        cin>>ch;
        c++;
        }while(ch=='y');
        for(int i=0;i<a;i++)
         {
             pr[i]=price[i];

         }
         for(int i=0;i<c;i++)
         {
            if(pn[i]==pn[i+1])
        {

            quantity[i]=quantity[i]+quantity[i+1];
            pr[i+1]=0;

        }
         }


        cout<<"Thanks for placing order"<<endl;
        cout<<"**********INVOICE***********"<<endl;
        cout<<"\nPNo.\tName\tQuantity\tPrice\tAmount\n";
        for(int i=0;i<c;i++)
        {

            amount[i]=quantity[i]*pr[i];
            cout<<pn[i]<<"\t"<<name[i]<<"\t"<<quantity[i]<<"\t\t"<<pr[i]<<"\t"<<amount[i]<<endl;

            total=total+amount[i];
        }

        cout<<"Total Amount:"<<total<<endl;
    }
};

int main()
{
    customer c;
    int choice,ch;
    cout<<"SUPERMARKET MANAGEMENT SYSTEM";
    cout<<endl<<endl;
    ch=0;

    do{
    cout<<"\t\tMAIN MENU"<<endl;
    cout<<"\t\t1 CUSTOMER"<<endl;
    cout<<"\t\t2 ADMINISTRATOR"<<endl;
    cout<<"\t\t3 EXIT"<<endl<<endl;
    cout<<"Enter Your Choice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Welcome"<<endl;
        c.show_product();
        c.order();

        cout<<"for main menu enter 1";
        cin>>ch;


    }
    if(choice==2)
    {
        cout<<"ADD ITEMS IN THE MENU"<<endl<<endl;
        c.create_product();

        c.show_product();
        cout<<"for main menu enter 1";
        cin>>ch;

    }
    if(choice==3)
    {
        break;
    }
}while(ch==1);
}
