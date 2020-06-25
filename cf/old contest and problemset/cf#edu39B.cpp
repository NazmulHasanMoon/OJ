#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b;
void step2();
void step1();
void step1()
{
    if(a==0||b==0)
        return ;
    else
        step2();
}
void step3()
{

    if(b>=2*a)
    {
        ll x,y;
        x=b/a;
        y=b%a;
        if(x>3)
        {
            if(!(x&1))
                b=(2*a)+y;
            else
                b=(3*a)+y;
        }
        else
            b-=2*a;
        step1();
    }
    else
        return ;
}
void step2()
{
    //cout<<a<<' '<<b<<'\n';
    if(a>=2*b)
    {
        ll x,y;
        x=a/b;
        y=a%b;
        if(x>3)
        {
            if(!(x&1))
                a=(2*b)+y;
            else
                a=(3*b)+y;
        }
        else
            a-=2*b;
        step1();
    }
    else
        step3();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    //step1:
    if(a==0||b==0)
    {
        cout<<a<<' '<<b<<'\n';
        return 0;
    }
    step2();
    cout<<a<<' '<<b<<'\n';
    return 0;
}
