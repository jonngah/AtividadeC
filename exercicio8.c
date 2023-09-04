#include <stdio.h>

int main() {
    int farinha, ovos, leite, menorValor;
    printf("quantidade de xícaras de farinha:\n");
    scanf("%d", &farinha);
    
    printf("quantidade de ovos:\n");
    scanf("%d", &ovos);
    
    printf("quantidade de colheres de leite:\n");
    scanf("%d", &leite);
    
    if(farinha == 2 && ovos == 3 && leite == 5){
        printf("você consegue fazer 1 bolo com esses ingredientes.\n");
        
    } else if(farinha > 2 && ovos > 3 && leite > 5){
        farinha = farinha / 2;
        ovos = ovos / 3;
        leite = leite / 5;
        
        if(farinha <= ovos && farinha <= leite){
            menorValor = farinha;
            printf("você consegue fazer %d bolo(s) com esses ingredientes.", menorValor);
        
        } else if(ovos <= farinha && ovos <= leite){
            menorValor = ovos;
            printf("você consegue fazer %d bolo(s) com esses ingredientes.", menorValor);
        
        } else { 
            menorValor = leite;
            printf("você consegue fazer %d bolo(s) com esses ingredientes.", menorValor);
        };
    } else {
        printf("você não consegue fazer nenhum bolo com essa quantidade de ingredientes.\n");
    };
    
    return 0;
}
