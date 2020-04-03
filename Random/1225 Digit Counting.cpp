#include<bits/stdc++.h>
using namespace std;
//#define ss second
//#define ff first
int mp[10];
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        //map<int,int>mp;
        cin>>n;
        /*for(int i=0;i<10;i++)
            mp[i]=0;*/
        for(int i=1; i<=n; i++)
        {
            int x=i;
            while(x)
            {
                mp[x%10]++;
                x/=10;
            }
        }
        //map<int,int>::iterator it=mp.begin();
        int i=0;
        /*for(;it!=mp.end();it++,i++)
            printf("%d%c",it->ss,(i<9)?' ':'\n');
        mp.clear();*/
        for(int i=0;i<10;i++){
            printf("%d%c",mp[i],(i<9)?' ':'\n');
            mp[i]=0;
        }
    }
    return 0;
}
