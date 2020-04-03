#include<iostream>
#include<cstring>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<string>vec;
map<string,string>omap;
int total;
struct trie
{
    bool endmark;
    int cnt;
    trie *next[28];
    trie()
    {
        endmark=false;
        cnt=0;
        for(int i=0;i<=26;i++)
            next[i]=NULL;
    }

}*root;
void insert_trie(string s,int len)
{
   //// cout<<s<<' '<<len<<endl;
    trie *curr=root;
    for(int i=0;i<len;i++)
    {
        int id=s[i]-'a';
        if(curr->next[id]==NULL)
            curr->next[id]=new trie();
        curr=curr->next[id];
        curr->cnt++;
    }
    curr->endmark=true;
}
char ans[25],str[25];

void find_with_del(trie *curr,int pos,int y,int re)
{
    if(curr->endmark==true)
    {
        str[pos]='\0';
        ans[y]='\0';
        omap[str]=ans;
    }
    for(int i=0;i<27;i++)
    {
        if(curr->next[i]){
            if(re!=1){
                ans[y]=char(i+'a');
            str[pos]=char(i+'a');
            find_with_del(curr->next[i],pos+1,y+1,curr->next[i]->cnt);
            }
            else
            {
                str[pos]=char(i+'a');
                find_with_del(curr->next[i],pos+1,y,curr->next[i]->cnt);
            }
        }
    }
    delete (curr);
}
int main()
{
    ///faster
    int t,n;
    string x;
    root = new trie();
    while(cin>>x)
    {
        ///cout<<x<<'\n';
        insert_trie(x,x.size());
        vec.push_back(x);
        x.clear();
    }
    find_with_del(root,0,0,2);
    vector<string>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<' '<<omap[*it]<<'\n';
    return 0;
}
