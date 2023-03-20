
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
    
    do{
        printf("Enter the size of array(odd number):\n");
        scanf("%d",&n);
    }while(n%2==0);
    
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
            if(i==0)
            continue;
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
Enter the size of array(odd number):
2 
Enter the size of array(odd number):
3

Enter the array elements
4 4 4  
2 3 6 
4 4 2
Enter element to be replaced:
4
4 4 4 
2 3 6 
2 3 2 
*/
*/
