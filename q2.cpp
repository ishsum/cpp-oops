#include<iostream>
using namespace std;
template<class t>
class sets_theory
{
    t *arr1;
    t *arr2;
    int s_arr1;
    int s_arr2;
    public:
        sets_theory(int n1,int n2)
        {
            s_arr1=n1;
            s_arr2=n2;
            arr1=new t[s_arr1];
            arr2=new t[s_arr2];
        }
        void get()
        {
            for(int i=0;i<s_arr1;i++)
                cin>>arr1[i];
            for(int i=0;i<s_arr2;i++)
                cin>>arr2[i];
        }
        t *temp1;
        void sets_compute()
        {
            temp1=new t[s_arr1];
            int count1=0;
            int flag;
            int k=0;
            for(int i=0;i<s_arr2;i++)
            {
                flag=0;
                for(int j=0;j<s_arr1;j++)
                {
                    if(arr2[i]==arr1[j])
                    {
                        flag=1;
                        count1++;
                    }
                }
                if(flag==0)
                {
                    temp1[k]=arr2[i];
                    k++;
                }
            }
            s_arr2-=count1;
        }
        void sets_union()
        {
            sets_compute();
            t *temp=new t[s_arr1+s_arr2];
            int k=0,i=0,j=0;
            while(i<s_arr1 && j<s_arr2)
            {
                if(arr1[i]<temp1[j])
                {
                    temp[k]=arr1[i];
                    i++;
                }
                else if(temp1[j]<arr1[i])
                {
                    temp[k]=temp1[j];
                    j++;
                }
                k++;
            }
            while(j<s_arr2)
            {
                temp[k]=temp1[j];
                j++;
                k++;
            }
            while(i<s_arr1)
            {
                temp[k]=arr1[i];
                i++;k++;
            }
            for(int i=0;i<s_arr1+s_arr2;i++)
                cout<<temp[i]<<" ";
        }
};
int main()
{
	int n1,n2;
	int ch;
	cin>>ch;
	cin>>n1>>n2;
	switch(ch)
	{
        case 1:{
            sets_theory<int>s1(n1,n2);
            s1.get();
            s1.sets_union();
            break;
         }
        case 2:{
            sets_theory<char>s2(n1,n2);
            s2.get();
            s2.sets_union();
            break;
        }
        case 3:{
            sets_theory<float>s3(n1,n2);
            s3.get();
            s3.sets_union();
            break;
        }
}
	return 0;
}
