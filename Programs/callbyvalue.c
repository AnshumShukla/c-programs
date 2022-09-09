// call by value program
#include<stdio.h>
void swap( int a, int b);
void main()
{
    int x,y;
    printf("enter two number which you want to swap:");
    scanf("%d%d",&x,&y);
    swap(x,y);
   printf("%d\n%d\n",x,y);

}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf(" %d%d",a,b);
}