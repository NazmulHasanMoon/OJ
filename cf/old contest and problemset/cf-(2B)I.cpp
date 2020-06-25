#include<bits/stdc++.h>
using namespace std;
#define sz 100
int a[sz],x[sz];
int main()
{
    int n,m,j(0);
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0){
            x[j]=-a[i];
            j++;
        }
    }
    sort(x,x+j);
    long int s(0);
    for(int i=j-1;i>=0;i--){
        s+=x[i];
        m--;
        if(m==0)
            break;
    }
    cout<<s<<endl;
    return 0;
}
