#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=1;
    while(cin>>s)
    {
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            bool t=true;
            if(x>y)
                swap(x,y);
            for(int j=x+1;j<=y;j++)
            {
                if(s[j]!=s[j-1]){
                    t=false;
                    break;
                }
            }
            if(!i)
                printf("Case %d:\n",c);
            if(t)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        c++;
    }
    return 0;
}
