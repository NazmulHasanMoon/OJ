#include<bits/stdc++.h>
#include<set>
#include<vector>
#include<map>
using namespace std;
#define sz 100000
int a[sz],p[sz],z[sz];
int main()
{
    int n,L;
    set<int>x;
    map<int,vector<int> >mp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        x.insert(a[i]);
        mp[a[i]].push_back(i);
    }
    set<int>::iterator it;
    int k(0);
    for(it=x.begin();it!=x.end();it++){
        //cout<<*it;
        bool t(1);
        int r=(mp[*it][1]-mp[*it][0]);
        for(int i=1;i<mp[*it].size();i++){

            if((mp[*it][i]-mp[*it][i-1])!=r){
                t=0;
                break;
            }
        }
        if(t){
            z[k]=*it;
            p[k]=mp[*it][0];
            k++;
        }
    }
    /*sort(b,b+n);
    int c(0);
    for(int i=0;i<n;i++)
    {
        int t(0),k(0),y(0);
        bool T(1);
        for(int j=0;j<n;j++){
            if(b[i]==a[j])
            {
                if(!t)
                    y=j;
                p[k++]=j-y;
                L=j-y;
                //cout<<"L= "<<L<<" ";
                y=j;
                if(k>=3){
                    for(int l=2;l<k;l++){
                        if(p[l]!=p[l-1]){
                            T=0;
                            break;
                        }

                    }
                }
                if(!T)
                    break;
                t++;
            }
        }
        if(T)
        {
            z[c]=L;
            x[c]=b[i];
            c++;
        }
        //printf("%d %d\n",x,z);
        if(b[i]==b[i+1]){
            while(b[i]==b[i+1])
                i++;
        }
    }*/
    printf("%d\n",k);
    for(int i=0;i<k;i++)
        printf("%d %d\n",z[i],p[i]);
    return 0;
}
