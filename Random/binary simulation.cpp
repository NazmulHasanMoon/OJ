#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100001
#define ll long long
char arr[sz];
int prop[sz*4];
void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        prop[node] +=1;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j);
    update(Right, mid + 1, e, i, j);

    ///tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}
void query(int node, int b, int e, int i,int carry)
{
    if (i > e || i < b)
        return ;

    if (b == i and e == i){
         prop[node] += carry ;
         if(prop[node]&1)
            pf("%d\n",'1'-arr[b]);
         else
            pf("%c\n",arr[b]);
         return;
    }

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

     query(Left, b, mid, i, carry + prop[node]);
     query(Right, mid + 1, e, i, carry + prop[node]);

    ///return p1 + p2;
}
int main()
{
    int t,n,q,x,cs(1),p,r,s;
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%s",arr);
        n=strlen(arr);
        sf("%d",&q);
        memset(prop,0,sizeof(prop));
        //cout<<n<<'-'<<q<<endl;
        pf("Case %d:\n",cs++);
        for(int i=0; i<q; i++)
        {
            char c[2];
           // getchar();
            sf("%s",c);
            //cout<<c<<endl;
            if(strcmp(c,"I")==0)
                sf("%d %d",&p,&r),update(1,0,n-1,p-1,r-1);
            else
            {
                sf("%d",&p);
                query(1,0,n-1,p-1,0);
                ////cout<<z<<endl;

            }
        }
    }
    return 0;
}

