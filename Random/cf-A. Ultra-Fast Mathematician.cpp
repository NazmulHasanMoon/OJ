#include<bits/stdc++.h>
#include<cstring>
#define sz 200
using namespace std;
char c[sz],ch[sz];
int main()
{
    scanf("%s",c);
    getchar();
    scanf("%s",ch);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]==ch[i])
            cout<<"0";
        else
            cout<<"1";
    }
    cout<<endl;
    return 0;
}
