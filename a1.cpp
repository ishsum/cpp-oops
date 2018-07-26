///mad prime
#include <iostream>
using namespace std;

class find_
{
	protected:
	int lb,ub;
    public:

void get()
{
    cout<<"enter lb and up"<<endl;
    cin>>lb>>ub;
}
};

class der_prime:public find_{

protected:
    int arr[20];
    int count;
int flag;
    public:
        int k=0;
    void detect_prime()
    {


        while(lb<ub)
        {
flag=0;
            for(int i=2;i<=lb/2;i++)
            {
                if(lb%i==0)
                {
                flag=1;
             break;
                }

            }
             if(flag==0)
                {
                    arr[k]=lb;
                    k++;
                  }
                  lb++;
            }

 for(int j=0;j<k;j++)
    {
        for(int b=j+1;b<j;b++)
        {

            if(j==b)
            {
                count++;
            }
        }

    }


        }



void print_()

    {


    }




};

//STUDENT CODE HERE

int main()
{
	 static der_prime d1;
	d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)
	d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
	d1.print_();//print the desired output in derived class
	return 0;
}

