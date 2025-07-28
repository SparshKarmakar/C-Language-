//3h) Generate all prime numbers within the given range.
#include <stdio.h>
int main() {
    int i,count=0,j,start , end;
    printf("Enter starting range:");
    scanf("%d", &start);
    printf("Enter starting range:");
    scanf("%d", &end);
    printf("the prime numbers :");        
    for(i = start; i <= end; i++)
    { 
        count =0;
        for(j=1 ; j<=end;j++){
            if(i%j==0){
                count=count+1;
            }
        }   
        if(count==2){
            printf("%d , ", i );
        }
    }
    return 0;
}

