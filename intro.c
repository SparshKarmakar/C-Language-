#include <stdio.h>
#include <string.h>

int main () {
   
    int a ;
    float b=0.0;
    
    char d[30]= "";
    float e=0.0;

    printf("\n");

    d[strlen(d)-1]='\0';
    printf("Enter your name ");
    fgets(d , sizeof(d),stdin);
    printf("\n");
    printf("Enter your phone number ");
    scanf("%d",&a);
    printf("\n");
    printf("enter your CGP ");
    scanf("%f",&b);
    printf("\n");
    printf("Enter your float ");
    scanf("%f",&e); 
    
   printf("-------------------------\n");
   printf("YOUR NAME   :    %s \n ",d);
   printf("YOUR PH NUMBER :   %d \n ", a);
   printf("YOUR CGP    :     %.2f  \n",b);
   printf("YOUR FLOAT %.2f",e);
   
   return  0;

}