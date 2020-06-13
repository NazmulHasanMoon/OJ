#include<stdio.h>
#define sz 10001
int a[sz];
int main()
{
    int t,n,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=1;
        scanf("%d %d",&n,&a[0]);
        int mn=a[0];
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>mn)continue;
            mn=a[i];
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
