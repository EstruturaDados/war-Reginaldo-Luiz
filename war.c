// -------------------------
// CONSTRUÇÃO DE TERRITÓRIO PARTE 1
// -------------------------

#include <stdio.h>
#include <string.h>

// Define a quntidade máxima de territórios que serão cadastrada no jogo.
// Define o tamanho máximo para armazenar textos como: nomes, cores, etc.
#define MAX_TERRITORIOS 5
#define TAM_STRING 100

// Define a estrutura do território.
struct Territorio {
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
};

// Função para Limpar o Buffer.
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função principal
int main () {
    struct Territorio mapa[MAX_TERRITORIOS];
    int i;

    printf("------------------------------\n");
    printf(" CADASTRO DE TERRITÓRIOS WAR \n");
    printf("------------------------------\n\n");

    // Cadasro dos territórios.    
    for (i = 0; i < MAX_TERRITORIOS; i++) {

    printf("Territorio %d\n" , i + 1);

    printf("Nome do territorio: ");
    fgets(mapa[i].nome, TAM_STRING, stdin);
    mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';

    printf("Cor do exercito: ");
    fgets(mapa[i].cor, TAM_STRING, stdin);
    mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';

    printf("Quantidade de tropas: ");
    scanf("%d",&mapa[i].tropas);
    limparBufferEntrada();

    printf("\n"); 
} 

    // Exibição dos territórios cadastrados.
    printf("\n------------------------------\n");
    printf(" MAPA MUNDIAL DO WAR \n");
    printf(" -------------------------------");

    for ( i = 0; i < MAX_TERRITORIOS; i++){

        printf("\nTerritorio %d\n", i + 1);
        printf("Nome      : %s\n", mapa[i].nome);
        printf("Cor      : %s\n", mapa[i].cor);
        printf("Tropas      : %d\n", mapa[i].tropas);
        printf("------------------------------");
    }
    
    return 0;
 
}
        
    

    
    
    

