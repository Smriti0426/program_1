#include<stdio.h>
void main()
{
    int a[3],b[3];
    printf("Enter 3 values for first array");
    int i;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 3 values for second array");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[i];
    for(i=0;i<=2;i++)
    {
        c[i]=a[i]+b[i];
        printf("\n%d",c[i]);
    }
} 