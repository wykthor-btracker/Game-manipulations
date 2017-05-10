#include <stdio.h>
#include <stdlib.h>
#include "Tabuleiro.h"
#define DEBUG if(0)
#define NUMEROQUADRANTES 64

refTabuleiro init(int px,int py,int dx,int dy, int *dim, char *bitmap, char *nome)
{
	refTabuleiro novo = malloc(sizeof(tabuleiro));
	novo->posicaoX = px;
	novo->posicaoY = py;
	
	novo->dimensaoX = dx;
	novo->dimensaoY = dy;
	
	novo->bitmap = malloc(sizeof(char));
	strcpy(novo->bitmap,bitmap);
	
	novo->nome = malloc(sizeof(char)*10);
	strcpy(novo->nome,nome);
	
	//novo->lista = malloc(sizeof(pontPeca));
	return novo;
}


void matarPonteiro(void *pointer)
{
	free(pointer);
	pointer = NULL;
}

void fechar(refTabuleiro morto)
{
	free(morto->bitmap);
	free(morto->nome);
	morto->bitmap = 	NULL;
	morto->nome = 		NULL;
	free(morto);
	morto = NULL;
}

int *pegarPos(refTabuleiro atual)
{
	int *pos = malloc(sizeof(int)*2);
	pos[1] = atual->posicaoX;
	pos[0] = atual->posicaoY;
	return pos;
}

int *pegarDimensao(refTabuleiro atual)
{
	int *dimensao = malloc(sizeof(int)*2);
	dimensao[0] = atual->dimensaoY;
	dimensao[1] = atual->dimensaoX;
	return dimensao;
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
	atual->posicaoX = novaPos[1];
	atual->posicaoY = novaPos[0];
}

void mudarDimensao(int *novaDimensao,refTabuleiro atual)
{
	atual->dimensaoY = novaDimensao[0];
	atual->dimensaoX = novaDimensao[1];
}

void mudarBitmap(char *novoBitmap,refTabuleiro atual)
{
	strcpy(atual->bitmap,novoBitmap);
}

void mudarNome(char *novoNome,refTabuleiro atual)
{
	strcpy(atual->nome,novoNome);
}

