#include <stdio.h>
#include <string.h>
int main(){
   
     // DECIMAL TO BINARY CONVERTER

    int D_Num , i= 0 , j;
    int B_NUM[50];
    
    printf("ENTER A DECIMAL NUMBER TO CONVERT IT TO BINARY :  ");
    scanf("%d", &D_Num);
     
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
    return 0 ;
}