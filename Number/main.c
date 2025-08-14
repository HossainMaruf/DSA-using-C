#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    while(number/10 != 0) {
        number = number / 10;
        count++;
    }
    return count+1;
}

int countEvenDigits(int number) {
    int r, count = 0;
    while(number/10 != 0) {
        r = number % 10;
        if (r%2 == 0) count++;
        number = number / 10;
    }
    if(number%2 == 0) count += 1;
    return count;
}
int countOddDigits(int number) {
    int r, count = 0;
    while(number/10 != 0) {
        r = number % 10;
        if (r%2 != 0) count++;
        number = number / 10;
    }
    if(number%2 != 0) count += 1;
    return count;
}

void printDigitsReverse(int number) {
    int r;
    while(number/10 != 0) {
        r = number % 10;
        printf("%d ", r);
        number = number / 10;
    }
    printf("%d ", number);
    printf("\n");
}

void printDigitsForward(int number) {
    int r, i = 0, len = countDigits(number);
    int digits[len];
    while(number/10 != 0) {
        r = number % 10;
        digits[i++] = r;
        number = number / 10;
    }
    digits[i] = number;
    for(int i=len-1; i>-1; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");
}

void main() {
    int number = 20;
    // printDigitsReverse(number);
    // printDigitsForward(number);
    // printf("Digits = %d\n", countDigits(number));
    // printf("Even Digits = %d\n", countEvenDigits(number));
    // printf("Odd Digits = %d\n", countOddDigits(number));
}