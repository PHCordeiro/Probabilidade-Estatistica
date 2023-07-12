#include <stdio.h>
#include <math.h>

int percentis_Com_Classe(int k, float n, float li, float fAnt, float fPk, float hPk){
    float nk100, pk;
    
    nk100 = (n*k)/100; 
    pk = li + ((nk100 - fAnt) / fPk) * hPk;
    
    printf("Seu %d Percentil: %f\n", k, pk);
    printf("nk100: %f", nk100); //Para conferir
}

int main(){
    int k;
    float n, li, fAnt, fPk, hPk;
    
    printf("Qual Percentil você deseja calcular? ");
    scanf("%d", &k);
    
    if((k <= 0) || (k >= 100)){
        printf("Esse Percentil não existe...");
    }
    else{
        printf("Entre com o n: ");
        scanf("%f", &n);
        printf("Entre com o Fant: ");
        scanf("%f", &fAnt);
        printf("Entre com o fPk: ");
        scanf("%f", &fPk);
        printf("Entre com o hPk: ");
        scanf("%f", &hPk);
        printf("Entre com o li: ");
        scanf("%f", &li);
        percentis_Com_Classe(k, n, li, fAnt, fPk, hPk);
    }
    
    return 0;
}
