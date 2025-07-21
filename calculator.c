#include <stdio.h>
#include <string.h>

int main () {
   
   // CALCULATOR
   float result =0.0;
   char sign = '\0';
   float n1 = 0.0;
   float n2 =0.0 ;
     printf("\n");
   printf("ENTER 1st NUMBER : ");
   scanf("%f",&n1);
   printf("\n");

   printf("ENTER THE SIGN THAT YOU WANT CALCULATE OF TWO NUMBERS  :  ");
   scanf(" %c",&sign);
   printf("\n");

   printf("ENTER 2nd NUMBER : ");
   scanf("%f",&n2);
   printf("\n");  

   switch (sign)
   {
   case ('+'):
      result = n1+n2;
      printf("YOUR ADDITION OF %.3f , %.3f is =  %.3f", n1 ,n2 , result);
      break;
   case ('-'):
      result = n1 - n2 ;
      printf("YOUR SUBTRACTION OF  %.3f , %.3f is =  %.3f", n1 ,n2 , result);
      break;

   case('/'):
      result = n1/n2;
      printf("YOUR DIVISION OF %.3f , %.3f is =  %.3f", n1 ,n2 , result);
      break ;

   case('*'):
       if (n2==0){
         printf("YOU CAN'T DIVIDE BY 0  ");
       }
       else{
      result = n1*n2;
      printf("YOUR MULTIPLICATION OF %.3f , %.3f is =  %.3f", n1 ,n2 , result);
       }
      break ;

   default:
      printf("*************WRONG INPUT************* ");
      break;
   }
   return 0 ;
}
   

   

