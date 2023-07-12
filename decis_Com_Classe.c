#include <stdio.h>
#include <math.h>

int decis_Com_Classe(int k, float n, float li, float fAnt, float fDk, float hDk){
    float nk10, dk;
    
    nk10 = (n*k)/10; 
    dk = li + ((nk10 - fAnt) / fDk) * hDk;
    
    printf("Seu %d Decil: %f\n", k, dk);
    //printf("nk10: %f", nk10); //Para conferir
}

int main(){
    int k;
    float n, li, fAnt, fDk, hDk;
    
    printf("Qual Decil você deseja calcular? ");
    scanf("%d", &k);
    
    if((k <= 0) || (k >= 10)){
        printf("Esse decil não existe...");
    }
    else{
        printf("Entre com o n: ");
        scanf("%f", &n);
        printf("Entre com o Fant: ");
        scanf("%f", &fAnt);
        printf("Entre com o fDk: ");
        scanf("%f", &fDk);
        printf("Entre com o hDk: ");
        scanf("%f", &hDk);
        printf("Entre com o li: ");
        scanf("%f", &li);
        decis_Com_Classe(k, n, li, fAnt, fDk, hDk);
    }
    
    return 0;
}
