/*2) Write structure with below mentioned variables and make the sizeof struct return 8 bytes only.But it should take input for all the below values and print the same. 

Variables in the structure: 

Hours 
Minutes 
Seconds 
Day 
Month  
Year */

#include <stdio.h>

struct Time {
     short hours;
     short minutes;
     short seconds;
     short day;
     short month;
     short year;
};

int main() {
    struct Time t;
    printf("Enter the values \n");
    scanf("%hu %hu %hu %hu %hu %hu", &t.hours, &t.minutes, &t.seconds, &t.day, &t.month, &t.year);
    printf("Time : %hu:%hu:%hu\n", t.hours, t.minutes, t.seconds);
    printf("Date : %hu-%hu-%hu\n", t.day, t.month, t.year);
    printf("Size of struct: %lu bytes\n", sizeof(t));
    return 0;
}

/*
Enter the values
11 57 4 07 04 2023
Time : 11:57:4
Date : 7-4-2023
Size of struct: 12 bytes

*/
