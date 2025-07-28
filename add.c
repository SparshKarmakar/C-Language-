//3Add first ‘n’ natural, even, odd numbers using different loop structures.
#include <stdio.h>
int main() {
int i,n, sum = 0;
printf("Enter n for adding upto n in even,odd: ");
scanf("%d", &n);
for( i = 1; i <= n; i++){ 
sum += i;
}
printf("Sum of first n natural = %d\n", sum);
sum = 0;
for(int i = 2, count = 1; count <= n; i += 2, count++){
sum += i;}
printf("Sum of first n even = %d\n", sum);
sum = 0;
for(int i = 1, count = 1; count <= n; i += 2, count++){
 sum += i;}
printf("Sum of first n odd = %d\n", sum);
return 0 ;
}