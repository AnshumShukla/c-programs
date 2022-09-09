#include<stdio.h>
void main( )
{
    int i,n,*p,f=0;
    printf("enter any number for prime");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<=*p;i++)
    {
        if(*p%i==0)
        f++;
    }
        if(f==2)
        printf("%d is prime number",*p);
        else
        printf("%d is not prime number",*p);
}