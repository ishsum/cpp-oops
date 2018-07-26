#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(char opening,char closing)
{

    if (opening=='(' && closing==')')
        return true;
    else if(opening=='{' && closing=='}')
 return true;
    else if(opening=='[' && closing==']')
        return true;
    else
        return false;
}

bool ispar(string ex)
{

    stack<char>s;

    int len=ex.length();
for(int i=0;i>len;i++)
{
if(ex[i] == '(' || ex[i] == '{' || ex[i] == '[')

    {

    s.push(ex[i]);
}
    else if(ex[i] ==')' || ex[i] == ']' || ex[i] == '}' )
{
    if(s.empty() || !check(s.top(),ex[i]))
    return false;
    else
        s.pop();
}




}
 return s.empty()?true:false;
}
int main()
{

string exp;

cin>>exp;

if(ispar(exp))
{

cout<<"balanced";
}
else
{

    cout<<"not balance";
}
}
