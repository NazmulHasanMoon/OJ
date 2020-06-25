#include<iostream>
#include<cstdio>
#include<cstring>
#define sz 105
using namespace std;
char c[sz];
int main()
{
    int i,j=1,max=0;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Y'){
            if(max<j)
                max=j;
            j=1;
        }
        else
            j++;
    }
    if(max<j)
        max=j;
    cout<<max<<endl;
    return 0;
}
