int menuFinal(){
    int op, x = 0;
    while(x < 1){

        system("cls");
        printf("\n Deseja refazer o calculo?");
        printf("\n [1] - SIM ");
        printf("\n [2] - NAO");
        printf("\n Sua resposta: ");
        scanf("%i",& op);
        switch(op){
            case 1:
                return x;
            case 2:
                return op;
            default:
                printf("opcao invaida!");
                getch();
        }
    }
}

float orcamento(float x, float y, float  z, float preco){
    return x * y * z* preco;
}


float calcularPiscina(){
    float comprimento, largura, profundidade, preco;
    int x = 0;
    while(x < 1){
        system("cls");
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
            getch();
        }
        else{
            printf("nao foi possivel calcular");    
        }
        x = menuFinal();
    }
}

float multiplicar(float x, float y){
    return x * y;
}

float calcularParede(){
    float comprimento, largura, alt_tijolo, lar_tijolo, p_tijolo, valor;
    float m2, m2_tijolo, total, uni_tijolo;
    int x = 0;
    while(x < 1){
        system("cls");
        printf("\nInforme o comprimento da parede: ");
        scanf("%f",& comprimento);
        printf("\nInforme a largura da parede: ");
        scanf("%f",& largura);

        m2 = multiplicar(comprimento, largura);

        printf("\nmetro quadrado da parede: %f", m2);
        getch();

        if(comprimento > 0  && largura > 0 ){

            printf("\n\nInforme a altura do tijolo em metros: ");
            scanf("%f",& alt_tijolo);
            printf("\nInforme a largura do tijolo em metros: ");
            scanf("%f",& lar_tijolo);
            printf("\nInforme o preco de cada tijolo: ");
            scanf("%f",& p_tijolo);
            
            m2_tijolo = multiplicar(alt_tijolo, lar_tijolo);

            uni_tijolo = m2 / m2_tijolo;

            printf("\nmetro quadrado do tijolo: %f", m2_tijolo);
            printf("\nquantidade de unidade de tijolos necessarias para fazer a parede: %f", uni_tijolo);
            getch();

            if(alt_tijolo > 0  && lar_tijolo > 0  && p_tijolo > 0){
                printf("\n\nInforme o valor da mao de obra: ");
                scanf("%f",& valor);
                
                total = multiplicar(uni_tijolo, p_tijolo) + valor;

                printf("\nValor total a pagar: %f", total);
                getch();
            }
            else{
                printf("informacao invalida!");
                getch();
            }


        }
        else{
            printf("informacao invalida!");
            getch();
        }

        x = menuFinal();
    
    }

}

int fim(){
    int y = 0, op;
    while(y < 1){
        system("cls");
        printf("\nFim do programa")
        printf("\nDeseja continuar?");
        printf("\n[1] - SIM");
        printf("\n[2] - NAO");
        printf("\nSua Resposta: ");
        scanf("%i",& op);
        switch(op){
            case 1:
                printf("Reiniciando...");
                getch();
                return y;
            case 2:
                printf("Finalizando...");
                getch();
                y++;
                return y;
            default:
                printf("Opcao invalida!");
                getch();
                break;
        }
    }

}

void main(){
    float comprimento, largura, profundidade, preco;
    int x = 0, y = 0, op;
    while(y < 1){
        x = 0;
        while(x < 1){
            system("cls");

            printf("\tSISTEMA DE ORCAMENTOS");
            printf("\n [1] - orcamento construir piscina");
            printf("\n [2] - orcamento contruir paredes");
            printf("\n [0] - SAIR");
            printf("\n Sua escolha: ");
            scanf("%i",& op);
            
            if(op == 1){                
                system("cls");
                calcularPiscina();
                x++;
            }
            else if( op == 2){
                system("cls");
                calcularParede();
                x++;
            }   
            else if(op == 0){
                printf("finalizando codigo!");
                getch();
                // talvez, mas só talvez esteja errado, caso sim corrigir com x++ e y++
                return 0;
                
            }
            else{   
                printf("opcao invalida!");
                getch();
            }
        }
        
        if(op != 0){
            y = fim();
        }
    }
}
