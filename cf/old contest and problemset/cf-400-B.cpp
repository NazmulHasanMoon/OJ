#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define sz 100000
int cl[sz];
int main()
{
    int i,j(0),l,n;
    scanf("%d",&n);
    cl[2]=1;
    for(int i=2;i<=n+1;i++)
        cl[i]=1;
    for(i=2;i<=n+1;i++)
    {
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0){
                cl[i]=2;
                break;
            }
        }
    }
    if(n<3)
        printf("1\n");
    else
        printf("2\n");
    for(int i=2;i<=n+1;i++)
        printf("%d ",cl[i]);
    printf("\n");
    return 0;
}
