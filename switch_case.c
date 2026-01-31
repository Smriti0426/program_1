#include<stdio.h>
void main()
{
    int ch,a,b;
    printf("Menu");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case 1:
        printf("%d",a+b);
        break;

        case 2:
        printf("%d",a-b);
        break;

        case 3:
        printf("%d",a*b);
        break;

        case 4:
        printf("%d",a/b);
        break;

        default:
        printf("Invalid choice");

        
    }
}