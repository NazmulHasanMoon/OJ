#include<bits/stdc++.h>
using namespace std;
#define sz 25
char s[sz],c[sz],ch[sz];
int main()
{
    map<string,string>mp;
    while(1){
        cin.getline(s,25);
        if(s[0]=='\0')
            break;
        int j,k,l=strlen(s);
        bool t(1);
        j=0,k=0;
        for(int i=0;i<l;i++){
            if(isspace(s[i]))
                t=0;
            if(t)
                c[j++]=s[i];
            else{
                if(!isspace(s[i]))
                ch[k++]=s[i];
            }
        }
        c[j]='\0',ch[k]='\0';
        //cout<<c<<endl<<ch<<endl;;
        mp[ch]=c;
    }
    //cout<<mp[ch];
    while(scanf("%s",s)!=EOF)
    {
        if(mp.find(s)!=mp.end())
            cout<<mp[s]<<endl;
        else
            cout<<"eh\n";
    }
    return 0;
}
