#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 105
#define ll long long

int main()
{

    int n;
    while(cin>>n)
    {
        //cin.ignore();
        char c[n+2];
        int s(0);
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        c[n]='\0';
        //cout<<c<<endl;
            string ch;
            while(n--)
            {
               // cout<<c[n]<<'*'<<endl;
                if(c[n]!='a'&&c[n]!='e'&&c[n]!='i'&&c[n]!='o'&&c[n]!='u'&&c[n]!='y')
                    ch.push_back(c[n]);
                else if((c[n]=='a'||c[n]=='e'||c[n]=='i'||c[n]=='o'||c[n]=='u'||c[n]=='y')&&(c[n-1]!='a'&&c[n-1]!='e'&&c[n-1]!='i'&&c[n-1]!='o'&&c[n-1]!='u'&&c[n-1]!='y')&&n-1>=0)
                    ch.push_back(c[n]);
                //cout<<s<<endl;
                else
                    s--;
            }
            if(c[0]=='a'||c[0]=='e'||c[0]=='i'||c[0]=='o'||c[0]=='u'||c[0]=='y')
                ch.push_back(c[0]);
            int l=ch.size();
           // cout<<l<<endl;
            for(int i=l-1; i>=0; i--)
                cout<<ch[i];
            cout<<endl;
    }
    return 0;
}
