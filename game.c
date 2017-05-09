#include <allegro.h>
#include <time.h>
#include "tabuleiro.h"

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