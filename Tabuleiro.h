#include <stdio.h>
#include <string.h>
#ifndef tabuleiro_h
#define tabuleiro_h
#endif
typedef struct tabuleiro tabuleiro;
typedef struct tabuleiro *refTabuleiro;

extern int sairDoPrograma;

struct tabuleiro
{
	int posicaoX,posicaoY;
	int dimensaoX,dimensaoY;
	//pontPeca *lista;
	char *bitmap;
	//char **sons;
	char *nome;
	int **centros; // Uma lista contendo os centros de quadrantes definidos para um tabuleiro quadrado.
};

refTabuleiro init(int px,int py,int dx,int dy, int *dim, char *bitmap, char *nome);
//Inicializa o objeto referenciado pelo ponteiro refTabuleiro.

void fechar(refTabuleiro morto);
//Destroi todas as referencias e libera as areas de memoria apropriadas.

int *pegarPos(refTabuleiro atual);

int *pegarDimensao(refTabuleiro atual);

char *pegarBitmap(refTabuleiro atual);

char *pegarNome(refTabuleiro atual);

void mudarPos(int *novaPos,refTabuleiro atual);

void mudarDimensao(int *novaDimensao,refTabuleiro atual);

void mudarBitmap(char *novoBitmap,refTabuleiro atual);

void mudarNome(char *novoNome,refTabuleiro atual);

void setupGUI (char* titulo, int width, int height);

void abilitaBotaoFechar();

void fecharJogo();

void desenhaTABOO(BITMAP* buffer,int L,int C);


	
