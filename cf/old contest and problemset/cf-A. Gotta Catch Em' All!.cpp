#include<bits/stdc++.h>
#include<limits.h>
#define sz 100005
#define ss 11
#include<cstring>
using namespace std;
char c[sz];
int x[ss];
int main()
{
    int i,j,k,l;
    //char c1[11]="Bulbasaur";
    //while(scanf("%s",c)!=EOF)
    //{
    scanf("%s",c);
        l=0;
        int s=0,m;
        m=INT_MAX;
        for(i=0,j=0;c[i]!='\0';i++)
        {
            if(c[i]=='B')
                x[0]++;
            else if(c[i]=='u')
                x[1]++;
            else if(c[i]=='l')
                x[2]++;
            else if(c[i]=='b')
                x[3]++;
            else if(c[i]=='a')
                x[4]++;
            else if(c[i]=='s')
                x[5]++;
            else if(c[i]=='r')
                x[6]++;
        }
        x[1]=x[1]/2;x[4]=x[4]/2;
        for(j=0;j<7;j++)
        {
            if(m>x[j])
                m=x[j];
        }
        cout<<m<<endl;
    //}
    return 0;
}

