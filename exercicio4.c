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

          /* Quando o ponteiro P1, aponta pra variavel X, o endereço dessa variavel
          vira o valor do ponteiro P1. Ou seja, embora o valor dele vire o endereço daquela
          variavel, ele ainda tem seu proprio endereço*/

     return 0; 
    
}
