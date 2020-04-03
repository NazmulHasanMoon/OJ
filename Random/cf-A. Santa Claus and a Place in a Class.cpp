#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,j,p1;
    long long x,k;
    double p,s;
    scanf("%d %d %I64d",&n,&m,&k);
    p=ceil((k/(m+m+0.0)));
    i=(int)p;
    s=ceil(k/2.0);
    j=(int)s;
    while(j>m)
        j-=m;
    printf("%d %d ",i,j);
    if(k%2==0)
        printf("R\n");
    else
        printf("L\n");
    return 0;
}
