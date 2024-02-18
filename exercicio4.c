int main()
{
    int a = 20;
    int *ptr;

    ptr = &a;

    printf("Conteudo de a = %d\n", a);
    printf("endereco de a = %d\n", &a);
    printf("endereco de a, atraves do ponteiro = %d\n", ptr);
    printf("conteudo de a, atraves do ponteiro = %d\n", *ptr);
    printf("endereco do ponteiro = %d\n", &ptr);
    /* code */
    return 0;
}
