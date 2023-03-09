/*1.write a program which covers all control statements, switch case syntax and its functionality.

                Program statement : 
                1. User should be able to view list of banks.
                 2. User should be able select a bank and to view its Banking operation and its various account details(Savings, Current, demat)
                 3. User should be able to list all the benefits of choosen account(interest etc).
*/
#include<stdio.h>
#include<string.h>
int selectAccount(char[]);
int main()
{
    int bank,ch,quit;
    char bname[30];
  
    do{
        printf("Select a bank from following list\n1.State Bank of India\n2.Indian Overseas Bank\n3.Canara Bank\n");
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
                       		printf("\n \n*Maximum balance /amount No upper limit.\n*No Cheque Book facility available.\n*Withdrawals only using withdrawal form at Branches or through ATMs.\n*Basic Rupay ATM*cum*debit card will be issued.\n*ROI Savings Bank Deposits =2.70 percent  p.a.\n");
		            	break;
                    }
                    case 2:
                    {
                       		printf("\n*Account Maintenance & Safe custody.\n*Dematerialization.\n*Converting the electronic balances to physical (share certificate) form.\n*Delivery of electronic balances.\n*Blocking securities balance of borrowers.\n*ROI Demat Account =8.85 percent p.a.\n");
		            	break;
                    }
                    case 3:
                    {
                           	printf("\n*First 50 cheque leaves will be free.\n*Mobile banking\n*InterNet banking.\n*Free ATM card during first year.\n*Free cash deposit upto Rs. 25000/ *per day.\n*ROI Current Account = 9.40 percent p.a.\n");
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
				printf("\n*International VISA/MASTER/RUPAY Debit Card.\n*Instant Credit of Outstation Cheque upto Rs.15,000/*.\n*Internet banking & Mobile Banking facility.\n*Nomination facility.\n*Standing Instruction Facility.\n*ROI Savings Bank Deposits =4.70 percent p.a.\n");
		                break;
                    }
                    case 2:
                    {
				printf("\n*Zero Balance Account.\n*No Monthly Average Balance charges.\n*Employee Reimbursement Account (Reimbursement Current Account).\n*Auto Sweep Facility.\n*ROI Demat Account =7.85 percent p.a.\n");
		            	break;
                    }
                    case 3:
                    {
				printf("\n*All senior citizens investing in IOB fixed deposits are eligible to avail an additional 0.50percent on all deposit schemes.\n*Super senior citizens, aged 80 years and above, are provided an additional interest rate of 0.75percent p.a.\n*ROI Current Account = 8.40 percent p.a.\n");
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
				printf("\n*ATM cum Debit card.\n*Deposit and withdrawal of cash at branch and ATM at no charges.\n*Passbook, Internet banking, Mobile banking, fund transfers via NEFT/RTGS\n*ROi Savings Bank Deposits =4.70 percent p.a.\n");
		            	break;
                    }
                    case 2:
                    {
				printf("\n*An interest rate of 0.50percent or higher than the applicable Canara Bank FD interest rates is paid, irrespective of the deposit amount or period.\n* The depositor can choose either monthly, quarterly, or half*yearly interest payments. \n*ROI Demat Account =6.85 percent  p.a.\n");
		            	break;
                    }
                    case 3:
                    {
				printf("\n*Low Monthly Average Balance: Rs 5,000.\n*Free Cash Deposit upto Rs 5,00,000/* per Month.\n*Convenience to withdraw and deposit cash at all 22000+ SBI Bank branches.\n*Free Cash Withdrawal from Home Branch.\n*ROI Current Account =  7.6 percent p.a.\n");
		            	break;
                    }
            }
            break;
         }
         default:
            {
                printf("\nenter a valid code\n");
                break;    
            }
        }
        printf("\nPress any key to continue or 0 to quit\n");
        scanf("%d",&quit);
    }while(quit!=0);
}
int selectAccount(char bname[])
{
    int accChoice;
    printf("Accounts available in %s\n",bname);
    printf("1.Savings Account\n2.Demat Account\n3.Current Account\n");
    scanf("%d",&accChoice);
    return accChoice;
}
/* Sample i/o
Select a bank from following list
1.State Bank of India
2.Indian Overseas Bank
3.Canara Bank
2

You have selected Indian Overseas bank
Accounts available in Indian Overseas bank
1.Savings Account
2.Demat Account
3.Current Account
1

*International VISA/MASTER/RUPAY Debit Card.
*Instant Credit of Outstation Cheque upto Rs.15,000/*.
*Internet banking & Mobile Banking facility.
*Nomination facility.
*Standing Instruction Facility.
*ROI Savings Bank Deposits =4.70 percent p.a.

Press any key to continue or 0 to quit
*/
s
