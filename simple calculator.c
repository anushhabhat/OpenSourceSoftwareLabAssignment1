#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mul, mod;
    float div;
    printf("Input any two numbers separated by comma : ");
    scanf("%d,%d", &num1, &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mul);
    printf("The quotient of the given numbers : %f\n", div);
    printf("Remainder = %d\n", mod);
    return 0;
}
