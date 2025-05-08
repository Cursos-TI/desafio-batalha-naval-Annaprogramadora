#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
     //Criando o tabuleiro (Matriz 10x10)
#define LINHAS 10
#define COLUNAS 10
#define AGUA 0  //Define 0 como água

int main(){
        
    //Criando o tabuleiro (Matriz 10x10)
    printf("TABULEIRO BATALHA NAVAL \n");
    
    int tabuleiro [LINHAS][COLUNAS];
    int i, j;  //Contadores para os loops
   
    //Preenche todo o tabuleiro com água (0)
    for (int i = 0; i < LINHAS; i++){  //Loop externo: percorre as linhas de 0 a 9
        for(j = 0; j < COLUNAS; j++){ //Loop interno: percorre as colunas de 0 a 9
            tabuleiro[i][j] = AGUA;  //Atribui o valor 0 à célula [i][j]
        }
    }

    #define NAVIO 3
    #define TAMANHO_NAVIO 3

    int linhaNavioH = 2; //Linha onde o navio horizontal vai ficar(índice 2 = terceira linha)
    int colunaInicioNavioH = 3; //Coluna onde o navio começa (índice 3 = quarta coluna, 'D')

    printf("Colocando navio horizontal...\n");
    for(int k = 0; k < TAMANHO_NAVIO; k++){  //Repete para cada parte do navio
        int colunaAtual = colunaInicioNavioH + k; //Calcula a coluna da parte atual

        //Verifica se a coluna atual esta dentro dos limites do tabuleiro
        if(colunaAtual < COLUNAS){
            tabuleiro[linhaNavioH][colunaAtual] = NAVIO; //Coloca o valor 3 na posição
        }
    }
    
    //NÍVEL AVENTUREIRO
//--Colocando navio diagonal   
#define TAMANHO_NAVIO2 1  //Para sair apenas 1 navio por linha e ficar na diagonal

int linhaNavioD = 4;
int colunaInicioNavioD = 4;

    for(int l = 0; l < TAMANHO_NAVIO2; l++)
    {  
        int colunaAtual = colunaInicioNavioD + l; //Calcula a coluna da parte atual

        if(colunaAtual < LINHAS){  
            tabuleiro[colunaAtual][linhaNavioD] = NAVIO; //Coloca o valor 3 na posição 
        }
    }
int linha2 = 3;
int coluna2 = 3;
    for(int l = 0; l < TAMANHO_NAVIO2; l++)
    {
        int linhaAtual = coluna2 + l;  //Calcula a coluna da parte atual

        if(linhaAtual < COLUNAS){
            tabuleiro[linhaAtual][linha2] = NAVIO;  //Coloca o valor 3 na posição 
        }
    }
    //adicionei mais um para ficar na diagonal
    int linha3 = 2;
    int coluna3 = 2;
        for(int l = 0; l < TAMANHO_NAVIO2; l++){
            int linhaAtual = coluna3 + l;  //Calcula a coluna da parte atual

            if(linhaAtual < COLUNAS){
                tabuleiro[linhaAtual][linha3] = NAVIO;  //Coloca o valor 3 na posição 
            }
        }
    


//Exibindo o tabuleiro
printf("\n--Tabuleiro Final--\n");
printf("  "); //Espaço para alinhar com os números das linhas 

for(j = 0; j < COLUNAS; j++) printf(" %c ", 'A' + j); //Imprime letras A-J
printf("\n");

for(i = 0; i < LINHAS; i++){
    printf("%2d |", i + 1); //Imprime número da linha 1-10
    for(j = 0; j < COLUNAS; j++){
        printf(" %d ", tabuleiro[i][j]); //Imprime o valor da célula (0 ou 3)
    }
    printf("|\n");
 }
 

 
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
 
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
