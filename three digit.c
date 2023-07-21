#include <stdio.h>

int main() {
    int digit, greatest;

    printf("Enter a digit: ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 9) {
        greatest = digit * 10 + 9;
        printf("The greatest two-digit number obtained from %d is %d\n", digit, greatest);
    } else {
        printf("%d is not a valid digit.\n", digit);
    }

    return 0;
}

