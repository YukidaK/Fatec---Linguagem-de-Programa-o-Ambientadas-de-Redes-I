
float orcamento(float x, float y, float  z, float preco){
    return x * y * z* preco;
}


void main(){
    int i = 0, y = 0, op;
    float comprimento, largura, profundidade, preco;

    while(i < 1){
        system("cls");

        printf("Informe o comprimento da piscina em metros: ");
        scanf("%f",& comprimento);
        if (comprimento >= 1 && comprimento <= 10)
        {

            printf("Informe a largura da piscina em metros: ");
            scanf("%f",& largura);
            if(largura >= 1 && largura <= 10){
                
                printf("Informe a profundidade da piscina em metros: ");
                scanf("%f",& profundidade);
                if(profundidade >= 1 && profundidade <= 10){

                    printf("Informe o preço por metro cubico da piscina: ");
                    scanf("%f",& preco);
                    if(preco>= 1000 && preco <= 10000){
                        preco = orcamento(comprimento, largura, profundidade, preco);
                        printf("valor do orcamento: %.2f", preco);
                        getchar();
                        return 0;
                    }
                    else{
                        printf("preco fora da faixa");
                        getchar();
                    }
                }
                else{
                    printf("profundidade fora da faixa");
                    getchar();
                }
            }
            else{
                printf("largura fora da faixa");
                getchar();
            }
        }
        else{
            printf("comprimento fora da faixa");
            getchar();
        }

        
        while (y < 1)
        {
            system("cls");
            printf("\n Erro ao calcular!");
            printf("\n Deseja refazer a conta?");
            printf("\n [1] - SIM");
            printf("\n [2] - NAO");
            printf("\n Sua resposta: ");
            scanf("%i",& op);

            switch (op)
            {
            case 1:
                printf("reiniciando codigo!");
                y++;
                getchar();
                break;
            case 2:
                printf("finalizando codigo!");
                y++;
                i++;
                getchar();
                break;
            default:
                printf("opcao invalida");
                getchar();    
                break;
            }
        }
        
    }
}
