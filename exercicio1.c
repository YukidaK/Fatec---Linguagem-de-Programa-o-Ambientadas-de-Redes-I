


calcularSalario(float salario, float desconto){
	return salario - desconto;
}


void main(){
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
