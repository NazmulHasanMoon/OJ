#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int m,s,mn,mx;
    sf("%d %d",&m,&s);
    bool t1,t2;
    t1=t2=false;
    double x=pow(10.0,(m-1));
    int y=(int)x;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<10;j++)
        {
            if((i%9)+j==s){
                t1=true;
                mn=i*10+j;
                break;
            }
        }
    }
    for(int i=m;i>=0;i--)
    {
        for(int j=9;j>=0;j--)
        {
            if((i%9)+j==s){
                t2=true;
                mx=i*10+j;
                break;
            }
        }
    }
    if(t1&&t2)
        pf("%d %d\n",mn,mx);
    else
        pf("-1\n");
    cout<<max(0,2-9*14)<<endl;
    return 0;
}
