#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n,c(0),x,y,z,re=INT_MAX;
    string s,str[6]={"RGB","RBG","GRB","GBR","BGR","BRG"};
    cin>>n>>s;
    for(int i=0;i<6;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=str[i][j%3])
                c++;
        }
        if(re>c)
        {
            re=c;
            x=i;
        }
    }
    cout<<re<<'\n';
    for(int i=0,j=0;i<n;i++,j++)
    {
        if(j==3)
            j=0;
        cout<<str[x][j];
    }
    cout<<"\n";
    return 0;
}
