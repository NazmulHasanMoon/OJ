#include<iostream>
#include<cstring>
#include<cstdio>
#define sz 10000
using namespace std;
char c[sz];
int main()
{
    cin>>c;
    for(int i=0;i<strlen(c);)
    {
        if(c[i]=='-'&&c[i+1]=='-'){
            cout<<"2";
            i+=2;
        }
        else if(c[i]=='-'&&c[i+1]=='.'){
            cout<<"1";
            i+=2;
        }
        else
        {
            cout<<"0";
            i++;
        }
    }
    cout<<endl;
    return 0;
}
