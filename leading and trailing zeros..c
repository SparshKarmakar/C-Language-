//b) Displaying entered number with leading and trailing zeros.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Leading zeros: %05d\n", n);    // 5 width, leading zeros
    printf("Trailing zeros: %d000\n", n);  // Add 000 as trailing
    return 0;
}
