int main()
{
    int a = 20;
    int *ptr;

    ptr = &a;

    printf("Conteudo de a = %d\n", a);
    printf("endereco de a = %x\n", &a);
    printf("endereco de a, atraves do ponteiro = %d\n", ptr);
    printf("conteudo de a, atraves do ponteiro = %d\n", *ptr);
    printf("endereco do ponteiro = %d\n", &ptr);

    /* faz com que o ponteiro va naquele endereço de
     memoria e puxe o VALOR. Ou seja, ele segue o endereço de memoria,
      mas mostra o valor que ta la e nao o próprio endereço*/
     return 0; 
    
}
