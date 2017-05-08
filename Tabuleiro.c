#include <stdio.h>
#include <stdlib.h>
#include "Tabuleiro.h"
#define DEBUG if(0)
#define NUMEROQUADRANTES 64

refTabuleiro init(int *pos, int *dim, char *bitmap, char *nome)
{
	refTabuleiro novo = malloc(sizeof(tabuleiro));
	novo->posicao = malloc(sizeof(int)*2);
	novo->posicao = pos;
	
	novo->dimensao = malloc(sizeof(int)*2);
	novo->dimensao = dim;
	
	novo->bitmap = malloc(sizeof(char));
	strcpy(novo->bitmap,bitmap);
	
	novo->nome = malloc(sizeof(char)*10);
	strcpy(novo->nome,nome);
	
	novo->lista = malloc(sizeof(pontPeca));
	return novo;
}

int **listaPos(refTabuleiro tabu)
{
	int i,**lista = malloc(sizeof(int*)*NUMEROQUADRANTES);
	for(i=0;i<8;i++) lista[i] = malloc(sizeof(int)*2);
	int dist = tabu->dimensao[0]/8;
	lista[0][0] = dist/2;
	lista[0][1] = dist/2;
	int j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			a
}
void fechar(refTabuleiro morto)
{
	free(morto->posicao);
	free(morto->dimensao);
	free(morto->bitmap);
	free(morto->nome);
	morto->posicao = 	NULL;
	morto->dimensao = 	NULL;
	morto->bitmap = 	NULL;
	morto->nome = 		NULL;
	free(morto);
	morto = NULL;
}

int *pegarPos(refTabuleiro atual)
{
	return atual->posicao;
}

int *pegarDimensao(refTabuleiro atual)
{
	return atual->dimensao;
}

char *pegarBitmap(refTabuleiro atual)
{
	return atual->bitmap;
}

char *pegarNome(refTabuleiro atual)
{
	return atual->nome;
}

void mudarPos(int *novaPos,refTabuleiro atual)
{
	atual->pos = novaPos;
}

void mudarDimensao(int *novaDimensao,refTabuleiro atual)
{
	atual->dimensao = novaDimensao;
}

void mudarBitmap(char *novoBitmap,refTabuleiro atual)
{
	strcpy(atual->bitmap,novoBitmap);
}

void mudarNome(char *novoNome,refTabuleiro atual)
{
	strcpy(atual->nome,novoNome);
}

