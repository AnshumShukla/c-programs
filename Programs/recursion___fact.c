#include<stdio.h>
int factt(int);
int fact=1;
void main()
{
    int n,fact;
    
    printf(" enter the no of which you want factorial :");
    scanf("%d",&n);
       
    fact = factt(n);
    printf(" factorial is : %d",&fact);

}
 int factt(int n)
 {
     if (n>0)
     {
     fact=fact*n;
     n--;
     factt(n);
     }
     return fact;
 }