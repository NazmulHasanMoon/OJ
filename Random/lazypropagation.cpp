#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
#define pb()   pushback()
struct info
{
    int prop, sum;
} tree[sz * 4];
int a[sz];
void update(int node, int b, int e, int i, int j, int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) ///􀀖নােডর 􀀖র􀀲 আপেডেটর 􀀖রে􀀲র িভতের
    {
        tree[node].sum += ((e - b + 1) * x); ///িনেচ 􀀖নাড আেছ e-b+1 িট, তাই e-b+1 বার x 􀀖যাগ হেব এই 􀀖রে􀀲
        tree[node].prop += x; ///িনেচর 􀀖নাড􀀴েলার সােথ x 􀀖যাগ হেব
        cout<<node<<'='<<tree[node].sum<<'\n';
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
    ///cout<<node<<'-'<<tree[node].sum<<' '<<Left<<'='<<tree[Left].sum<<' '<<Right<<'='<<tree[Right].sum<<' '<<(e-b+1)<<'='<<tree[node].prop<<'\n';
///উপের উঠার সময় পেথর 􀀖নাড􀀴েলা আপেডট হেব
///বাম আর ডান পােশর সাম ছাড়াও 􀀖যাগ হেব িনেচ অিতির􀁉 􀀖যাগ হওয়া মান
}
int query(int node,int b,int e,int i,int j,int carry=0)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node].sum+carry*(e-b+1);
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    int p=query(left,b,mid,i,j,carry+tree[node].prop);
    int q=query(right,mid+1,e,i,j,carry+tree[node].prop);
    cout<<carry<<'+'<<tree[node].prop<<'\n';
    return p+q;
}
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum=a[b];
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
    /// cout<<node<<' '<<tree[node].sum<<'*';
}
int main()
{
    faster
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    build(1,1,n);
    int index1,index2,newvalue;
    //cin>>index1,index2>>newvalue;
    update(1,1,n,2,3,3);
    cout<<query(1,1,n,3,4)<<endl;
    return 0;
}

