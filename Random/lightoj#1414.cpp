#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define case(x) cout<<"Case "<<x<<": "
bool leapyear(long long x)
{
    //cout<<x<<endl;
    if(x%400==0||(x%100!=0&&x%4==0))
        return true;
    else
        return false;
}
int main()
{
    int T,cs(1);
    cin>>T;
    while(cs<=T)
    {
        string c,ch,cc,cch;
        int a,p;
        long long b,q,z,re(0);
        cin>>c>>a>>ch>>b;
        cin>>cc>>p>>cch>>q;
        re=(q/4-q/100+q/400)-(b/4-b/100+b/400);
        if(leapyear(b)&&(c=="February"||c=="January"))
            re++;
        if(leapyear(q)&&(cc=="February"&&p<29||cc=="January"))
            re--;

    case(cs++);
        pf("%ld\n",re);
    }
    return 0;
}
