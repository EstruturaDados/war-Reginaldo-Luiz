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

// Função para Limpar o Buffer
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função pricipal
int main () {
    struct Territorio mapa[MAX_TERRITORIOS];
    int i;
    
        
    }
    

    
    
    

