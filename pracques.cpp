#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iostream>
using namespace std;
#include<math.h>

#include<string.h>

class Electricity

{
    protected:
   int units;
   float price,cost;

   public:

       void get_units()
       {

           cout<<"Enter num of units"<<endl;
           cin>>units;
       }

 void Bill()
    {
        if(units<100)
        {

            price=units*50;
            cost=price/100;
            cout<<"Cost upto 100 unit is " <<cost<<endl;
        }
        else
        {

            price=units*60;
            cost=price/100;
            cout<<"Beyond 300 unit is " <<cost<<endl;
        }


    }
};

class More_Electricity:public Electricity

{
    public:


void Bill()
{
        if(cost>250)
    {

    int diff=cost-250;
        float cost1=cost+diff*.15;



cout<<"bill amount with surcharge "<<cost1;
    }
    else
    {

     cout<<"bill amount is "<<cost;
    }
}
};
int main()
{

    More_Electricity a;

    a.get_units();
    a.Electricity::Bill();
    a.More_Electricity::Bill();



return 0;
}
