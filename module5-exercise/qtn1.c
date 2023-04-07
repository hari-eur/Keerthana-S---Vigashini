/*Write a c program with nested structure implementation with below data, 
Structure 1: Student_Detailes (Name,mailID,Mobile number,Percentage) 

Structure 2:Department(Dept Name,Struct Student_Details,TotalAveverage) 

Program takes input of all the fields above except Total Average per department. Calculate Total Average per department. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DEPARTMENTS 10
#define MAX_STUDENTS 100

struct Student_Details 
{
    char name[50];
    char mailID[50];
    char mobileNumber[50];
    char percentage[50];
};

struct Department 
{
    char deptName[50];
    struct Student_Details students[MAX_STUDENTS];
    int numStudents;
    float totalAverage;
};

main() 
{
    int ips;
    printf("Number of Inputs: ");
    scanf("%d", &ips);
    
    struct Department departments[MAX_DEPARTMENTS];
    int depts = 0;

    for (int i = 0; i < ips; i++) 
    {
        char name[50], mailID[50], mobileNumber[50], percentage[50], deptName[50];
        printf("Enter student details (Name, mailID, mobile number, percentage, department):\n");
        scanf("%s %s %s %s %s", name, mailID, mobileNumber, percentage, deptName);

        int index = -1;
        for (int j = 0; j < depts; j++) 
	{
            if (strcmp(departments[j].deptName, deptName) == 0) 
	    {
                index = j;
                break;
            }
        }
        if (index == -1) 
        {
            index = depts;
            strcpy(departments[depts].deptName, deptName);
            departments[depts].numStudents = 0;
            departments[depts].totalAverage = 0;
            depts++;
        }

        struct Student_Details student;
        strcpy(student.name, name);
        strcpy(student.mailID, mailID);
        strcpy(student.mobileNumber, mobileNumber);
        strcpy(student.percentage, percentage);
        departments[index].students[departments[index].numStudents] = student;
        departments[index].numStudents++;

        float totalPercentage = 0;
        for (int j = 0; j < departments[index].numStudents; j++) 
	{
            char *percentage = departments[index].students[j].percentage;
            int percentageValue = atoi(percentage);
            totalPercentage += percentageValue;
        }
        departments[index].totalAverage = totalPercentage / departments[index].numStudents;
    }

    printf("Number of branches: %d\n", depts);
    printf("Average percentage per Department:\n");

    for (int i = 0; i < depts; i++) 
    {
        printf("%s - %.0f%%\n", departments[i].deptName, departments[i].totalAverage);
    }
}


/*
Number of Inputs: 4
Enter student details (Name, mailID, mobile number, percentage, department):
DJlkdsnc dnfakn 39719 90 IT
Enter student details (Name, mailID, mobile number, percentage, department):
kjd djhbfa 8163973 99 IT
Enter student details (Name, mailID, mobile number, percentage, department):
dab jbflj 8736871 88 CSE
Enter student details (Name, mailID, mobile number, percentage, department):
lkjdflkj jkwj 31431 99 CSE
Number of branches: 2
Average percentage per Department:
IT - 94%
CSE - 94%
*/
