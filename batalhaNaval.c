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

//DESAFIO NIVEL MESTRE Habilidades especiais
    #define DESENHO 5  //os desenhos(habilidades) aparecerão em numero 5

  //Habilidade Cruz parte 1
    int linhaCruz = 2;  //linha 5
    int colunaCruz = 4;  //coluna(índice 2,'C')

        for(int i= 0; i <= 0; i++){
            int linhaC = colunaCruz + i; 

            if(linhaC < COLUNAS){
                tabuleiro[linhaC][linhaCruz] = DESENHO; //Coloca o valor 5 na posição
            }
        }

  //Cruz parte 2 na HORIZONTAL
        #define TAMANHO_DESENHO 4  //coloca tamanho 4 para aparecer tamanho 5

    int linhaCruz2 = 5;
    int colunaCruz2 = 0;

        for(int i = 0; i <= TAMANHO_DESENHO; i++){
            int colunaC2 = colunaCruz2 + i;

            if(colunaCruz2 < COLUNAS){
                tabuleiro[linhaCruz2][colunaC2] = DESENHO;  //Para ficar na horizontal e sair o número 5
            
            }
        }

  //Cruz parte 3 HORIZONTAL
    int linhaCruz3 = 6; //linha 6
    int colunaCruz3 = 2; //coluna onde começa(índice 2,'C')

        for(int k= 0; k <= 0; k++){
            int colunaC3 = colunaCruz3 + k; 

            if(colunaC3 < COLUNAS){
                tabuleiro[linhaCruz3][colunaC3] = DESENHO; //Coloca o valor 5 na posição
            }
        }
    //Habilidade Octaedro parte 1
    int linhaOcta = 3;  //linha 7
    int colunaOcta = 7;  //coluna(índice 3,'D')

        for(int i = 0; i <= 0; i++){
            int linhaO = colunaOcta + i; 

            if(linhaO < COLUNAS){
                tabuleiro[linhaO][linhaOcta] = DESENHO; //Coloca o valor 5 na posição
            }
        }
    //Octaedro parte 2
      #define TAMANHO_OCTA 2   //coloca tamanho 2 para aparecer tamanho 3

    int linhaOcta2 = 8;
    int colunaOcta2 = 2;

        for(int i = 0; i <= TAMANHO_OCTA; i++){
            int colunaO = colunaOcta2 + i;

            if(colunaO < COLUNAS){
                tabuleiro[linhaOcta2][colunaO] = DESENHO;  //Para ficar na horizontal
            
            }
        }

   //Octaedro parte 3
     int linhaOcta3 = 3;  //linha 3
     int colunaOcta3 = 9;  //coluna 10, 'D'

        for(int j = 0; j <= 0; j++){
            int Octa3 = colunaOcta3 + j;

            if(Octa3 < COLUNAS){
                tabuleiro[Octa3][linhaOcta3] = DESENHO; //Coloca o valor 5 na posição
            }
        }

   //Habilidade Cone parte 1   -FIZ DE BAIXO PARA CIMA pra dar certo-
   #define TAMANHO_CONE 4

   int linhaCone = 7;  //linha 8
   int colunaCone = 5;  //começa na quinta coluna 'F'

        for(int k = 0; k <= TAMANHO_CONE; k++){
            int Cone = colunaCone + k;

            if(Cone < COLUNAS){
                tabuleiro[linhaCone][Cone] = DESENHO;
            }
        }

#define Tamanho_cone 2   //coloca 2 para aparecer tamanho 3
   int linhaCone2 = 6;  
   int colunaCone2 = 6;  

        for(int m = 0; m <= Tamanho_cone; m++){
            int Cone2 = colunaCone2 + m;

            if(Cone2 < COLUNAS){
                tabuleiro[linhaCone2][Cone2] = DESENHO;
            }
        }

    //Habilidade Cone parte  3 TOPO DO CONE
    int linhaCone3 = 5;  //linha 6
    int colunaCone3 = 7;  //começa na coluna 7 'H'

        for(int n = 0; n <= 0; n++){
            int Cone3 = colunaCone3 + n;

            if(Cone3 < COLUNAS){
                tabuleiro[linhaCone3][Cone3] = DESENHO;
            }
        }


//Exibindo o tabuleiro
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
