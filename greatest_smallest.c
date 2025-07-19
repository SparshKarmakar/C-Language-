#include <stdio.h>
#include <string.h>

int main () {
   
    // maxmimum and minimum numbers
     int a , b , c;
     printf("Enter three numbers    : " );
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     if (a>b && a>c)
     {
         printf("%d  = IS THE GREATEST NUMBER\n",a);   
         if(b<c){
            printf("%d = IS THE SMALLEST NUMBER \n",b);
         } 
         else{
            printf("%d = IS THE SMALLEST NUMBER \n",c);
         }
     }
   else if (b>a && b>c){
      printf("%d = IS THE GREATEST NUMBER\n",b);
      if(a<c){
            printf("%d = IS THE SMALLEST NUMBER \n",a);
         } 
         else{
            printf("%d = IS THE SMALLEST NUMBER \n",c);
         }
   }
   else{
      printf("%d = IS THE GREATEST NUMBER\n", c);
      if(a<b){
            printf("%d = IS THE SMALLEST NUMBER \n",a);
         } 
         else{
            printf("%d = IS THE SMALLEST NUMBER \n",b);
         }
   }
return 0 ;
   
}