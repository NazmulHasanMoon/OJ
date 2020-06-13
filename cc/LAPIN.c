#include<stdio.h>
#define sf scanf
#define pf printf
int getlen(char* c)
{
    int i=0;
    for(;c[i]!='\0';i++);
    return i;

}
int main()
{
    int t;
    sf("%d",&t);
    char ch[1001];
    while(t--)
    {
        sf("%s",ch);
        int arr1[27]={0},arr2[27]={0};
        int len=getlen(ch)-1;
        int i=0;
        int flag=1;
        //pf("%d\n",len);
        while(i<len)
        {
            arr1[ch[i]-'a']++;
             arr2[ch[len]-'a']++;
            i++,len--;
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)pf("YES\n");
        else pf("NO\n");
    }
    return 0;
}
