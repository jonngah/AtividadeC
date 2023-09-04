#include <stdio.h>

int main() {
    int idade, anos, meses, dias, restoAnos;
    
    printf("informe a sua idade em dias:\n");
    scanf("%d", &idade);
    
    anos = idade / 365;
    printf("anos de vida %d \n", anos);
    
    meses = (idade % 365) / 30;
    printf("meses de vida %d \n", meses);
    
    restoAnos = (idade % 365);
    printf("o valor do resto %d \n", restoAnos);
    
    dias = (restoAnos) - (meses * 30);
    printf("dias de vida %d \n", dias);
    
    printf("anos: %d, meses: %d, dias: %d", anos, meses, dias);

}
