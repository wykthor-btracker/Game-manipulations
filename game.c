#include <allegro.h>
#include <time.h>
#include "contadores/count.h"

void setupGUI (char* , int , int );
void abilitaBotaoFechar();
void fecharJogo();
volatile int sairDoPrograma = FALSE;
void desenhaTABOO(BITMAP* ,int ,int );

int main()
{
    setupGUI("TABULEIRO",640,480); //titulo e tamanho da tela do jogo
    abilitaBotaoFechar();
    TICKS();
    install_int_ex(tick_counter, BPS_TO_TIMER(60)); //BPS == FPS *NÃO QUESTIONE, controle dos fps;
    MILI();
    install_int_ex(msec_counter, MSEC_TO_TIMER(1)); // MILISEGUNDOS, contador de tempo do jogo; //

    ///BITMAPS
    BITMAP* buffer =  create_bitmap(SCREEN_W,SCREEN_H);


    ///VARIAVEIS

    ///GAME LOOP
    while(!sairDoPrograma)
    {
        while(ticks > 0 && !sairDoPrograma)
        {
        //INPUT
        if(key[KEY_ESC])
            fecharJogo();

        //UPDATE


        //DRAW
        desenhaTABOO(buffer,10,8);
        draw_sprite(screen, buffer, 0,0);
        clear_to_color(buffer, makecol(0,0,0));
        ticks--;
        }
    }
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN()


void setupGUI (char* title, int width, int heigh)
{
	allegro_init();
	install_timer();
	install_keyboard();
	install_mouse();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,width,heigh,0,0);
	install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT, NULL);
	set_window_title(title);
}
END_OF_FUNCTION(setupGUI)

void abilitaBotaoFechar()
{
    LOCK_VARIABLE(sairDoPrograma);
    LOCK_FUNCTION(fecharJogo);
    set_close_button_callback(fecharJogo);
}
END_OF_FUNCTION(abilitaBotaoFechar);

void fecharJogo()
{
    sairDoPrograma = TRUE;
}
END_OF_FUNCTION(fecharJogo)

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
END_OF_FUNCTION(desenhaTABOO)