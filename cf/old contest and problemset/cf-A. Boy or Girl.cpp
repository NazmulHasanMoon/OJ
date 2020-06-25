#include<bits/stdc++.h>
#include<cstring>
#define sz 105
using namespace std;
char c[sz];
int main()
{
    int l,s(0);
    cin>>c;
    for(int i=0;i<strlen(c);i++)
    {
        for(int j=0;j<strlen(c);j++)
        {
            if(j==i){
                if(c[i]==c[j])
                    s++;
                break;
            }
            else if(c[i]==c[j]&&i!=j)
                break;
        }
    }
    if(s%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    return 0;
}
