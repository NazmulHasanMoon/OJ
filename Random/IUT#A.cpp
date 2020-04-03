#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;
int main()
{
    ll x;
    vector<ll>v;
    for(int i=1;i<=9;i++)
        v.push_back(i);
    for(int i=1;i<10;i++)
        v.push_back(11*i);
    char c[14];
    c[0]='1',c[2]='1';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='2',c[2]='2';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='3',c[2]='3';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='4',c[2]='4';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='5',c[2]='5';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='6',c[2]='6';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='7',c[2]='7';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='8',c[2]='8';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    c[0]='9',c[2]='9';
    for(int i=0;i<=9;i++)
    {
        c[1]=char(i+'0');
        v.push_back(atoi(c));
    }
    return 0;
}
