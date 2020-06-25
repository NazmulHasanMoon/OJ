#include<cstdio>
#include<iostream>
#include<cstring>
#define sz 1000
using namespace std;
char ch[sz];
int main()
{
    int n,t,i,j,k;
    scanf("%d %d",&n,&t);
    getchar();
    scanf("%s",ch);
    for(i=1;i<=t;i++)
    {
            for(j=0;j<n-1;j++)
            {
                if(ch[j]=='B'&&ch[j+1]!='B')
                {
                    ch[j]='G';
                    ch[j+1]='B';
                    j++;
                }
            }
    }
    //for(j=0;j<n;j++)
      //  printf("%c",ch[j]);
    cout<<ch<<endl;

    return 0;
}
