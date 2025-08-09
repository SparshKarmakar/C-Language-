#include <stdio.h>
int main(){
int balance=5000 , ch , amt, with;
while (1){
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Enter your choice :");
scanf("%d",&ch);
switch (ch){
case 1 :
    printf("Your current balance :%d\n" , balance);
break;
case 2 :
    printf("Enter amount to be deposited :");
    scanf("%d",&amt);
    balance +=amt ;
    printf("Your amount has succesfully deposited : %d\n", balance);
break;
case 3 :
    printf("Enter the amt to be withdrawed :");
    scanf("%d",&with);
if (with<=balance){
    balance-=with;
    printf("Your amount has succesfully withdrawed : %d\n", balance);
}else 
    printf("Error: Insufficient funds!\n");
break;
case 4 :
    printf("Thank you come back again\n");
    return 0;
break;
default:
    printf("TRY AGAIN\n");
    break;}}
    return 0;}
