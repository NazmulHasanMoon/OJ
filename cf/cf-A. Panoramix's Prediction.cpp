#include<bits/stdc++.h>
#define sz 50
using namespace std;
int p[sz];
int main()
{
    int x,i,j,k;
    for(i=2,k=0;i<=50;i++)
    {
        x=0;
        for(j=2;j<=int(sqrt(i+0.0));j++)
        {
            if(i%j==0){
                x=1;
                break;
            }
        }
        if(x==0){
            p[k]=i;
            k++;
        }
    }
    int m,n,y;
    scanf("%d %d",&m,&n);
    for(i=0;i<k;i++)
    {
        if(m==p[i])
        {
            y=i;
            break;
        }
    }
    if(p[y+1]==n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
