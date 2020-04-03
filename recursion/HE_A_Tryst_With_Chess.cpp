#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[12][12];
void rec(int x,int y,int n)
{
    if(n==-1)
        return;
    if(x<1||x>10||y<1||y>10)
        return;
    if(n==0){
        a[x][y]=1;
        return;
    }
    rec(x+2,y-1,n-1);
    rec(x+2,y+1,n-1);
    rec(x-2,y-1,n-1);
    rec(x-2,y+1,n-1);
    rec(x-1,y-2,n-1);
    rec(x-1,y+2,n-1);
    rec(x+1,y-2,n-1);
    rec(x+1,y+2,n-1);

}
int main()
{
    int x,y,z,re(0);
    cin>>x>>y>>z;
    rec(x,y,z);
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++){
            ///cout<<a[i][j]<<' ';
            if(a[i][j])re++;
        }
        //cout<<'\n';
    }
    cout<<re<<endl;
    return 0;
}


