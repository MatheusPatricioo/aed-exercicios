int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("Conteudo de var = %d\n", var);
    printf("endereco de var = %d\n", &var);
    printf("apontando para o conteudo de ptr = %d\n", *ptr);
    printf("endereco de ptr = %d\n", &ptr);

    *ptr = 73;
        printf("Conteudo de var = %d\n", var);
    printf("endereco de var = %d\n", &var);
    printf("apontando para o conteudo de ptr = %d\n", *ptr);
    printf("endereco de ptr = %d\n", &ptr);


    return 0;
}

// sempre que usar "&", estou chamando o endereço daquela variavel.
// quando uso *ptr, to apontando para o conteudo da variavel que ptr aponta, neste caso é a variavel var
// *ptr = O APONTADO POR...
// o ponteiro nada mais é do que uma variavel que guarda o endereço de memoria de outra variavel.

