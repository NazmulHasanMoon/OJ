#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define pb push_back
#define ff first
int a[50][51],n,m;
bool isSafe(int r, int c)
{
    for(int i=0;i<n;i++)
        if(a[i][c])
            return false;
	for (int i = 0;i<m;i++)
        if(a[r][i])
			return false;
	return true;
}
void nQueen(int r)
{
    for(int r=0;r<n;r++){
	for (int i = 0; i < m; i++)
	{
		if (isSafe(r, i))
		{
		    //cout<<r<<'-'<<i<<endl;
			a[r][i] = 1;
			///nQueen(r + 1);
		}
	}
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int x,y;
        x=y=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j])x++;
            }
        }
        nQueen(0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j])
                    y++;
            }
        }
        ///cout<<y<<'!';
        y-=x;
        ///cout<<y<<'\n';
        if(y%2!=0)
            cout<<"Ashish\n";
        else
            cout<<"Vivek\n";
    }
    return 0;
}
