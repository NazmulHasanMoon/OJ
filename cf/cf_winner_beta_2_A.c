#include<stdio.h>
#include<string.h>
#define sz 1004
#define ss 36
char c[sz][ss],ch[sz][ss],str[ss];
int x[sz],y[sz];
int main()
{
	int i,j,k,l,m,n,max,d,s;
	scanf("%d",&n);

		getchar();
		max=-32000;
		for(i=0;i<n;i++)
		{
			scanf("%s %d",c[i],&x[i]);
			getchar;
		}
		for(i=0,k=0;i<n;i++)
		{
			//puts(c[i]);
			for(j=0;j<n;j++)
			{
				if(strcmp(c[i],c[j])==0)
				{
					if(i!=j)
					break;
					else
					{
						strcpy(ch[k],c[i]);
						k++;
						break;
					}
				}
			}

		}
		for(i=0,l=0;i<k;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(strcmp(ch[i],c[j])==0)
				{
					s+=x[j];
				}


			}
			if(max<s)
                max=s;

		}
		//printf("%d\n",max);
		for(i=0,l=0;i<k;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(strcmp(ch[i],c[j])==0)
				{
					s+=x[j];
					if(s<max)
                    {
                        l++;
                        y[i]=n+l;
                    }
				}
			}
			if(s==max)
            {
                y[i]=i+l;
            }

		}
        for(i=0;i<k-1;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(y[i]>y[j])
				{
					d=y[i];
					y[i]=y[j];
					y[j]=d;
					strcpy(str,ch[i]);
					strcpy(ch[i],ch[j]);
					strcpy(ch[j],str);
				}
			}
		}
	    puts(ch[0]);
	return 0;
}


