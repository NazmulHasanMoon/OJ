#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
char c[sz];
deque<char>de;
int main()
{
    faster
    int n,k,x,y,mx(1);
    cin>>n>>k>>c;
    x=y=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='a')
            x++;
        else
            y++;
        de.push_back(c[i]);
        //cout<<x<<' '<<y<<endl;
        if(x>k&&y>k)
        {
            mx=max(mx,x+y-1);
            char cc;
            cc=de.front();
            de.pop_front();
            if(cc=='a')
                x--;
            else
                y--;
        }
    }
    mx=max(mx,x+y);
    cout<<mx<<'\n';
    return 0;
}
