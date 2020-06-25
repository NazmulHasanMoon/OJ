#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all( x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/
int a,b,n,c(0);
bool t=false;
void time()
{
    while(b>=0)
    {
        if(a==7||a==17||b==7||b==17||b==27||b==37||b==47||b==57){
            t=true;
            break;
        }
        c++;
        b-=n;
    }
}
int main()
{

    sf("%d %d %d",&n,&a,&b);
    if(a==7||a==17||b==7||b==17||b==27||b==37||b==47||b==57)
    {
        pf("0\n");
        return 0;
    }
    time();
    while(b<0&&t==false)
    {
        a--;
        if(a<0)
            a=23;
        b+=60;
        time();
    }
    pf("%d\n",c);
    return 0;
}
