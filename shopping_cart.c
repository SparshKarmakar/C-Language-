#include <stdio.h>
#include <string.h>

int main () {
   
   // SHOPPING CART 
   
   char food ;
   printf("_____________MENU_____________\n");
   printf("Sl.no         FOOD                 price\n");
   printf(" A.       BUTTER CHICKEN           110/-\n");
   printf(" B.       TANDOORI CHICKEN         50/-\n");
   printf(" C.       CHICKEN BIRIYANI         150/-\n");
   printf(" D.       MUTTON BIRIYANI          200/-\n");
   printf(" E.           DOSA                 45/-\n");
   printf(" F.       MIXED ROLL               80/-\n");
   printf(" G.       CHIKEN ROLL              60/-\n");
   printf(" H.       EGG ROLL                 50/-\n");
        
   printf("ENTER THE Sl.no OF WHAT YOU WANT TO ORDER   :");
   scanf("%c",&food);
   printf("\n");
   switch(food){
      case('A'):
         printf("YOU HAVE ORDERED A BUTTER CHICKEN off 110/-");
         break;
      
      case('B'):
         printf("YOU HAVE ORDERED A TANDOORI CHICKEN off 50/-");
         break;

      case('C'):
         printf("YOU HAVE ORDERED A CHICKEN BIRIYANI  off 150/-");
          break;

      case('D'):
         printf("YOU HAVE ORDERED A MUTTON BIRIYANI  off 200/-");
         break;

      case('E'):
         printf("YOU HAVE ORDERED A DOSA off 45/-");
          break;

      case('F'):
         printf("YOU HAVE ORDERED A MIXED ROLL off 80/-");
         break;

      case('G'):
         printf("YOU HAVE ORDERED A CHIKEN ROLL off 60/-");
         break;
         
      case('H'):
         printf("YOU HAVE ORDERED A EGG ROLL  off 50/-");
         break;
         
      default:
         printf("*******WRONG INPUT*********\n");
         printf("      TRY AGAIN       ");
         break;
      
return 0 ;
   
}
}