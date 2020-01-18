#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 104
typedef long long ll;
char c[sz];
int main()
{
    sf("%s",c);
    int j(0);
    vector<int>v;
    for(int i=0; c[i]!='\0'; i++)
    {
        if(c[i]=='Q')
            v.push_back(i),j=i;
    }
    int s(0);
    for(auto i:v)
    {
        if(i<j){
            //cout<<i+1<<y<<endl;
            for(int k=i+1; k<j; k++)
            {
                if(c[k]=='A')
                {
                    for(int l=k+1;l<=j;l++)
                    {
                        if(c[l]=='Q')
                            s++;
                    }
                }
            }
        }
    }
    pf("%d\n",s);
    return 0;
}
