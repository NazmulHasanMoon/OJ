#include<bits/stdc++.h>
using namespace std;
#define sz 100000
int a[sz];
int main()
{
    int n,s(0),l(1),r(0),r1(0),m=2;
    bool t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>1)
        {
            if(a[i]==a[i-1]+a[i-2]){
                if(!t){
                    l=i-1,r=i+1;
                }
                else
                    r=i+1;
                t=1;
                s=r-l+1;
                if(m<s)
                    m=s;
            }
            else
            {
                t=0;
            }
        }
    }
    if(n==1)
        cout<<"1\n";
    else
        cout<<m<<endl;
    return 0;
}
