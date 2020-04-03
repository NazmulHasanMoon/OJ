#include<bits/stdc++.h>
using namespace std;

struct laptop
{
    int sp,rm,hd,ct;
};
int main()
{
    struct laptop x[110];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int s,r,h,c;

        cin>>s>>r>>h>>c;
        x[i].sp=s;
        x[i].rm=r;
        x[i].hd=h;
        x[i].ct=c;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i].sp<x[j].sp&&x[i].rm<x[j].rm&&x[i].hd<x[j].hd){
                x[i].sp=0;
                break;
            }
        }
    }
    int ans,cost=100000;
    for(int i=0;i<n;i++){
        if(x[i].sp&&cost>x[i].ct)
            ans=i,cost=x[i].ct;
    }
    cout<<ans+1<<endl;
    return 0;

}

