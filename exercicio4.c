
float calcular(float x, float y){
    return x/y;
}

void main(){
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
            system("pause");

        }
        else{
            printf("\nErro ao Calcular!\n");
            system("pause");
        }
 
        int y = 0;
        while (y != 1)
        {   
            system("cls");

            int op;
            printf("\nDeseja Continuar?");
            printf("\n[1] - SIM");
            printf("\n[2] - NAO");
            printf("\nSua Resposta: ");
            scanf("%i",& op);
            
            switch (op)
            {
            case 1:
                printf("\nContinuando o programa!\n");
                y++;
                system("pause");
                break;
            case 2:
                printf("\nFinalizando o programa!\n");
                y++;
                x++;
                system("pause");
                break;

            default:
                printf("\nOpcao invalida!\n");
                system("pause");
                break;
            }
        }
        
    }
}
