#include <stdio.h>

int soma(int x, int y)
{
    int z = x + y;

    puts("\n ===== > A FUNCAO \n");

    printf(" &x = %p, x = %d\n", (void *)&x, x);
    printf(" &y = %p, y = %d\n", (void *)&y, y);
    printf(" &z = %p, z = %d\n", (void *)&z, z);

    return z;
}

int main()
{
    int a = 10;
    int b = 20;
    int c;

    puts("\n ### ANTES DA FUNCAO ###\n");

    printf(" &a = %p, a = %d\n", (void *)&a, a);
    printf(" &b = %p, b = %d\n", (void *)&b, b);
    printf(" &c = %p, c = %d\n", (void *)&c, c);

    c = soma(a, b);

    puts("\n ### DEPOIS DA FUNCAO ###\n");

    printf(" &a = %p, a = %d\n", (void *)&a, a);
    printf(" &b = %p, b = %d\n", (void *)&b, b);
    printf(" &c = %p, c = %d\n", (void *)&c, c);

    return 0;
}
