#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,z,k(1),l;
        scanf("%d",&n);
        int a[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(j>0&&a[j]==a[j-1])
                k++;
        }
        if(k==n)
            cout<<"neutral\n";
        else
        {
            int y,m,p;
            y=m=l=0;
            for(int j=1; j<n-1; j++)
            {
                if(a[j]>a[j-1]&&a[j]>a[j+1])
                {
                    y++;
                    if(y==1)
                        m=j+1;
                    if(y>1)
                    {
                        p=j;
                        if(l<=(p-m))
                            l=p-m;
                        //cout<<m<<' '<<p<<endl;
                        m=p+1;
                    }
                }
            }
            if(y)
                cout<<l<<endl;
            else
            {
                x=z=1;
                for(int j=1; j<n; j++)
                {
                    if(a[j]>=a[j-1])
                        x++;
                    if(a[j]<=a[j-1])
                        z++;

                }
                if(x==n)
                    cout<<"allGoodDays\n";
                else if(z==n)
                    cout<<"allBadDays\n";
                else
                    cout<<"none\n";
            }
        }

    }
    return 0;
}
