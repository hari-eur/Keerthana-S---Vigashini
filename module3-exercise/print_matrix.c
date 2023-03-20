
/*Write the program for following
Input:

n -> Size of matrix will always be odd number

m -> Element to be found

Output:

Replace all the occurance of m with number above it  except the elements in first row.
*/
       
       
#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,arr[10][10];
    printf("Enter the size of array(odd only):\n");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter element to be replaced:\n");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==m)
            {
                arr[i][j]=arr[i-1][j] ;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Sample i/o:
Enter the size of array(odd only):
3

Enter the array elements
1 2 3
8 5 6
5 5 5
Enter element to be replaced:
5
1 2 3 
8 2 6 
8 2 6
*/
