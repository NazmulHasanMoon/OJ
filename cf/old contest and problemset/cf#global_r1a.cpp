#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
int a;
int main()
{
    faster
    int b,k,c,od,ev;
    od=ev=c=0;
    cin>>b>>k;
    if(b&1)
        c=1;
    if(k==1)
    {
        int x;
        cin>>x;
        if(x==0)
            cout<<"even\n";
        else
        {
            if((b&1)&&(x&1))
                cout<<"odd\n";
            else
                cout<<"even\n";
        }
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        cin>>a;
        if(i+1==k){
            if(a&1)
                od++;
            else
                ev++;
        }
        else if(a&1&&c)
            od++;
        else
            ev++;
    }
    if(od&1)
        cout<<"odd\n";
    else
        cout<<"even\n";
    return 0;
}
