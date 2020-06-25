#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    char s[n+2];
    gets(s);
    int m,c,l=strlen(s);
    m=c=0;
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
            c++;
        if(isspace(s[i])||i==l-1)
        {
            if(m<c)
                m=c;
            c=0;
        }
    }
    cout<<m<<endl;
    return 0;
}
