#include <stdio.h>
#include <string.h>
int main(){
    
    // patters 
    int i=0,j=0,sum =0 ;
    sum+=1;
    for (i=0;i<=7 ;i++){
        for(j=7;j>=i;j--){
           // sum+=j;
            printf("%d , ",j);
        }
        printf("\n  ");
    }
    return 0 ;
    
}