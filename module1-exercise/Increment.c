#include <stdio.h>
#include <math.h>

int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i++);
        
    }
    printf("\n");
    while(j<=n)
    {
        printf("%d\t",++j);
        
    }
    return 0;
}
/*output
8
0       1       2       3       4       5       6       7       8
1       2       3       4       5       6       7       8       9
*/
