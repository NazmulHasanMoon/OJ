#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char c[n+1][m+2],s[n+1][m+1];
    int w,h,p,w1,w2,h1,h2,p1,p2,p3,q1,q2,q3;
    w=h=w1=w2=h1=h2=p=1;
    p1=p2=p3=q1=q2=q3=0;
    getchar();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%c",&c[i][j]);
            if((j>0&&c[i][j]==c[i][j-1]&&c[i][j]=='R')||(i>0&&c[i][0]==c[i-1][m-1]&&c[i][0]=='R'))
                p1=++w,w1=w2=1;
            else if(j>0&&c[i][j]==c[i][j-1]&&c[i][j]=='G'||(i>0&&c[i][0]==c[i-1][m-1]&&c[i][0]=='G'))
                p2=++w1,w=w2=1;
            else if(j>0&&c[i][j]==c[i][j-1]&&c[i][j]=='B'||(i>0&&c[i][0]==c[i-1][m-1]&&c[i][0]=='B'))
                p3=++w2,w=w1=1;
        }
        getchar();
    }
    //cout<<p1<<p2<<p3;
    if(p1==p2&&p2==p3)
    {
        for(int j=0; j<m; j++)
        {
            for(int i=0; i<n; i++)
            {
                if((i>0&&c[i][j]==c[i-1][j]&&c[i][j]=='R')||(j>0&&c[n-1][j-1]==c[0][j]&&c[0][j]=='R'))
                    q1=++h,h1=h2=1;//cout<<q1<<' ';
                else if((i>0&&c[i][j]==c[i-1][j]&&c[i][j]=='G')||(j>0&&c[n-1][j-1]==c[0][j]&&c[0][j]=='G'))
                    q2=++h1,h=h2=1;
                else if((i>0&&c[i][j]==c[i-1][j]&&c[i][j]=='B')||(j>0&&c[n-1][j-1]==c[0][j]&&c[0][j]=='B'))
                    q3=++h2,h=h1=1;
            }
        }
        //cout<<q1<<q2<<q3;
        if(q1==q2&&q2==q3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";

    return 0;
}
