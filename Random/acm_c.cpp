#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int n,t,i(1);
    sf("%d",&n);
    int a[100][100];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            sf("%d",&a[i][j]);
    }
    if(n<5)
        pf("0\n");
    vector<int>Q1,Q2;
    int s(0);
    list<int>mp;
    list<int>::iterator it;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2==1) Q1.push_back(a[i][j]);
            else Q2.push_back(a[i][j]);
        }
        if(i>1)
        {
            for(int k=0,c=1; k<n; k++)
            {
                mp.push_back(Q1[k]);
                mp.push_back(Q2[k]);
                if(c==5)
                {
                    mp.sort();
                    int r=1;
                    for(it=mp.begin();it!=mp.end();it++,r++){
                        if(*it!=r){
                                cout<<*it<<endl;
                            break;
                        }
                    }
                    if(r==11)
                        s++;
                    mp.pop_front();
                    mp.pop_front();
                    c=4;
                }
                c++;
            }
            if(i%2==0)
                Q1.clear();
            else
                Q2.clear();
        }

    }
    cout<<s<<endl;
    return 0;
}
