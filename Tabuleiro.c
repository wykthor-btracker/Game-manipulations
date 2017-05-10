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

void setupGUI (char* title, int width, int heigh)
{
	allegro_init();
	install_timer();
	install_keyboard();
	install_mouse();
	install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT, NULL);
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,width,heigh,0,0);
	set_window_title(title);
}

void abilitaBotaoFechar()
{
    LOCK_VARIABLE(sairDoPrograma);
    LOCK_FUNCTION(fecharJogo);
    set_close_button_callback(fecharJogo);
}

void fecharJogo()
{
    sairDoPrograma = TRUE;
}

void desenhaTABOO(BITMAP* buffer,int L,int C)
{
    int i,j;
    for(i = 0;i < L;i++)
        {
            for(j = 0;j < C;j++)
            {
                rect(buffer, 50 + j * 40, 50 + i * 40, 50 + j * 40 + 40,50 + i * 40 + 40, makecol(255,255,255));
            }
        }
}

