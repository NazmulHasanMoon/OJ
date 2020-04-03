#include<stdio.h>
#include<conio.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
int main()
{
 int arr[30];
 int i,size;
 printf("\n\t------- Merge sorting method -------\n\n");
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 for(i=0; i<size; i++)
 {
   printf("Enter %d element : ",i+1);
   scanf("%d",&arr[i]);
 }
 part(arr,0,size-1);
 printf("\n\t------- Merge sorted elements -------\n\n");
 for(i=0; i<size; i++)
 printf("%d ",arr[i]);
 getch();
 return 0;
}


void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
    printf("\n%d %d %d\n",min,mid,max);
   part(arr,mid+1,max);
  // printf("\n**%d %d %d\n",min,mid,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m;
  j=min;
  m=mid+1;
  printf("\n**%d %d %d\n",j,mid,max);
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
     printf("***tmp[%d]=%d ",i,tmp[i]);
  }
  printf("\n");
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         printf("***tmp[%d]=%d ",i,tmp[i]);
         i++;
     }
     printf("\n");
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        printf("***tmp[%d]=%d ",i,tmp[i]);
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
