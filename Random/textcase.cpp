#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,vv;
    string ch;
    int x,y;
    x=y=0;
    int a[1000];
    //cin>>x;
   /// cout<<(int)sqrt(x+0.0)<<endl;
   freopen("intra.txt","r",stdin);
    /*freopen("intra.txt","w",stdout);
    cin>>x;
    for(int i=1;i<=446;i++)
        cin>>a[i];
    for(int i=1;i<=446;i++)
    {
        for(int j=i+1;j<=446;j++)
            cout<<a[i]*a[j]<<'\n';
    }*/
    while(getline(cin,ch))
    {
        /*for(int i=0;ch[i]!='\0';i++)
        {
            if(((isalnum(ch[i])||(i>0&&isalnum(ch[i-1])&&ispunct(ch[i])))&&isspace(ch[i+1]))||((isalnum(ch[i])||(ispunct(ch[i])&&i>0&&isalnum(ch[i-1])))&&ch[i+1]=='\0'))
                y++;
        }*/
        x++;
        ch.clear();
    }
    cout<<"Number of words: "<<y<<"\nNumber of lines: "<<x<<'\n';
    //cout<<v.size()<<' '<<vv.size()<<endl;

 return 0;
}
