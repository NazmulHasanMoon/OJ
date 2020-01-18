#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define sz 200000
int a[sz],x[sz],y[sz];
int main()
{
    long int n;
    long long s,s2;
    s=s2=0;
    scanf("%ld",&n);
    long int i,j,k;
    for(i=j=k=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0){
            y[j]=-a[i];
            s2+=y[j];
            j++;

        }
        else{
            s+=a[i];
            x[k]=a[i];
            k++;
        }
    }
    if(s>s2)
        printf("first\n");
    else if(s2>s)
        printf("second\n");
    else
    {
        int p(0);
        for(i=0;i<k;i++)
        {
            p=0;
            if(x[i]>y[i]){
                p=1;
                break;
            }
            else if(y[i]>x[i]){
                p=2;
                break;
            }
        }
        if(p==0)
        {
            if(a[n-1]<0)
                printf("second\n");
            else
                printf("first\n");
        }
        else if(p==1)
            printf("first\n");
        else
            printf("second\n");
    }
    return 0;
}
