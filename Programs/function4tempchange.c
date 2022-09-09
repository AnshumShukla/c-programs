#include<stdio.h>
int temp(int a); // function decleration
void main()
{
    int a;
    int p;
    printf(" enter temp in celsius :" );
    scanf(" %d",&a);
   p = temp(a); // function calling
   printf("%d",p);

}
 int temp( int a) // function definition
 
{
    int b;
    b = 1.8*a+32;
    return b;

}
