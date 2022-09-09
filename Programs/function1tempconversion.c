#include<stdio.h>
void temp(); // function declaretion
void main()
{
    
    temp(); // function calling
}
 void temp() // function definition
 {
     float X,Y;

     printf("enter the temoersture in c :");
     scanf(" %f",&X);
      Y= (float) 1.8*X +32;
      printf("  temp in farenhiet is : %f",Y);
 }
