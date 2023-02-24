#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d multiplied by 2 = %d\n",n,n<<1);//left shift
    printf("%d divided by 2 = %d\n",n,n>>1);//right shift
    return 0;
}
/*Enter a number:12
12 multiplied by 2 = 24
12 divided by 2 = 6*/
