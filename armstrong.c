//3i) Find all Armstrong numbers within 100 to 1000.
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;
    printf("Armstrong numbers between 100 and 1000 are:\n");
    for (number = 100; number <= 1000; number++) {
        originalNumber = number;
        sum = 0;
        while (originalNumber > 0) {
            remainder = originalNumber % 10; 
            sum += (remainder * remainder * remainder);
            originalNumber /= 10;  }

        if (sum == number) {
            printf("%d\n", number);
        }
    }

    return 0;
}