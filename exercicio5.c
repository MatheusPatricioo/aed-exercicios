int main()
{
    int a, b;
    int *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;

    printf("Conteudo de a = %d\n", a);
    printf("Conteudo de b = %d\n", b);
    printf("endereco de a = %d\n", p1);
    printf("endereco de b = %d\n", p2);

    *p2 = *p1 + 3;
    b = b * (*p1);
    (*p2)++;

    /*printf("Conteudo de a = %d\n", a);
    printf("Conteudo de b = %d\n", b);
    printf("endereco de a = %d\n", p1);
    printf("endereco de b = %d\n", p2);

        */
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);

    return 0;
}
