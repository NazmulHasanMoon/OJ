#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a,b,c;
        a=b=c=0;
        int j(0);
        for(auto i:s)
        {
            if(isdigit(i))
                a++;
            else if(islower(i))
                b++;
            else if(isupper(i))
                c++;
            j++;
        }
        if(a&&b&&c)
            cout<<s<<'\n';
        else
        {
            bool ck=false;
            for(int i=1; i<j; i++)
            {
                if(islower(s[i])&&islower(s[i-1]))
                {
                    ck=true;
                    if(c)
                        s[i-1]='1';
                    else if(a)
                        s[i-1]='A';
                    else
                        s[i-1]='1',s[i]='A';
                    break;

                }
                else if(isupper(s[i])&&isupper(s[i-1]))
                {
                    ck=true;
                    if(b)
                        s[i-1]='1';
                    else if(a)
                        s[i]='a';
                    else
                        s[i-1]='1',s[i]='a';
                    break;
                }
                else if(isdigit(s[i])&&isdigit(s[i-1]))
                {
                    ck=true;
                    if(b)
                        s[i-1]='A';
                    else if(c)
                        s[i-1]='a';
                    else
                        s[i-1]='A',s[i]='a';
                    break;
                }
            }
            if(ck)
                cout<<s<<endl;
            else
            {

                for(int i=0; i<j; i++)
                {
                    if(a>1)
                    {
                        if(b)
                            cout<<'A';
                        else
                            cout<<'a';
                        a--;
                    }
                    else if(b>1)
                    {
                        if(a)
                            cout<<'A';
                        else
                            cout<<'1';
                        b--;
                    }
                    else if(c>1)
                    {
                        if(a)
                            cout<<'a';
                        else
                            cout<<'1';
                        c--;
                    }
                    else
                        cout<<s[i];
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}

