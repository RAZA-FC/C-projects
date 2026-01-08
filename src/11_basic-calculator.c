#include <stdio.h>
#include <math.h>

int main(void)

{
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);  // persent %d is for integer

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Answer: %d\n", num1 + num2);

    return 0;
}