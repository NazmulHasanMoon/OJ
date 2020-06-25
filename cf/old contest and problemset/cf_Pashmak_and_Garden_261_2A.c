#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,y3,y4,x3,x4,i,j;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
        if(x1<=0&&y1<=0&&x1==y1&&x2>0&&y2>0&&x2==y2)
        {
            x3=x1;
            y3=x2;
            x4=y2;
            y4=x1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x2<=0&&y2<=0&&x2==y2&&x1>0&&y1>0&&x1==y1)
        {
            x3=y1;
            y3=x2;
            x4=x2;
            y4=x1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x1<=0&&y1<=0&&x2<=0&&x1==x2&&y1==x2&&y2>0)
        {
            x3=y2;
            y3=x2;
            x4=y2;
            y4=y2;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x2<=0&&y2<=0&&x1<=0&&x1==x2&&x2==y2&&y1>0)
        {
            x3=y1;
            y3=y1;
            x4=y1;
            y4=x2;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x1<=0&&y1<=0&&x2>0&&y2<=0&&x1==y1&&y1==y2)
        {
            x3=x1;
            y3=x2;
            x4=x2;
            y4=x2;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x1>0&&y1<=0&&x2<=0&&y2<=0&&y1==x2&&x2==y2)
        {
            x3=x1;
            y3=x1;
            x4=y1;
            y4=x1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&y1<0&&x2==0&&y2>0&&y1==-(y2))||(x1==0&&y1>0&&x2==0&&y2<0&&y1==-(y2)))
        {
            if(y1<0){
                x3=y2-y1;
                y3=y1;
                x4=x3;
                y4=y2;
            }
            else if(y2<0){
                x3=y1-y2;
                y3=y1;
                x4=x3;
                y4=y2;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1<0&&y1==0&&x2>0&&y2==0&&x1==-(x2))||(x1>0&&y1==0&&x2<0&&y2==0&&x1==-(x2)))
        {
            if(x1<0){
                y3=x2-x1;
                x3=x1;
                x4=x2;
                y4=y3;
            }
            else if(x2<0){
                y3=x1-x2;
                x3=x1;
                y4=y3;
                x4=x2;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1>0&&y1<0&&x2>0&&x2==x1&&y2>0&&y1==-(y2))||(x1>0&&y1>0&&x2>0&&x1==x2&&y2<0&&y1==-(y2)))
        {
            if(y1<0){
                x3=(y2-y1)+x1;
                y3=y1;
                x4=x3;
                y4=y2;
            }
            else if(y2<0){
                x3=(y1-y2)+x1;
                y3=y1;
                x4=x3;
                y4=y2;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1<0&&y1>0&&x2>0&&y2>0&&y1==y2&&x1==-(x2))||(x1>0&&y1>0&&x2<0&&y2>0&&y1==y2&&x1==-(x2)))
        {
            if(x1<0){
                y3=(x2-x1)+y1;
                x3=x1;
                x4=x2;
                y4=y3;
            }
            else if(x2<0){
                y3=(x1-x2)+y1;
                x3=x1;
                y4=y3;
                x4=x2;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&y1>0&&x2>0&y2>0&&x2-x1==y2-y1)||(x1>0&&y1==0&&x2>0&y2>0&&x2-x1==y2-y1)||(x1==0&&y1<0&&x2<0&y2<0&&x2-x1==y2-y1)||(x1<0&&y1==0&&x2<0&y2<0&&x2-x1==y2-y1)||(x1==0&&y1>0&&x2<0&y2>0&&x2-x1==-(y2-y1))||(x1>0&&y1==0&&x2>0&y2<0&&x2-x1==-(y2-y1))||(x1==0&&y1<0&&x2>0&y2<0&&x2-x1==-(y2-y1))||(x1<0&&y1==0&&x2<0&y2>0&&x2-x1==-(y2-y1)))
        {
            x3=x1;y3=y2;x4=x2;y4=y1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1>0&&y1>0&&x2>0&&y2>0&&x1==x2&&(y1-y2==x1||y1-y2==-x1))||(x1<0&&y1<0&&x2<0&&y2<0&&x1==x2&&(y1-y2==x1||y1-y2==-x1))||(x1>0&&y1<0&&x2>0&&y2<0&&x1==x2&&(y1-y2==x1||y1-y2==-x1))||(x1<0&&y1>0&&x2<0&&y2>0&&x1==x2&&(y1-y2==x1||y1-y2==-x1)))
        {
            x3=0;x4=0;y3=y1;y4=y2;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1>0&&y1>0&&x2>0&&y2>0&&y1==y2&&(x1-x2==y1||x1-x2==-y1))||(x1>0&&y1<0&&x2>0&&y2<0&&y1==y2&&(x1-x2==y1||x1-x2==-y1))||(x1<0&&y1<0&&x2<0&&y2<0&&y1==y2&&(x1-x2==y1||x1-x2==-y1))||(x1<0&&y1>0&&x2<0&&y2>0&&y1==y2&&(x1-x2==y1||x1-x2==-y1)))
        {
            x3=x1;x4=x2;y3=0;y4=0;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&x2==0&&((y1>0&y2>0)||(y1<0&&y2<0))&&y1!=y2))
        {
            if(y1>y2)
            {
                x3=y1-y2;x4=x3;y3=y2;y4=y1;
            }
            else
            {
                x3=y2-y1;x4=x3;y3=y2;y4=y1;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(y1==0&&y2==0&&((x1>0&&x2>0)||(x1<0&&x2<0))&&x1!=x2)
        {
            if(x1>x2)
            {
                y3=x1-x2;y4=y3;x3=x2;x4=x1;
            }
            else
            {
                y3=x2-x1;y4=y3;x3=x2;x4=x1;
            }
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(x2==y1&&y2==x1)
        {
            x3=x1;x4=x2;y3=y2;y4=y1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);

        }
        else if((x1==x2&&x2==y2&&y1==0)||(x1==x2&&x2==y1&&y2==0))
        {
            x3=0;y3=x1;x4=0;y4=0;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((y1==y2&&x2==y2&&x1==0)||(y1==y2&&x1==y2&&x2==0))
        {
            x3=0;y3=0;x4=y1;y4=0;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1>0&&x2>0&&y1<0&&y1==y2)||((x1>0&&x2>0&&x1!=x2&&y1>0&&y1==y2)||(x1<0&&x2<0&&x1!=x2&&y1>0&&y1==y2)))
        {
            x3=x1;x4=x2;
            if(x1>x2)
                y3=x1-x2+y1;
            else
                y3=x2-x1+y1;
            y4=y3;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1-x2==y1-y2)||(x1-x2==-(y1-y2)))
        {
            x3=x1;y3=y2;x4=x2;y4=y1;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if(((x1<0&&x2>0)||(x2<0&&x1>0))&&((y1>0&&y1==y2)||(y1<0&&y1==y2)))
        {
            x3=x1;x4=x2;
            if(x2>0)
                y3=x2-x1+y1;
            else
                y3=x1-x2+y1;
            y4=y3;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }

        else if((x1>0&&x2>0&&x1!=x2&&y1<0&&y1==y2)||(x1<0&&x2<0&&x1!=x2&&y1<0&&y1==y2))
        {
            x3=x1;x4=x2;
            if(x1>x2)
                y3=x2-x1+y1;
            else
                y3=x1-x2+y1;
            y4=x3;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&x2>0&&y1>0&&y1==y2)||(x1>00&&x2==0&&y1>0&&y1==y2)||(((x1==0&&x2<0)||(x1<0&&x2==0))&&y1<0&&y1==y2))
        {
            x3=x1;x4=x2;y3=x2+y1;y4=y3;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&x2<0&&y1>0&&y1==y2)||(x1<0&&x2==0&&y1>0&&y1==y2)||(((x1==0&&x2>0)||(x1>0&&x2==0))&&y1<0&&y1==y2))
        {
            x3=x1;x4=x2;y3=-x2+y1;y4=y3;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else if((x1==0&&x2<0&&y1>0&&y1==y2)||(x1<0&&x2==0&&y1>0&&y1==y2))
        {
            x3=x1;x4=x2;y3=-x2;y4=-x2;
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
