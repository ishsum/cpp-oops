#include<iostream>
#include<string.h>
using namespace std;

class alien
{
    protected:
    char name[20];
    char colour[20];
    int eyes;
    int n1;
public:
    alien(char *n,char *c,int e,int l)
    {
        strcpy(name,n);
        strcpy(colour,c);
        eyes=e;
        n1=l;
    }
    };

    class martian:public alien
    {
    protected:
        public:
    martian(char *n,char *c,int e,int l):alien(n,c,e,l)
    {

    }

    void toString()
    {

        cout<<"the alien "<<name<<"is a martian.It is "<<colour<<"in color,has "<<eyes<<"and can live "<<n1<<"lives"<<endl;


    }

    };


    class jupiterian:public alien
    {

protected:

        public:
    jupiterian(char *n,char *c,int e,int l):alien(n,c,e,l)
    {

    }

        void toString()
 {

        cout<<"the alien "<<name<<"is a jupiterian.It is"<<colour<<"in color,has"<<eyes<<"and can live"<<n1<<"lives"<<endl;

    }

    };
int main()
{
	char c[20],n[20];
	int e;
	int l;
	cin.getline(n,20);
	cin>>c;
	cin>>e;
	cin>>l;

	martian m(n,c,e,l);
	cin.ignore();
	cin.getline(n,20);
	cin>>c;
	cin>>e;
	cin>>l;
	jupiterian j(n,c,e,l);
	m.toString();
	j.toString();
	return 0;
}

