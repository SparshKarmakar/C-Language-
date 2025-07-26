#include <stdio.h>
#include <string.h>
int main(){
   
     // DECIMAL TO BINARY CONVERTER

    int D_Num , i =0, j=0;
    int B_NUM[50];
    int O_NUM[50] ;
    char H_NUM[100] ;
    
    printf("ENTER A DECIMAL NUMBER TO CONVERT IT TO OTHER NUMBER SYSTEM :  ");
    scanf("%d", &D_Num);
    int De_NUM = D_Num ;
    int Dec_NUM = D_Num;

    if(D_Num==0 ){
        printf("BINARY NUMBER IS 0  \n");
    }
    while (D_Num>0)
    {
        B_NUM[i]=D_Num % 2;
        D_Num = D_Num/2;
        i++;
    }
    printf("YOUR BINARY EQUIVALENT IS :  ");
    for(j = i-1 ; j>=0; j-- ){
        printf("%d",B_NUM[j]);
    }

    printf("\n ");
    printf("\n");

     i = 0 , j = 0 ;
      while (De_NUM != 0)
    {
        O_NUM[i] = De_NUM % 8;
        De_NUM = De_NUM / 8;
        i++;
    }
    printf("YOUR OCTAL NUMBER EQUIVALENT  : ");
    for(j = i-1 ; j >=0 ; j--)
    {
        printf("%d " , O_NUM[j]);
    }
    
    
    printf("\n");
    printf("\n");

    i = 0 , j =0 ; 
    while (Dec_NUM != 0){

     int remainder = Dec_NUM % 16;
        if (remainder < 10) {
            H_NUM[i] = remainder + '0'; 
        } else {
            H_NUM[i] = remainder + 'A' - 10; 
        }
        i++;
        Dec_NUM /= 16;
    
    }
    printf("YOUR HEXADECIMAL EQUIVALENT IS :");
    for (j = i-1 ; j >= 0 ; j--)
    {
         printf("%c" , H_NUM[j]); 
    }
    
    return 0 ;
}