#include<bits/stdc++.h>
using namespace std;
#define sz 100001
int a[sz];
int main()
{
    int n,m,x,y,z;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(a[x])
        {
            if(a[x]==2)
                swap(x,y);
            else if(a[x]==3)
                swap(x,z);
        }
        else if(a[y]){
            if(a[y]==3)
                swap(y,z);
            else if(a[y]==1)
                swap(x,y);
        }
        else if(a[z]){
            if(a[z]==1)
                swap(x,z);
            else if(a[z]==2)
                swap(y,z);
        }
        a[x]=1,a[y]=2,a[z]=3;

    }
    for(int i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n]);
    return 0;
}
