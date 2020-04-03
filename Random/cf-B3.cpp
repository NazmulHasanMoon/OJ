#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n],x;
    for(int i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        double k;
        x=a[i];
        k=ceil(sqrt(x+0.0));
        ///int k;
        ///k=(int)l;
       /// cout<<k;
        int j,s(2);
        if(a[i]%(int)k==0)
            s++;
        for(j=2;j<(int)k;j++)
        {
            if(a[i]%j==0)
                s+=2;
            if(s>3)
                break;
        }
        if(a[i]==2)
            s=0;
        ///cout<<" "<<s<<endl;
        if(j==k&&s==3)
            a[i]=1;
        else
            a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
