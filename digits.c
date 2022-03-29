#include <stdio.h>

int main()
{
    int number, first_digit, second_digit, third_digit;

    printf("Enter a 3 digit number:");
    scanf("%d", &number);

    third_digit = number % 10;
    second_digit = (number / 10) % 10;
    first_digit = (number / 100) % 10;
    printf("Digits of number %d are %d, %d, %d respectively\n", number, first_digit, second_digit, third_digit);
    return 0;
}