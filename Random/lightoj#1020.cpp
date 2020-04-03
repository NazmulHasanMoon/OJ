#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define case(x) cout<<"Case "<<x<<": "
int main()
{
    int T,n,i(0);
    string s;
    cin>>T;
    while(i<T)
    {
        cin>>n>>s;
        n%=3;
        case(++i);
        if(s=="Bob")
        {
            if(n==1||n==2)
                cout<<"Bob\n";
            else
                cout<<"Alice\n";
        }
        else
        {
            if(!n||n==2)
                cout<<"Alice\n";
            else
                cout<<"Bob\n";
        }
    }
    return 0;
}
