#include<stdio.h>
int prime(int); // to check prime using fuction
void main()
{
    int n,p;
    printf(" enter any number:");
    scanf("%d",&n);
  p=  prime(n);
  if(p==2)
  {
      printf("prime number");
  }
else{
   printf("not a prime no");
}
    
}

int prime(int a)
{
    
    // to check whether a prime no or not
    int i,cout=0;
    for(i=1;i<=a;i++)
    {
        if (a%i==0)
        
            cout++;
    }
        return cout;
        
    }
