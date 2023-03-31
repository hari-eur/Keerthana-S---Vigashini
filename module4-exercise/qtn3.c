//3. Create a fixed array and use pointers to transverse through elements and print the output.

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}

/* Sample i/o
1 2 3 4 5 
*/


/*
Any better ways to mentione this? *ptr=&arr[0]
*/
