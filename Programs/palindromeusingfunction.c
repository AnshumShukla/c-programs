#include<stdio.h>
int palindrome(int);
void main()
{
    int n,t;
    printf( "enter any number :");
    scanf("%d",&n);
   t = palindrome(n);
   if (t==n)
   {
    printf(" palindrome");
   }
   else
   {
    printf("not a palindrome");
   }

}
 int palindrome(int p)
 {
    int r,rev=0;
    while (p>0)
    {
    r=p%10;
    rev= (rev*10) + r;
    p = p/10;
    }
    return rev;
 }