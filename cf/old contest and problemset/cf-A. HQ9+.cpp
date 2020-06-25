#include<bits/stdc++.h>
#include<cstring>
#define sz 200
using namespace std;
char c[sz];
int main()
{
    gets(c);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='H'||c[i]=='Q'||c[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
