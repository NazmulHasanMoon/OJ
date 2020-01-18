#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,s(0);
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
            s++;
        else if(i%l==0)
            s++;
        else if(i%m==0)
            s++;
        else if(i%n==0)
            s++;
    }
    cout<<s<<endl;
    return 0;
}
