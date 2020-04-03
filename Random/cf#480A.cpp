#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pi acos(-1.0)
#define sz 100005
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int x,y;
    x=y=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='o')
            x++;
        else
            y++;
    }
    if((x&1)&&(y&1)&&x!=y)
    {
        if((x>=y&&x%y==0)||(y>=x&&y%x==0))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    else
    {
        if((x&&!y)||(!x&&y))
            cout<<"yes\n";
        else
        {
            if((x>=y&&x%y==0)||(y>=x&&y%x==0))
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
    }

    return 0;
}
