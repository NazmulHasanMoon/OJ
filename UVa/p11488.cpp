#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<string>vec;
int re;
struct trie
{
    int cnt;
    trie *next[3];
    trie()
    {
        cnt=0;
        for(int i=0;i<=1;i++)
            next[i]=NULL;
    }

}*root;
void insert(string s,int len)
{
    trie *curr=root;
    for(int i=0;i<len;i++)
    {
        int id=s[i]-'0';
        if(curr->next[id]==NULL)
            curr->next[id]=new trie();
        curr=curr->next[id];
        curr->cnt++;
    }
}
void del(trie *curr,int len)
{
    for(int i=0;i<=1;i++)
    {
        if(curr->next[i]){
            ///cout<<curr->next[i]->cnt<<' '<<len<<'-'<<re<<'\n';
            re=max(re,curr->next[i]->cnt*len);
            del(curr->next[i],len+1);
        }
    }
    delete (curr);
}
int main()
{
    faster
    int t,n;
    cin>>t;
    string x;
    bool ans;
    while(t--)
    {
        root = new trie();
        vec.clear();
        cin>>n;
        ans=true;
        for(int i=0;i<n;i++)
            cin>>x,insert(x,x.size()),x.clear();
        //cout<<((ans)?"YES\n":"NO\n");
        del(root,1);
        cout<<re<<'\n';
        re=0;
    }
    return 0;
}

