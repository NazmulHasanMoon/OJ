#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define pf printf
#define sf scanf
#define sz 1000
char c[sz];
int main()
{
    sf("%s",c);
    char ss[][10]={"Danil","Olya","Slava","Ann","Nikita"};
    int l=strlen(c),x=0;
    for(int i=0;i<l;i++)
    {
        if(c[i]=='D')
        {
            int j=0,k=i;
            bool t=0;
            while(j<5)
            {
                if(c[k]!=ss[0][j])
                {
                    t=1;
                    break;
                }
                j++,k++;
            }
            if(!t)
                x++,i=k-1;
        }
        else if(c[i]=='S')
        {
            int j=0,k=i;
            bool t=0;
            while(j<5)
            {
                if(c[k]!=ss[2][j])
                {
                    t=1;
                    break;
                }
                j++,k++;
            }
            if(!t)
                x++,i=k-1;
        }
        else if(c[i]=='O')
        {
            int j=0,k=i;
            bool t=0;
            while(j<4)
            {
                if(c[k]!=ss[1][j])
                {
                    t=1;
                    break;
                }
                j++,k++;
            }
            if(!t)
                x++,i=k-1;
        }
        else if(c[i]=='A')
        {
            int j=0,k=i;
            bool t=0;
            while(j<3)
            {
                if(c[k]!=ss[3][j])
                {
                    t=1;
                    break;
                }
                j++,k++;
            }
            if(!t)
                x++,i=k-1;
        }
        else if(c[i]=='N')
        {
            int j=0,k=i;
            bool t=0;
            while(j<6)
            {
                if(c[k]!=ss[4][j])
                {
                    t=1;
                    break;
                }
                j++,k++;
            }
            if(!t)
                x++,i=k-1;
        }
    }
    if(x==1)
        pf("YES\n");
    else
        pf("NO\n");
    return 0;
}
