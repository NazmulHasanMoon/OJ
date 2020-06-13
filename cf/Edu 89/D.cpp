#include<bits/stdc++.h>
using namespace std;
#define sz 10000000
int prime[sz+1];
void siv()
{
	int N=sz;
	int sq=sqrt(N);
	prime[2]=2;
	for(int i=4;i<=N;i+=2) prime[i]=2;
	for(int i=3;i<=N;i+=2){
		if(prime[i]==0){
			prime[i]=i;
			if(i<=sq)
                for(int j=i*i;j<=N;j+=i) prime[j]=i;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    siv();
    int t,a,b,c;
    cin>>t;
    vector<int>f,s;
    for(int i=0; i<t; i++)
    {
        cin>>a;
        c=a;
        int j=0;
        if(a<=2)
            f.push_back(-1),s.push_back(-1);
        else
        {
            b=1;
            int x=prime[a];
            while(a%x==0)
            {
                b*=x;
                a/=x;
            }
            if(a!=1)
                f.push_back(b),s.push_back(a);
            else
                f.push_back(-1),s.push_back(-1);
        }
    }
    t--;
    for(int i=0; i<t; i++)
        cout<<f[i]<<' ';
    cout<<f[t]<<'\n';
    for(int i=0; i<t; i++)
        cout<<s[i]<<' ';
    cout<<s[t]<<'\n';
    return 0;
}
