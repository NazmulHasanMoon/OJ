#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],s(0),x(0);
    for(int i=0;i<6;i++)
        scanf("%d",&a[i]),s+=a[i];
    int j=1;
    x=a[0]+a[1];
    for(int i=2;i<6;i++)
    {
        x+=a[i];
        if(x==(s-x))
        {
            printf("yes\n");
            return 0;
        }
        x-=a[i];
    }
    x=a[0]+a[2];
    for(int i=3;i<6;i++)
    {
        x+=a[i];
        if(x==(s-x))
        {
            printf("yes\n");
            return 0;
        }
        x-=a[i];
    }
    x=a[0]+a[3];
    for(int i=4;i<6;i++)
    {
        x+=a[i];
        if(x==(s-x))
        {
            printf("yes\n");
            return 0;
        }
        x-=a[i];
    }
    x=a[0]+a[4]+a[5];
    if(x==(s-x))
    {
        printf("yes\n");
        return 0;
    }
    printf("no\n");
    return 0;
}
