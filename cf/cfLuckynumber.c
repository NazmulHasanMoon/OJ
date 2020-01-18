#include<stdio.h>
#define sz 7000
int rem[sz];
int main()
{
    long long i,j,k,l,n;
    while(scanf("%I64d",&n)!=EOF)
    {
        /*if(n%4==0||n%7==0||n%47==0)
        {
            printf("YES\n");
        }
        else
        {*/
            i=0;
            k=0;
            while(n!=0)
            {
                rem[i]=n%10;
                //if(rem[i]!=4||rem[i]!=7)
                    //break;
                n=n/10;
                i++;

            }
            for(j=0;j<i;j++)
            {
                if(rem[j]==4||rem[j]==7){
                    k++;
                }
                else{
                    k=0;
                    break;
                }
            }
            if(k==i)
                printf("YES\n");

            else
                printf("NO\n");
        //}
    }
    return 0;
}
