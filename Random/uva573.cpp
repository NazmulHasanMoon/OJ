
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,u,d,f;
    while(cin>>h>>u>>d>>f){
        if(h==0)
            break;
        double x=(u*f)/100.0;
        double z,s;
        s=0.0;
        bool t=true;
        int y=0;
        while(s<h&&s>0)
        {
            u-=x;
            s=s+z-d;
            y++;
            if(s<=0)
                t=false;

        }
        if(t)
            cout<<"success at day \"<<y<<endl;
    }
    return 0;
}
