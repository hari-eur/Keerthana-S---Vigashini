#include <stdio.h>
#include <math.h>

int main()
{
    long int count=0,num,rem,m,arr[10];
    printf("Enter a number:");
    scanf("%ld",&num);
    m=num;    
    while(m>0)
    {
        rem = m%2;
        arr[count]=rem;
        m=m/2;
        count++;
        
    }
    for(int j=count-1;j>=0;j--){
        if(arr[j]==1)
        {
            printf("msb=%0.f",pow(2,j));
             return 0;
        }

    }
   
}
/*sample i/o
  Enter a number: 10
  msb=8
  */
