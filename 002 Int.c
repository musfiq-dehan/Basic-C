#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    printf("Enter two numbers :\n");
    scanf("%d%d", &a, &b);

    printf("Sum of %d and %d is = %d.\n", a, b, c=a+b);
    printf("Subtraction of %d and %d is = %d.\n", a, b, d=a-b);
    printf("Multiplication of %d and %d is = %d.\n", a, b, e=a*b);
    printf("Division of %d and %d is = %d.\n", a, b, f=a/b);

    return 0;
}
