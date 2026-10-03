#include <stdio.h>

int main()
{
    int a, b, c;
    char ret = 'N';

    scanf("%d%d%d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalido\n");
    }
    else {
        if (a > b && a > c) {
            if (a * a == b * b + c * c)
                ret = 'S';
        }
        else if (b > a && b > c) {
            if (b * b == a * a + c * c)
                ret = 'S';
        }
        else {
            if (c * c == a * a + b * b)
                ret = 'S';
        }

        if (a == b && b == c) {
            printf("Valido-Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Valido-Isoceles\n");
        }
        else {
            printf("Valido-Escaleno\n");
        }

        printf("Retangulo: %c\n", ret);
    }

    return 0;
}
