//a) Displaying hexadecimal, decimal, octal number format of entered numbers.
#include <stdio.h>
int main() {
    int n , B_NUM[50] , i=0 , j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Decimal: %d\nOctal: %o\nHexadecimal: %x\n", n, n, n);

     if(n==0 ){
        printf("BINARY NUMBER IS 0  \n");
    }
    while (n>0)
    {
        B_NUM[i]=n% 2;
        n =n/2;
        i++;
    }
    printf("YOUR BINARY EQUIVALENT IS :  ");
    for(j = i-1 ; j>=0; j-- ){
        printf("%d",B_NUM[j]);
    }
    return 0;
}
