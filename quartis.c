#include <stdio.h>
#include <math.h>

int quartil1_Com_Classe(float n, float fAnt, float fQk, float hQk, float li){
   float q1Classe;
   float q1;
  
   q1Classe = (n * 1)/4;
   q1 = li + ((q1Classe-fAnt)/fQk)*hQk;

    printf("Primeiro Quartil: %f", q1);
}

int quartil2_Com_Classe(float n, float fAnt, float fQk, float hQk, float li){
   float q2Classe;
   float q2;
  
   q2Classe = (n * 2)/4;
   q2 = li + ((q2Classe-fAnt)/fQk)*hQk;

    printf("Primeiro Quartil: %f", q2);
}

int quartil3_Com_Classe(float n, float fAnt, float fQk, float hQk, float li){
   float q3Classe;
   float q3;
  
   q3Classe = (n * 3)/4;
   q3 = li + ((q3Classe-fAnt)/fQk)*hQk;

    printf("Primeiro Quartil: %f", q3);
}

int main(){
    int escolha;
    float n, fAnt, fQk, hQk, li;
    printf("--Programa para calcular quartis--\n");
    printf("(1)Quartil 1 (2) Quartil 2 (3) Quartil 3\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1: 
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fQk: ");
                scanf("%f", &fQk);
                printf("Entre com o hQk: ");
                scanf("%f", &hQk);
                printf("Entre com o li: ");
                scanf("%f", &li);
                quartil1_Com_Classe(n, fAnt, fQk, hQk, li);
            break;
            
        case 2: 
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fQk: ");
                scanf("%f", &fQk);
                printf("Entre com o hQk: ");
                scanf("%f", &hQk);
                printf("Entre com o li: ");
                scanf("%f", &li);
                quartil2_Com_Classe(n, fAnt, fQk, hQk, li);
            break;
            
        case 3: 
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fQk: ");
                scanf("%f", &fQk);
                printf("Entre com o hQk: ");
                scanf("%f", &hQk);
                printf("Entre com o li: ");
                scanf("%f", &li);
                quartil3_Com_Classe(n, fAnt, fQk, hQk, li);
            break;
            
        default : printf("Este número de quartil não é válido!");
    }
    return 0;
}
