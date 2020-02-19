#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<string>vec;
struct trie
{
    bool endmark;
    trie *next[11];
    trie()
    {
        endmark=false;
        for(int i=0;i<=9;i++)
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
    }
    curr->endmark=true;
}
bool search(string s,int len)
{
    ///cout<<s<<endl;
    trie *temp=root;
    for(int i=0;i<len;i++)
    {
        int id=s[i]-'0';
        ///cout<<temp->endmark<<' ';
        if(temp->next[id]==NULL)
            return false;
        temp=temp->next[id];
        if(temp->endmark)
            return temp->endmark;

    }
   /// cout<<endl;
    return temp->endmark;
}
void del(trie *curr)
{
    for(int i=0;i<=9;i++)
    {
        if(curr->next[i])
            del(curr->next[i]);
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
            cin>>x,vec.push_back(x),x.clear();
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            if(!search(vec[i],vec[i].size()))
                insert(vec[i],vec[i].size());
            else
            {
                ans=false;
                break;
            }
        }
        cout<<((ans)?"YES\n":"NO\n");
        del(root);
    }
    return 0;
}
