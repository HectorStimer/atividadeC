#include <stdio.h>
#include <string.h>


struct companhia{
    char nome[50];
    char areaAtuacao[50];
    float valorAtualAcao;
    float valorAnterior;
    double variacaoAcao;
};

void preencherCompanhia(struct companhia *c){
    printf("Digite o nome da companhia: ");
    scanf("%s", c->nome);
    printf("Digite a area de atuacao: ");
    scanf("%s", c->areaAtuacao);
    printf("Digite o valor atual da acao: ");
    scanf("%f", c->valorAtualAcao);
    printf("Digite o valor anterior da acao: ");
    scanf("%f", c->valorAnterior);
    c->variacaoAcao = ((c->valorAtualAcao - c->valorAnterior) / c->valorAnterior) * 100;
}
void imprimirCompanhia(struct companhia *c) {
    printf("\nNome da companhia: %s\n", c->nome);
    printf("Area de atuacao: %s\n", c->areaAtuacao);
    printf("Valor atual da acao: %.2f\n", c->valorAtualAcao);
    printf("Valor anterior da acao: %.2f\n", c->valorAnterior);
    printf("Variacao da acao: %.2f%%\n", c->variacaoAcao);
}


int main(){
    struct companhia companhias[3];
    for (int i = 0; i<3; i++){
        preencherCompanhia(&companhias[i]);
    }
    for (int i =0 ; i<3; i++){
        imprimirCompanhia(&companhias[i]);
    }
    return 0;


}