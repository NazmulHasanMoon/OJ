#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define sz 100000
char c[sz],ch[sz];
int main()
{
    int i,j,k,l;
    while(scanf("%s",c)!=EOF)
    {
        for(i=0,k=0;i<strlen(c);i++)
        {
            if(c[i]!='B'&&c[i]!='C'&&c[i]!='D'&&c[i]!='F'&&c[i]!='G'&&c[i]!='0'&&c[i]!='K'&&c[i]!='P'&&c[i]!='Q'&&c[i]!='R'&&c[i]!='4'&&c[i]!='6'&&c[i]!='7'&c[i]!='9')
                k++;
        }
        //printf("%d\n",k);
        strcpy(ch,c);
        if(k==strlen(c))
        {
            for(i=strlen(c),j=0;i>=0;i--,j++)
                ch[j]=c[i];
            l=strcmp(c,ch);
            if(l==0)
                printf("%s -- is a mirrored palindrome.\n\n",c);
            else
                printf("%s -- is a mirrored string.\n\n",c);
        }
        else
        {
            for(i=strlen(c),j=0;i>=0;i--,j++)
                ch[j]=c[i];
            if(strcmp(c,ch)==0)
                printf("%s -- is a regular palindrome.\n\n",c);
            else
                printf("%s -- is not a palindrome.\n\n",c);
        }
    }
    return 0;
}

