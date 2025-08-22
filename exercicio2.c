float orcamento(float x, float y, float  z, float preco){
    return x * y * z* preco;
}


void main(){
    float comprimento, largura, profundidade, preco;

    printf("Informe o comprimento da piscina em metros: ");
    scanf("%f",& comprimento);
    printf("Informe a largura da piscina em metros: ");
    scanf("%f",& largura);
    printf("Informe a profundidade da piscina em metros: ");
    scanf("%f",& profundidade);
    printf("Informe o preço por metro cubico da piscina: ");
    scanf("%f",& preco);

    system("cls");

    if(comprimento > 0 && largura > 0 && profundidade > 0 && preco > 0){
        preco = orcamento(comprimento, largura, profundidade, preco);
        printf("orcamento da piscina ficou de: %.2f", preco);
        getchar();
    }
    else{
        printf("nao foi possivel calcular");    
    }

}
