#include<stdio.h>
#include<string.h>
int selectAccount(char[]);
int main()
{
    int bank,ch,quit;
    char bname[30];
  
    do{
        printf("Select a bank from following list\n");
        printf("1.State Bank of India\n");
        printf("2.Indian Overseas Bank\n");
        printf("3.Canara Bank\n");
        scanf("%d",&bank);
        if(bank==1)
            strcpy(bname,"State Bank Of India");
        else if(bank==2)
            strcpy(bname,"Indian Overseas bank");
        else if(bank==3)
            strcpy(bname,"Canara Bank");
            printf("\nYou have selected %s\n",bname);

        switch(bank)
        {
            case 1:
            {
                ch = selectAccount(bname);
                switch(ch)
                {
                    case 1:
                    {
                        printf("\n \n-Maximum balance /amount No upper limit.\n-No Cheque Book facility available.\n-Withdrawals only using withdrawal form at Branches or through ATMs.\n-Basic Rupay ATM-cum-debit card will be issued.\n");
			printf("ROI Savings Bank Deposits =2.70 percent  p.a.\n");
			break;
                    }
                    case 2:
                    {
                        printf("\nAccount Maintenance & Safe custody.\nDematerialization.\nConverting the electronic balances to physical (share certificate) form.\nDelivery of electronic balances.\nBlocking securities balance of borrowers.\n");
                    	printf("ROI Demat Account =8.85 percent p.a.\n");
			break;
                    }
                    case 3:
                    {
                        printf("\nFirst 50 cheque leaves will be free.\nMobile banking\nInterNet banking.\nFree ATM card during first year.\nFree cash deposit upto Rs. 25000/ -per day.\n");
                    	printf("ROI Current Account = 9.40 percent p.a.\n");
			break;
                    }
                    default:  printf("\nenter a valid code\n");
                }
                break;
            }
            case 2:
            {
                 ch = selectAccount(bname);
                switch(ch)
                {
                    case 1:
                    {
                        printf("\n-Maximum balance /amount No upper limit.\n-No Cheque Book facility available.\n-Withdrawals only using withdrawal form at Branches or through ATMs.\n-Basic Rupay ATM-cum-debit card will be issued.\n");
			printf("ROI Savings Bank Deposits =4.70 percent p.a.\n");
			break;
                    }
                    case 2:
                    {
                        printf("\nAccount Maintenance & Safe custody.\nDematerialization.\nConverting the electronic balances to physical (share certificate) form.\nDelivery of electronic balances.\nBlocking securities balance of borrowers.\n");
                    	printf("ROI Demat Account =7.85 percent p.a.\n");
			break;
                    }
                    case 3:
                    {
                        printf("\nFirst 50 cheque leaves will be free.\nMobile banking\nInterNet banking.\nFree ATM card during first year.\nFree cash deposit upto Rs. 25000/ -per day.\n");
                    	printf("ROI Current Account = 8.40 percent p.a.\n");
			break;
                    }
                    default:  printf("\nenter a valid code\n");
                }
                break;
            }
            case 3:
            {
                 ch = selectAccount(bname);
                switch(ch)
                {
                    case 1:
                    {
                        printf("\n-Maximum balance /amount No upper limit.\n-No Cheque Book facility available.\n-Withdrawals only using withdrawal form at Branches or through ATMs.\n-Basic Rupay ATM-cum-debit card will be issued.\n");
			printf("ROi Savings Bank Deposits =4.70 percent p.a.\n");
			break;
                    }
                    case 2:
                    {
                        printf("\nAccount Maintenance & Safe custody.\nDematerialization.\nConverting the electronic balances to physical (share certificate) form.\nDelivery of electronic balances.\nBlocking securities balance of borrowers.\n");
                    	printf("ROI Demat Account =6.85 percent  p.a.\n");
			break;
                    }
                    case 3:
                    {
                        printf("\nFirst 50 cheque leaves will be free.\nMobile banking\nInterNet banking.\nFree ATM card during first year.\nFree cash deposit upto Rs. 25000/ -per day.\n");
                    	printf("\nROI Current Account =  7.6 percent p.a.\n");
			break;
                    }
                  
                    break;
            }
            
           
         }
         default:
            {
                printf("\nenter a valid code\n");
                break;    
            }
        }
        printf("\nPress 1 to continue or 0 to quit\n");
        scanf("%d",&quit);
    }while(quit!=0);
}
int selectAccount(char bname[])
{
    int accChoice;
    printf("Accounts available in %s\n",bname);
    printf("1.Savings Account\n");
    printf("2.Demat Account\n");
    printf("3.Current Account\n");
    scanf("%d",&accChoice);
    return accChoice;
}

