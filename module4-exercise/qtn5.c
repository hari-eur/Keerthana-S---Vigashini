 /*5.Write a C program that dynamically allocates an array of integers using either malloc or calloc, populates it with values entered by the user, and then calculates and prints the sum of all the values in the array.
 The program should then use the free function to deallocate the memory used by the array*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int size ;
    printf("Enter size of array \n");
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    int i;
    printf("Enter %d elements into the array \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(i=0;i<size;i++)
    {
        sum +=arr[i];
    }
    printf("sum of array elements: %d\n ",sum);
    free(arr);
    return 0;
}
/*
Sample i/o:
Enter size of array 
4
Enter 4 elements into the array 
1 2 3 4
sum of array elements: 10
*/
