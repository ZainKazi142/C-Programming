#include <stdio.h>

/* 
    Name: Zain Mohamed Saeed Kazi
    Roll No: 37
    UIN: 251P040
    Division: C
*/

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    } 
    return 1;
}
int main() {
    int start, end;

    printf("Enter the starting number of the range: ");
    if (scanf("%d", &start) != 1) {
        printf("Invalid input for starting number.\n");
        return 1;
    }
    printf("Enter the ending number of the range: ");
    if (scanf("%d", &end) != 1) {
        printf("Invalid input for ending number.\n");
        return 1;
    }
    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
