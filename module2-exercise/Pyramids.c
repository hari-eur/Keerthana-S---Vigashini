//2. Write a program to print full, inverted, half pyramid(rows = 7) using while and for loop(nested)


#include<stdio.h>
#include<string.h>
void pyramid(int n);
void invertedPyramid(int n);
void halfPyramid(int n);
int main()
{
    int rows,i=0;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    pyramid(rows);
    halfPyramid(rows);
    invertedPyramid(rows);
    return 0;
}
void pyramid(int n)
{
    printf("\n Full Pyramid\n");

    int i=0;
     while(i<=n)
    {
        for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
        i++;
    }
}

void halfPyramid(int n)
{
       int  i=0;
        printf("\n Half Pyramid\n");
        while(i<=n)
    {
       
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
        i++;
    }
      printf("\n");
    
}
void invertedPyramid(int n)
{
     int i=0;
     printf("\n Inverted Pyramid\n");
        while(i<=n)
    {
        for(int k=n-i;k<n;k++)
        {
            printf(" ");
        }
        for(int j=0;j<n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
        i++;
    }
}
/* Sample i/o
enter number of rows
7

 Full Pyramid
       
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 

 Half Pyramid

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 


 Inverted Pyramid
* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 
*/
