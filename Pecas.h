#include <stdio.h>
#include "Tabuleiro.h"
#ifndef pecas_h
#define pecas_h
#endif

typedef struct peca peca;
typedef struct peca *pontPeca;

struct peca
{
	int *pos;
	char *Nome;
	char *Imagem;
	//Sons.
	refTabuleiro pai;
};

pontPeca initPeca(int *pos, char *nome, char *imagem,refTabuleiro pai);
	
