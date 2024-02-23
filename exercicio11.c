int main()
{
    int vetor[5]  =  {1,2,3,4,5};
    int i;
    &vetor;

    for(i=0; i<5; i++){
        printf("O vetor[%d] = %d\n Endereco: %p\n",i, vetor[i], &vetor[i]);
    }

    return 0;

}
