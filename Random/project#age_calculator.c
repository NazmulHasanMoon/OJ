#include<stdio.h>
int main()
{
    int n,i,total_marks,j,x;
    char c[1000][3],T1,T2;
    int ID[1000],t2;
    float marks[1000],point[1000],t3,t1;
    printf("Generally the gradeing stystem are different in University & school/college.In University the maximum grade point is 4.00 but in school/college the maximum grade point is 5.00\nSo,if you want to caluculate the result for the university student/like university gradeing system Plaease Press 1 :\nElse Press 2,if you want to calculate the result like school/college's grading system.:\n");
    scanf("%d",&x);
    if(x==1)
    {

        printf("Please enter total student number:\n");
        scanf("%d",&n);
        printf("Please enter Total marks of the examination:\n");
        scanf("%d",&total_marks);
        for(i=0;i<n;i++)
        {
            printf("Please enter Student ID/Roll for %d\n",i+1);
            scanf("%d",&ID[i]);
            printf("Please enter the marks for %d no. student\n",i+1);
            scanf("%f",&marks[i]);
            if(marks[i]>=(total_marks*80/100.0))
            {
                c[i][0]='A';
                c[i][1]='+';
                point[i]=4.0;
            }
            else if(marks[i]>=(total_marks*75/100.0)&&marks[i]<(total_marks*80/100.0))
            {
                c[i][0]='A';
                c[i][1]=' ';
                point[i]=3.75;
            }
            else if(marks[i]<(total_marks*75/100.0)&&marks[i]>=(total_marks*70/100.0))
            {
                c[i][0]='A';
                c[i][1]='-';
                //printf("A-\n");
                point[i]=3.50;
            }
            else if(marks[i]<(total_marks*70/100.0)&&marks[i]>=(total_marks*65/100.0))
            {
                c[i][0]='B';
                c[i][1]='+';
                //printf("B+\n");
                point[i]=3.25;
            }
            else if(marks[i]<(total_marks*65/100.0)&&marks[i]>=(total_marks*60/100.0))
            {
                c[i][0]='B';
                c[i][1]=' ';
                //printf("B\n");
                point[i]=3.0;
            }
            else if(marks[i]<(total_marks*60/100.0)&&marks[i]>=(total_marks*55/100.0))
            {
                c[i][0]='B';
                c[i][1]='-';
                //printf("B-\n");
                point[i]=2.75;
            }
            else if(marks[i]<(total_marks*55/100.0)&&marks[i]>=(total_marks*50/100.0))
            {
                c[i][0]='C';
                c[i][1]='+';
                //printf("C+\n");
                point[i]=2.50;
            }
            else if(marks[i]<(total_marks*50/100.0)&&marks[i]>=(total_marks*45/100.0))
            {
                c[i][0]='C';
                c[i][1]=' ';
                //printf("C\n");
                point[i]=2.25;
            }
            else if(marks[i]<(total_marks*45/100.0)&&marks[i]>=(total_marks*40/100.0))
            {
                c[i][0]='D';
                c[i][1]=' ';
                //printf("D\n");
                point[i]=2.00;
            }
            else if(marks[i]<(total_marks*40/100.0))
            {
                c[i][0]='F';
                c[i][1]=' ';
                //printf("%F\n");
                point[i]=0.00;
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(marks[i]<marks[j])
                {
                    t1=marks[i];
                    marks[i]=marks[j];
                    marks[j]=t1;

                    t2=ID[i];
                    ID[i]=ID[j];
                    ID[j]=t2;

                    t3=point[i];
                    point[i]=point[j];
                    point[j]=t3;

                    T1=c[i][0];
                    T2=c[i][1];
                    c[i][0]=c[j][0];
                    c[i][1]=c[j][1];
                    c[j][0]=T1;
                    c[j][1]=T2;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("\n\n%dno. in the examination ID/Roll= %d  marks= %.2f Point= %.2f Grade= %c%c\n",i+1,ID[i],marks[i],point[i],c[i][0],c[i][1]);
        }
    }
    if(x==2)
    {
        printf("Please enter total student number:\n");
        scanf("%d",&n);
        printf("Please enter Total marks of the examination:\n");
        scanf("%d",&total_marks);
        for(i=0;i<n;i++)
        {
            printf("Please enter Student ID/Roll for %d\n",i+1);
            scanf("%d",&ID[i]);
            printf("Please enter the marks for %d no. student\n",i+1);
            scanf("%f",&marks[i]);
            if(marks[i]>=(total_marks*80/100.0))
            {
                c[i][0]='A';
                c[i][1]='+';
                point[i]=5.0;
            }
            else if(marks[i]>=(total_marks*70/100.0)&&marks[i]<(total_marks*80/100.0))
            {
                c[i][0]='A';
                c[i][1]=' ';
                point[i]=4.0;
            }
            else if(marks[i]<(total_marks*70/100.0)&&marks[i]>=(total_marks*60/100.0))
            {
                c[i][0]='A';
                c[i][1]='-';
                //printf("A-\n");
                point[i]=3.50;
            }
            else if(marks[i]<(total_marks*60/100.0)&&marks[i]>=(total_marks*50/100.0))
            {
                c[i][0]='B';
                c[i][1]=' ';
                point[i]=3.0;
            }
            else if(marks[i]<(total_marks*50/100.0)&&marks[i]>=(total_marks*40/100.0))
            {
                c[i][0]='C';
                c[i][1]=' ';
                point[i]=2.0;
            }
            else if(marks[i]<(total_marks*40/100.0)&&marks[i]>=(total_marks*33/100.0))
            {
                c[i][0]='D';
                c[i][1]=' ';
                point[i]=1.0;
            }
            else if(marks[i]<(total_marks*33/100.0))
            {
                c[i][0]='F';
                c[i][1]=' ';
                //printf("%F\n");
                point[i]=0.00;
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(marks[i]<marks[j])
                {
                    t1=marks[i];
                    marks[i]=marks[j];
                    marks[j]=t1;

                    t2=ID[i];
                    ID[i]=ID[j];
                    ID[j]=t2;

                    t3=point[i];
                    point[i]=point[j];
                    point[j]=t3;

                    T1=c[i][0];
                    T2=c[i][1];
                    c[i][0]=c[j][0];
                    c[i][1]=c[j][1];
                    c[j][0]=T1;
                    c[j][1]=T2;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("\n\n%dno. in the examination ID/Roll= %d  marks= %.2f Point= %.2f Grade= %c%c\n",i+1,ID[i],marks[i],point[i],c[i][0],c[i][1]);
        }
    }
    return 0;
}

