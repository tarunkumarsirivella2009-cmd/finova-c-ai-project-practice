#include<stdio.h>
void atm(int prefference){
    int pin;
    int card;
    int choice;
    char bankname[70];
    int amount;
    int balance=1000000;
    switch(prefference){
        case 1:
        printf("\n1.SAVINGS ACCOUNT\n2.CURRENT ACCOUNT\n,3.FROM A INTERNATIONAL BANK\n");
        scanf("%d",&choice);
        if(choice==1||choice==2){
            printf("\nENTER AMOUNT TO WITHDRAW\n");
            scanf("%d",&amount);
            printf("ENTER YOUR PIN:\n");
            scanf("%d",&pin);
            if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
            printf("\n\nPLEASE WAIT...\n THE AMOUNT IS BEING PROCCESED\n ");
            printf("THE AMOUNT: %d\n",amount);
            balance-=amount;
            printf("NOW THE BALANCE IS :%d\n",balance);
            printf("THANK YOU..\n VISIT AGAIN");
            break;
        }
       else if(choice==3){
            printf("ENTER BANK NAME:\n");
            scanf("%s",bankname);
            printf("\nENTER AMOUNT TO WITHDRAW\n");
            scanf("%d",&amount);
            printf("ENTER YOUR PIN:\n");
            scanf("%d",&pin);
            if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
            printf("\n\nPLEASE WAIT...\n THE AMOUNT IS BEING PROCCESED\n ");
            printf("THE AMOUNT: %d\n",amount);
            balance-=amount;
            printf("THE BALANCE:%d\n",balance);
            printf("THANK YOU..\n VISIT AGAIN");
        break;    
        }
        case 2:
        printf("PLEASE ENTER YOUR CARD DETAILS: \n");
        scanf("%d",&card);
        printf("ENTER THE PIN\n");
        scanf("%d",&pin);
        if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
        printf("THE BALANCE REMAINING :%d-/RUPEES",balance);
        break;
        case 3:
        printf("PLEASE ENTER YOUR CARD DETAILS: \n");
        scanf("%d",&card);
        printf("ENTER THE PIN\n");
        scanf("%d",&pin);
        if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
        printf("THE PREVIOUS TRANSACTION OF 30 DAYS:\n\n GROCERIES:6000.00\nMOVIES:1000.00\nSHOPPING:8000.00\n EXTRA COSTS:1000.00\n");
        break;
        case 4:
        printf("PLEASE ENTER YOUR CARD DETAILS: \n");
        scanf("%d",&card);
        printf("ENTER THE PIN\n");
        scanf("%d",&pin);
        if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
        printf("YOU ARE ELIGIBLE FOR KYC\n\nPLEASE VISIT YOUR NEAREST BANK FOR KYC UPDATION\n");
        break;
        

        case 5:
        printf("PLEASE ENTER YOUR CARD DETAILS: \n");
        scanf("%d",&card);
        printf("ENTER THE PIN\n");
        scanf("%d",&pin);
        if(pin==1234){
            printf("CORRECT PIN..\n");
            printf("PLEASE WAIT..\n");
            }
            else{
             printf("YOU HAVE ENTERED THE WRONG PIN...TRY AGAIN\n");
            break;
            }
        printf("WE ARE SHOWING YOU YOUR BALANCE NOW..\nAFTER DEPOSIT IT WILL INCREASE\n BALANCE: %d",balance);
        printf("PLEASE ENTER THE AMOUNT WILLING TO DEPOSIT\n");
        scanf("%d",&amount);
        printf("PLACE THE MONEY NEAR THE TRAY... MACHINE WILL AUTOMATICALLY COLLECT\n");
        printf("THE AMOUNT DEPOSITED : %d\n",amount);
        balance+=amount;
        printf("THE TOTAL BALANCE NOW:%d",balance);
        break;

        default:
        printf("invalid choice\n");
        break;
    }

}
int main(){
    int prefference;

    printf("\n\nWELCOME TO ANY TIME MONEY \n\n\n");
    printf("1.CASH WITHDRAWL\n");
    printf("2.BALANCE ENQUIRY\n");
    printf("3.STAMENTS OF PREVIOUS TRANSACTIONS\n");
    printf("4.KYC BANKING UPDATE\n");
    printf("5.MONEY DEPOSIT\n");
    printf("enter your Prefference : \n");
    scanf("%d",&prefference);
    atm(prefference);
return 0;
} 