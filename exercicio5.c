// exercicio 1
float calcularSalario(float salario, float desconto){
	return salario - desconto;
}


float exercicio1(){
	float salario = 0, desconto = 0, salarioLiquido = 0;

    printf("Informe o valor do salario: ");
    scanf("%f",& salario);
    printf("Informe o valor do desconto: ");
    scanf("%f",& desconto);
	
	if(salario > 0 && desconto <= salario && desconto >= 0){
	    salarioLiquido = calcularSalario(salario, desconto);
	    // salarioLiquido = salario - desconto;
        printf("Valor do salario bruto: %.2f", salario);
	}
	else{
		printf("Nao foi possivel de calcular o salario");
	}
}


// exercicio 3
float orcamento(float x, float y, float  z, float preco){
    return x * y * z* preco;
}


float exercicio2(){
    int i = 0;
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
                        getch();
                        return 0;
                    }
                    else{
                        printf("preco fora da faixa");
                        getch();
                    }
                }
                else{
                    printf("profundidade fora da faixa");
                    getch();
                }
            }
            else{
                printf("largura fora da faixa");
                getch();
            }
        }
        else{
            printf("comprimento fora da faixa");
            getch();
        }        
    }
}


float calcular(float x, float y){
    return x/y;
}

// exercicio 4
float exercicio4(){
    char nome[20];
    float km, l, consumo;
    int x = 0;
    
    while(x != 1){

        system("cls");
        
        printf("informe o nome do veioculo: ");
        scanf("%s",& nome);

        printf("informe a distancia percorrida: ");
        scanf("%f",& km);

        printf("informe a quantidade de gasolina consumida: ");
        scanf("%f",& l);

        if(km > 0 && l > 0){

            consumo = calcular(km, l);
    
            printf("\nNome do carro: %s", nome);
            printf("\nConsumo de gasolina por km: %.2f \n", consumo);	
            getch();

        }
        else{
            printf("\nErro ao Calcular!\n");
            getch();
        }
 
        
    }
}


// exercicio 5
int menuFinal(int x){
    int y, op;
    y=0;
    while(y < 1){
        system("cls");
        printf("\nDeseja continuar?");
        printf("\n[1] - SIM");
        printf("\n[2] - NAO");
        printf("\nSua Resposta: ");
        scanf("%i",& op);
        switch(op){
            case 1:
                printf("Reiniciando...");
                getch();
                return x;
            case 2:
                printf("Finalizando...");
                getch();
                x++;
                return x;
            default:
                printf("Opcao invalida!");
                getch();
                break;
        }
    }

}


main(){
    int x, op, y;
    x=0;
    while(x < 1){
        y=0;
        while(y < 1){

            system("cls");
            printf("\n Escolha um dos exercicios");
            printf("\n\tMenu");
            printf("\n[1] - exercicio 1");
            printf("\n[2] - exercicio 3");
            printf("\n[3] - exercicio 4");
            printf("\nSua escolha: ");
            scanf("%i",& op);
            
            switch(op){
                case 1:
                    exercicio1();
                    y++;
                    break;
                case 2:
                    exercicio2();
                    y++;
                    break;
                case 3:
                    exercicio4();
                    y++;
                    break;
                default:
                    printf("escolha invalida");
                    getch();
                    break;
                
            }
        
        }

        getch();
        
        x = menuFinal(x);
    }

}
