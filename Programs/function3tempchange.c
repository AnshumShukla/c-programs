#include<stdio.h>
int temp(); //function declaration
void main()
{
    int p;
    p=temp(); // function calling
    printf(" temp in farenheit is : %d",p);

}
int temp() // function definition
{
int a,c;
printf("enter temperature in c:");
scanf("%d",&a);
 c=(int)(1.8*a)+32;
 return c;
 }
