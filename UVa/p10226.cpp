#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<string>vec;
int total;
struct trie
{
    bool endmark;
    int cnt;
    trie *next[129];
    trie()
    {
        endmark=false;
        cnt=0;
        for(int i=0;i<=127;i++)
            next[i]=NULL;
    }

}*root;
void insert_trie(string s,int len)
{
   //// cout<<s<<' '<<len<<endl;
    trie *curr=root;
    for(int i=0;i<len;i++)
    {
        int id=s[i]-0;
        if(curr->next[id]==NULL)
            curr->next[id]=new trie();
        curr=curr->next[id];
    }
    curr->endmark=true;
    curr->cnt+=1;
}
char ans[1001];
double re;
void print_with_del(trie *curr,int pos)
{
    if(curr->endmark==true)
    {
        re=double(curr->cnt*100.0)/total;
        ans[pos]='\0';
        cout<<ans<<' '<<fixed<<setprecision(4)<<re<<'\n';

    }
    for(int i=0;i<128;i++)
    {
        if(curr->next[i]){
            ans[pos]=char(i);
            print_with_del(curr->next[i],pos+1);
        }
    }
    delete (curr);
}
int main()
{
    faster
    int t,n;
    cin>>t;
    cin.ignore();
    cin.ignore();
    string x;
    while(t--)
    {
        root = new trie();
        total=0;
        while(getline(cin,x)){
            if(x.empty())
                break;
            ////cout<<x<<' '<<endl;
            insert_trie(x,x.size());
            x.clear();

            total++;
        }
        print_with_del(root,0);
        if(t)
            cout<<'\n';
    }
    return 0;
}

