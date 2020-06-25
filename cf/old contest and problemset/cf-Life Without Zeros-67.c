#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sz 100
char c[sz],ch[sz],x[sz],y[sz];
int rev[sz];
int main()
{
    long long i,j,s1,s2,n,m,rem,s3,l;
    scanf("%s",c);
    getchar();
    n=atoi(c);
    scanf("%s",ch);
    getchar();
    m=atoi(ch);
    s1=n+m;
    //printf("%I64d\n",s1);
    i=0;
    l=s1;
    while(l!=0)
    {
        rem=l%10;
        if(rem>0){
            rev[i]=rem;
            //printf("%c",rev[i]);
            i++;
        }
        l/=10;
        //i++;
    }
    s3=0;
    for(j=i-1;j>=0;j--)
    {
        s3=s3*10+rev[j];
    }
    //rev[i]='\0';
    /*strrev(rev);
    puts(rev);
    s3=atoi(rev);*/
    //printf("s1=%I64d s3=%I64d\n",s1,s3);
    for(i=0,j=0;i<strlen(c);i++)
    {
        if(c[i]!='0'){
            x[j]=c[i];
            j++;
        }
    }
   // puts(x);
    n=atoi(x);
    for(i=0,j=0;i<strlen(ch);i++)
    {
        if(ch[i]!='0')
        {
            y[j]=ch[i];
            j++;
        }
    }
    m=atoi(y);
    s2=n+m;
    //printf("s2=%I64d\n",s2);
    if(s2==s3)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
