#include <iostream>
#include <cstring>
//Measure the strength of the password
using namespace std;
bool check(char pass[255],char s=0,char e=0)
{
    for(int i=0;pass[i]!='\0';i++)
    {
    if(s>=pass[i]&&e<=pass[i])
       {
        return true;
       }
    }
    return false;
}
int main()
{
    char pass[255];
    cin>>pass;
    if(strlen(pass)<6)
    {
        cout<<" Bad password!";
    }
    int dificality=0;
    {
        if(check(pass))
        {
            dificality++;
        }
        if(check(pass,'!','/'))
        {
            dificality++;
        }
        if(check(pass,'a','z'))
        {
            dificality++;
        }
        cout<<"Dificality:"<<(dificality*20);
        return 0;
    }
}
