
#include <iostream>

using namespace std;
template<class t>

        void read(t arr[],int n)
        {

            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        }
template<class t>

        void print(t arr[],int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i];
            }
        }
template<class t>

void sort1(t arr[],int n)
{

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;i++)
    {
        if(arr[i]>arr[j])
        {

            t temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }

}


}


int main()
{
    int n;
    cin>>n;
    int ch;
    cin>>ch;
    switch(ch)
    {

    case 1:

        int arr3[n];
        read(arr3,n);
        sort1(arr3,n);
        print(arr3,n);

        break;

    case 2:
       float arr1[n];
        read(arr1,n);
        sort1(arr1,n);
        print(arr1,n);


        break;

    case 3:
        char arr2[n];
        read(arr2,n);
        sort1(arr2,n);
        print(arr2,n);
    }
return 0;
}


