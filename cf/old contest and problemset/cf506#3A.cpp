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
/*int main()
{
    faster
    string s[52],s2,s3[52],s4;
    map<string,bool>ms;
    int n,k,t(0),p(0);
    cin>>n>>k>>s2;
    for(int i=1;i<n;i++)
    {
        if(s2[i]!=s2[i-1])
            break;
        p++;
    }
    //cout<<p<<endl;
    if(p==n-1)
    {
        for(int i=1;i<k;i++)
            s2.push_back(s2[0]);
        cout<<s2<<"\n";
        return 0;
    }
    for(int i=0,j=1;i<n;i++,j++)
    {
        s[j]=s[j-1];
        s[j].push_back(s2[i]);
        ms[s[j]]=1;
        //cout<<s[j]<<endl;
    }
    int j=n/2;
    int l(0);
    for(int i=n-1,w=1;i>=j;i--,w++)
    {
        s3[w].push_back(s2[i]);
        s3[w]+=s3[w-1];
        if(ms.find(s3[w])!=ms.end())
            l=n-i;
    }
    for(int i=l;i<n;i++)
        s4.push_back(s2[i]);
    cout<<s2;
    for(int i=1;i<k;i++)
        cout<<s4;
    cout<<'\n';
    return 0;
}
*/
int main()
{
    faster;
    int n,k,x,y,z,p,q,r;
    string s1,s2[53],s3[53],s4;
    cin>>n>>k>>s1;
    for(int i=n-1,j=1; i>=0; i--,j++)
    {

        s2[j].push_back(s1[i]);
        s2[j]+=s2[j-1];
    }
    if(k>1)
    {
        for(int i=1,j=n-1; i<=n; i++,j--)
        {
            //cout<<s2[j]<<' '<<s2[i]<<endl;
            if(s2[j]+s2[i]==s1){
                s4=s2[i];
                break;
            }
        }
        for(int i=1;i<k;i++)
            s1+=s4;
        //cout<<s1<<endl;
    }
    cout<<s1<<endl;
    return 0;
}
