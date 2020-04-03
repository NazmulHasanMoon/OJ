#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100001
int LB(int a[],int n,int key)
{
    int b=0,e=n,m;
    while(b<=e)
    {
        m=(b+e)/2;
        if(a[m]==key)
            e=m-1;
        else if(a[m]>key)
            e=m-1;
        else if(a[m]<key)
            b=m+1;
    }
    return b;
}
/*int UB(int a[],int n,int x,int key)
{
    int b=x,e=n,m;
    while(b<=e)
    {
        m=(b+e)/2;
        if(a[m]==key)
            b=m+1;
        else if(a[m]>key)
            e=m-1;
        else if(a[m]<key)
            b=m+1;
    }

    return b;
}*/
int UB(int a[], int n, int x,int key) {
    int l = x;
    int h = n; // Not n - 1
    while (l < h) {
        int mid = (l + h) / 2;
        if (key >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}
int main()
{
    int t,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        int n,q;
        sf("%d %d",&n,&q);
        int a[n+1];
        for(int j=0; j<n; j++)
            sf("%d",&a[j]);
        pf("Case %d:\n",i);
        int x,y;
        for(int j=0; j<q; j++)
        {
            sf("%d %d",&x,&y);
            x=LB(a,n,x);
            y=UB(a,n,x,y);
            //y= upper_bound(a+x,a+n,y)-a;
            pf("%d\n",y-x);
        }
        i++;
    }

}
