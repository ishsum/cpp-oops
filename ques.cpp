#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <iostream>
#include<string.h>
using namespace std;

struct data
{

    int value;
    char name[20];
    struct data *p;
};


int main()
{
int n;
cin>>n;
struct data s;
struct data *p;
s.value=n;

char nm[20];
cin.getline(nm,20);
strcpy(name,nm);

cout<<s.value<<endl;
cout<<s.name<<endl;
}
