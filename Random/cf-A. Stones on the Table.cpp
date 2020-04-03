#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#define sz 100
using namespace std;
char c[sz];
int main()
{
    int n,x(0),i,j;
    scanf("%d",&n);
    getchar();
    scanf("%s",c);
    for(i=0,j=0;i<n;i++)
    {
        if(c[i]==c[i+1])
            j++;
    }
    cout<<j<<endl;
    return 0;
}
