#include<iostream>
using namespace std;
class number
{
      protected:
                int *num;
                public:
                void getdata();
                virtual void show()=0;
};
void number::getdata()
{

    cin>>num;
}
class octnum:public number
{
      public:
             int rem, i ;
            int octalNumber;
             void initialise();
             void show();
};
void octnum::initialise()
{


}

void octnum::show()
{


}
class binary:public number
{
     public:
    long int rem,i;
    int bin_no;
    void initialise_b();
    void show();
};

void binary::initialise_b()
{


}

void binary::show()
{


}
//STUDENT CODE HERE
int main()
{
      octnum ob;
      binary ob2;
      ob.initialise();
      ob2.initialise_b();
      ob.show();
      ob2.show();
}


