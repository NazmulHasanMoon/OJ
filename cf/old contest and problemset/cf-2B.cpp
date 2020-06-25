#include<bits/stdc++.h>
using namespace std;
#define sz 100000
int a[sz];
int main()
{
    int n,t;
    int m=0;
    scanf("%d %d",&n,&t);
    int c,s,x;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    c=s=x=0;
    for(int j=0;j<n;j++)
    {
        s+=a[j];
        if(s<=t)
            c++;
        else{
            s-=a[x];
            //cout<<s<<endl;
            x++;
        }
    }
    printf("%d\n",c);
    return 0;
}
