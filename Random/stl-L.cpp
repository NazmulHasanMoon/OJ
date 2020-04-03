#include<bits/stdc++.h>
using namespace std;

struct cmp
{
    int m,d;
    long long y;
    string ch;
};
int main()
{
    struct cmp x[110];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string c;
        int dd,mm;
        long long yy;

        cin>>c>>dd>>mm>>yy;
        x[i].ch=c;
        x[i].m=mm;
        x[i].y=yy;
        x[i].d=dd;
    }
    if(n>1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(x[i].y<x[j].y)
                {
                    swap(x[i].y,x[j].y);
                    swap(x[i].d,x[j].d);
                    swap(x[i].m,x[j].m);
                    swap(x[i].ch,x[j].ch);
                }
                else if(x[i].y==x[j].y)
                {
                    if(x[i].m<x[j].m)
                    {
                        swap(x[i].y,x[j].y);
                        swap(x[i].d,x[j].d);
                        swap(x[i].m,x[j].m);
                        swap(x[i].ch,x[j].ch);
                    }
                    else if(x[i].m==x[j].m)
                    {
                        if(x[i].d<x[j].d)
                        {
                            swap(x[i].y,x[j].y);
                            swap(x[i].d,x[j].d);
                            swap(x[i].m,x[j].m);
                            swap(x[i].ch,x[j].ch);
                        }
                    }
                }
            }
        }
    }
    cout<<x[0].ch<<endl<<x[n-1].ch<<endl;
    return 0;
}
