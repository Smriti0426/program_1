#include<stdio.h>
void main()
{
    int a[2][2],i,j;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
          printf("enter element");
          scanf("%d",&a[i][j]);
        }
    }
    printf("2 x 2 matrix is:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
}