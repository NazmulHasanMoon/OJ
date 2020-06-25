#include<bits/stdc++.h>
#include<set>
using namespace std;
#define sz 100000
int a[sz],p[sz],x[sz],z[sz];
int main()
{
    int n,L;
    set<int>s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s.insert(a[i]);
    }
    set<int>::iterator it=s.begin();
    int c(0);
    ///L=s.size();
    for(;it!=s.end();it++)
    {
        int t(0),k(0),y(0);
        bool T(1);
        for(int j=0;j<n;j++){
            if(*it==a[j])
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
            x[c]=*it;
            c++;
        }
    }
    printf("%d\n",c);
    for(int i=0;i<c;i++)
        printf("%d %d\n",x[i],z[i]);
    return 0;
}
