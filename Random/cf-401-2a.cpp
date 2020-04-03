#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,l(0),m(0),r(0);
    long long n;
    scanf("%lld %d",&n,&x);
    if(x==1)
        m=1;
    else if(x==0)l=1;
    else r=1;
    for(int i=0;i<n;i++)
    {
        if(x<=1){
            swap(m,l);i++;
            if(i!=n)
                swap(m,r);
            else
                break;
        }
        else
        {
            swap(m,r),i++;
            if(i!=n)
             swap(m,l);
            else
                break;
        }
    }
    if(r)
        cout<<"2\n";
    else if(l)
        cout<<"0\n";
    else
        cout<<"1\n";
    return 0;
}
