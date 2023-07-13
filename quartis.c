#include <stdio.h>
#include <math.h>

void Divisaok_Com_Classe(int k, float n, float fAnt, float fdivisaok, float hdivisaok, float li, int tipodivisao){
   float divisaokClasse;
   float divisaok;
  
   divisaokClasse = (n * k)/tipodivisao;
   divisaok = li + ((divisaokClasse-fAnt)/fdivisaok)*hdivisaok;

    printf("Divisão %d: %f", k, divisaok);
}

int main(){
    int escolha, tipodivisao;
    float k, n, fAnt, fdivisaok, hdivisaok, li;
    printf("--Programa para calcular divisões com intervalo de classe--\n");
    printf("(1)Quartil (2)Decil  (3)Percentil\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1: 
            tipodivisao = 4;
                printf("entre com o k (número do quartil): ");
                scanf("%f", &k);
                if ((k > 3) || (k == 0)) {
                    printf("Este número de quartil não é válido!");
                    break;
                }
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fQk: ");
                scanf("%f", &fdivisaok);
                printf("Entre com o hQk: ");
                scanf("%f", &hdivisaok);
                printf("Entre com o li: ");
                scanf("%f", &li);
                Divisaok_Com_Classe(k, n, fAnt, fdivisaok, hdivisaok, li, tipodivisao);
            break;
        case 2: 
            tipodivisao = 10;
                printf("entre com o k (número do decil): ");
                scanf("%f", &k);
                if ((k > 9) || (k == 0)) {
                    printf("Este número de decil não é válido!");
                    break;
                }
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fDk: ");
                scanf("%f", &fdivisaok);
                printf("Entre com o hDk: ");
                scanf("%f", &hdivisaok);
                printf("Entre com o li: ");
                scanf("%f", &li);
                Divisaok_Com_Classe(k, n, fAnt, fdivisaok, hdivisaok, li, tipodivisao);
            break;
        case 3: 
            tipodivisao = 100;
                printf("entre com o k (número do percentil): ");
                scanf("%f", &k);
                if ((k > 99) || (k == 0)) {
                    printf("Este número de percentil não é válido!");
                    break;
                }
                printf("Entre com o n: ");
                scanf("%f", &n);
                printf("Entre com o Fant: ");
                scanf("%f", &fAnt);
                printf("Entre com o fPk: ");
                scanf("%f", &fdivisaok);
                printf("Entre com o hPk: ");
                scanf("%f", &hdivisaok);
                printf("Entre com o li: ");
                scanf("%f", &li);
                Divisaok_Com_Classe(k, n, fAnt, fdivisaok, hdivisaok, li, tipodivisao);
            break;
        default: 
            printf("Opção Inválida!");
            break;
    }
    return 0;
}