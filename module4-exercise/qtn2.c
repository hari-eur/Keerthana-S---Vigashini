/*2. Write a program to handle strings
    i) Get string as input and store it in array 
    ii) Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number and one special character with and without string functions/char lib functions.
 */
#include <stdio.h>

int main()
{
    char str[10];
    printf("Enter the string\n");
    scanf("%s",str);
    int i=0,low=0,upr=0,spl=0,num=0;
    int len=0;
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122 )
        {
            low++;            
        }
        if(str[i]>=65 && str[i]<=90)
        {
            upr++;
        }
        if(str[i]>=48 && str[i]<=57)
        {
            num++;
        }
        if((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126))
        {
            spl++;
        }
        len++;
        i++;
    }
    if(len<8)
        printf("Must be of length 8");
    else if(low==0)
        printf("Must contain atleast one lower-case");
    else if(upr==0)
        printf("Must contain atleast one upper-case");
    else if(spl==0)
        printf("Must contain atleast one special-case");
    else
        printf("You entered a valid string!!");
    return 0;
}
/*
Sample i/o:
Enter the string
abc_9872
Must contain atleast one upper-case

Enter the string
Abc*163950
You entered a valid string!!
*/
