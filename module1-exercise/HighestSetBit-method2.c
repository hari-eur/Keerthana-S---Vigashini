#include <stdio.h>
#include <math.h>

int main()
{
    long int count=0,m;
    printf("Enter a number:");
    scanf("%ld",&m);
    if(m==0)
    {
        return 0;
    }
    m=num;    
    m=m/2;
    while(m!=0)
    {
        m=m/2;
        count++;
        
    }
    printf("msb =%d",1<<count);
   
}
/*sample i/o
  Enter a number: 10
  msb=8
  */
