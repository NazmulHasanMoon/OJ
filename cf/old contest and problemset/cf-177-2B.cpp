#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define sz 100
int a[sz][sz],c[sz*sz];
int main()
{
    int n,m,d,s(0),k(0),z;
    scanf("%d %d %d",&n,&m,&d);
    bool t(1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            c[k++]=a[i][j];
        }
    }
    sort(c,c+k);
    for(int i=0;i<k;i++)
    {
        if(c[i]%d!=c[i+1]%d&&i+1<k){
            t=0;break;
        }
        else
        {
            z=abs(c[i]-c[k/2]);
            s+=z/d;
        }
    }
    if(!t)
        printf("-1\n");
    else
        cout<<s<<endl;
    return 0;
}
