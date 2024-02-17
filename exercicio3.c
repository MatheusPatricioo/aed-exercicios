int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("Conteudo de var = %d\n", var);
    printf("endereco de var = %d\n", &var);
    printf("endereco de var = %d\n", *ptr);
    printf("endereco de var = %d\n", ptr);
    return 0;
}
