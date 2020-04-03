#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,x,y;
    cin>>n>>x>>y;
    if(x>y)
        a=y,b=x;
    else
        a=x,b=y;
    if(a<=n/2&&b>n/2)
        cout<<"Final!\n";
    else
    {
        bool t=1;
        y=2;
        int j=0;
        while(t)
        {
            x=0;
            if(j>=1)
                y*=2;
            while(x<=n)
            {
                if(a<x&&b<=x){
                    t=false;
                    break;

                }
                else if(a<=x&&b>x)
                    break;
                x+=y;
            }
            j++;
        }
        cout<<j<<endl;
    }
    return 0;
}
