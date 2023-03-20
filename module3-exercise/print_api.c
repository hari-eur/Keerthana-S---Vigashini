/*Write complete function with macro that takes argument dynmically.
Sample Input:

        print("Welcome to %s",data);

        print("Hello to %s: Welcome to %s,data_1,data_2);

       Implent the print API in MACRO.
*/           
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#define print(fmt,...) printf(fmt,__VA_ARGS__)
int main()
{
    char data[10],data_1[10],data_2[10];
    printf("Enter the 3 data one by one\n");
    printf("Enter data\n");
    scanf("%s",&data);
    printf("Enter data_1\n");
    scanf("%s",&data_1);
    printf("Enter data_2\n");
    scanf("%s",&data_2);
    printf("****************************************\n");
    print("Welcome to %s\n",data);
    print("Hello to %s: Welcome to %s\n",data_1,data_2);
    printf("****************************************\n");
    return 0;
}
/*
Sample i/o:
Enter the 3 data one by one
Enter data
my-world
Enter data_1
you
Enter data_2
my-program
****************************************
Welcome to my-world
Hello to you: Welcome to my-program
****************************************
*/
