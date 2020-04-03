#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char str[10],str2[4]="one",str3[4]="two",str4[10]="three";
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        l=strlen(str);
        if(l==3)
        {
            if((str[0]==str2[0]&&str[1]==str2[1])||(str[0]==str2[0]&&str[2]==str2[2])||(str[1]==str2[1]&&str[2]==str2[2]))
            {
                printf("1\n");
            }
            else if((str[0]==str3[0]&&str[1]==str3[1])||(str[0]==str3[0]&&str[2]==str3[2])||(str[1]==str3[1]&&str[2]==str3[2]))
            {
                printf("2\n");
            }
        }
        else if(l==5)
        {
            if((str[0]==str4[0]&&str[1]==str4[1]&&str[2]==str4[2]&&str[3]==str4[3])||(str[0]==str4[0]&&str[1]==str4[1]&&str[2]==str4[2]&&str[4]==str4[4])||(str[0]==str4[0]&&str[1]==str4[1]&&str[3]==str4[3]&&str[4]==str4[4])||(str[0]==str4[0]&&str[2]==str4[2]&&str[3]==str4[3]&&str[4]==str4[4])||(str[1]==str4[1]&&str[2]==str4[2]&&str[3]==str4[3]&&str[4]==str4[4]))
            {
                printf("3\n");
            }
        }
    }
    return 0;
}
