#include<bits/stdc++.h>
using namespace std;
#define ff first
int main()
{
    map<string,int>mp;
    string s;
    while(getline(cin,s)){
            //getchar();
            bool t(1);
            int l=s.size();
            transform(s.begin(),s.end(),s.begin(),::tolower);
            string c[300];
        for(int i=0,k=0,j=0;i<l;i++){
                //cout<<s[i];//
            if(!isalnum(s[i])||ispunct(s[i])||isdigit(s[i])||i==l-1){
               if(i==l-1&&!ispunct(s[i]))
                    c[k].push_back(s[i]);
                //if(ispunct(s[i]))
                if(isalnum(c[k][0])&&!ispunct(c[k][0])&&!isdigit(c[k][0]))
                    mp[c[k]]=1,k++;
               //cout<<c[k]<<endl;
               t=0,j=0;
            }
            else
                t=1;
            if(t)
                c[k].push_back(s[i]);
            //if()
              //  mp[c[k++]]=1;//cout<<c[k];

        }

    }
    //cout<<endl;
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->ff<<endl;
    return 0;
}
