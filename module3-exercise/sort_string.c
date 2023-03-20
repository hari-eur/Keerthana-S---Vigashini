/*Read the input string and pass to a FUNCTION which returns string which is sorted in following format
 

String Input:

123434acibdf295869asdsd37695dfgasd

String Output:

123344abcdfi256899addss35679addfgs

 

Explanation:

sort numbers and alphabets in subsets

123434 - acibdf - 295869 - asdsd - 37695 - dfgasd

123344 - abcdfi - 256899 - addss - 35679 - addfgs
*/
#include<stdio.h>
#include<string.h>
void sortString(char []);
int main()
{
	char str[50];
    printf("Enter the string : ");
	scanf("%s",str);
	int i=0,j=0;
	int flag=0,key;
	char copy[strlen(str)];
	while(j<strlen(str))
	{
	    i=0;
	    while((str[j] >= 97 && str[j] <= 122 ) | ( str[j] >= 65 && str[j] <= 90) && str[j] != '\0')
	    {
	        copy[i]=str[j];
	        copy[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
		}
		if(key==1)
	    {
	        sortString(copy);   
	    }
	    i=0;
	    while((str[j] >= 48 && str[j] <= 57 ) && str[j] != '\0')
	    {
	        copy[i]=str[j];
	        copy[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
	    }
	    if(key==1)
	    {

	        sortString(copy);
	        
	    }
	    
	}
	
	return 0;
}

void sortString(char sub[])
{
	int k=strlen(sub)-1;
	char temp;
	int i=0;
    int flag = 0;
	while(i<k)
	{
		for(int j=0;j<k;j++)
		{
			if(sub[j]>sub[j+1])
			{
				temp=sub[j];
				sub[j]=sub[j+1];
				sub[j+1]=temp;
			}
		}
		i++;
	}
	printf("%s",sub);
}

/* Sample i/o
i/o:
123434acibdf295869asdsd37695dfgasd
o/p:
123344abcdfi256899addss35679addfgs
*/
