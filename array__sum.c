#include <stdio.h>
#include <string.h>

int main () {
   
   // ARRAY SUM
   int i,j ,n,sum ;
   printf("ENTER n FOR n*n MATRIXS : ");
   scanf("%d",&n);
   int a[n][n];
   printf("NOW ENTER VALUES FOR 1st MATRIX  :\n");
   for(i=0;i<n ; i++){
      for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
      }
   }
   
   int b[n][n];
   printf("NOW ENTER VALUES FOR 2nd MATRIX  :\n");
   for(i=0;i<n ; i++){
      for(j=0;j<n;j++){
         scanf("%d",&b[i][j]);
      }
   }

   printf("YOUR 1st MATRIXS : \n");
   for(i=0;i<n ; i++){
      for(j=0;j<n;j++){
         printf("%d ",a[i][j]);
      }
      printf("\n");
   }

   printf("YOUR 2nd MATRIXS : \n");
   for(i=0;i<n ; i++){
      for(j=0;j<n;j++){
         printf("%d ",b[i][j]);
      }
      printf("\n");
   }

   printf("SUM OF TWO MATRIXS : \n");
   for(i=0;i<n ; i++){
      for(j=0;j<n;j++){
        sum = a[i][j]+b[i][j];
        printf("%d  ",sum);
      }
      printf("\n");
   }
   
   
      
return 0 ;
   
}
