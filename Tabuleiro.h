#include <stdio.h>
#include <string.h>

typedef struct tabuleiro tabuleiro;
typedef struct tabuleiro *refTabuleiro;

struct tabuleiro
{
	int *posicao;
	int *dimensao;
	pontPeca *lista;
	char *bitmap;
	//char **sons;
	char *nome;
};

refTabuleiro init(int *pos, int *dim, char *bitmap, char *nome);
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


	
