
#include <iostream>

 using namespace std;
const int size=10;
 class country
{
        protected:

                           char cname[size];
                           float pprc;
                           float Iprc;
                           float ratio;
        public:
   virtual void disp()=0;
                          country(){ }
                          virtual void getdata()
                    {
                              cout<<"Enter Country Name ";
                              cin>>cname;
                              cout<<"Enter the % of Polio ";
                              cin>>pprc;
                              cout<<"Enter the % of Literacy ";
                              cin>>Iprc;
                     }
                          virtual void display()
                    {

                        cout<<"Country Name "<<cname<<endl;
                        cout<<"Country Polio% "<<pprc<<endl;
                        cout<<"Country Lit. % "<<Iprc<<endl;
                        cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl;
                    }
};
           class state: public country
    {
public:
   void disp(){
       cout<<"Welcome"<<endl;
       }

protected:
    char sname[size];
                           float ppr;
                           float Ipr;
                           float ratio1;
  public:
  void getdata()
                    {
                              cout<<"Enter state Name ";
                              cin>>sname;
                              cout<<"Enter the % of Polio ";
                              cin>>ppr;
                              cout<<"Enter the % of Literacy ";
                              cin>>Ipr;
                     }
                          void display()
                    {

                        cout<<"state Name "<<sname<<endl;


                        cout<<"%Age of Polio of State "<<ppr<<endl;
                        cout<<"%Age of Lite. of State  "<<Ipr<<endl;
                        cout<<"The Measure of Interdependency "<<float (ppr/Ipr)<<endl;
                    }
};
int main() {


country *c;
state s;
s.country::getdata();
c=&s;
c->getdata();

c->disp();
s.country::display();
c->display();    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

