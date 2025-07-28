//d) To find GCD, LCM of two integral numbers.
#include <stdio.h>
int main() {
    int a, b, gcd, lcm, t1, t2, rem;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    t1 = a;
    t2 = b;
    while(t2 != 0) {
    rem = t1 % t2; 
    t1 = t2; t2 = rem; }
    gcd = t1;
    lcm = (a * b) / gcd;
    printf("GCD: %d, LCM: %d\n", gcd, lcm);
    return 0;
}
