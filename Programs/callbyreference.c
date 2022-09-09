#include<stdio.h>
void swap( int *m, int *n);
void main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);  
}
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d",*x,*y);
}