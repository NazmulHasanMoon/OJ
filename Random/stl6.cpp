#include<bits/stdc++.h>
using namespace std;
#define pii pair<string,int>
#define ff first
#define ss second
bool operator<(pii a,pii b) {
	if (a.ss == b.ss)
		return a.ff < b.ff;
	else
		return a.ss < b.ss;
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        string st;
        map<string,int>mp;
        vector<pii >v;
        pii pp;
        int a,b,c;
        getline(cin,st);
        scanf("%d %d %d",&a,&b,&c);
        getchar();
        for(int j=0;j<a;j++){
            string s1;
            int x;
            cin>>s1;
            scanf("%d",&x);
            getchar();
            mp[s1]=x;
        }
        string s2;
        for(int j=0;j<b;j++){

            getline(cin,s2);
            int x,mt(0);
            scanf("%d",&x);
            getchar();
            for(int k=0;k<x;k++){
                string s3;
                int y;
                cin>>s3;
                scanf("%d",&y);
                getchar();
                if(mp.find(s3)!=mp.end())
                    mt=mt+(y*mp[s3]);
            }
            if(mt<=c)
                v.push_back({s2,mt});
        }
        sort(v.begin(),v.end());
        transform(st.begin(),st.end(), st.begin(), ::toupper);
        cout<<st<<endl;
        int j;
        if(v.empty())
            cout<<"Too expensive!\n";
        else{
            for(auto j: v)
                cout<<j.ff<<endl;
        }
        printf("\n");
    }
    return 0;
}
