#include <stdio.h>
#include <allegro.h>


int main()
{
	allegro_init();
	install_timer();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	set_window_title("Hello World");

	while(!key[KEY_ESC])
	{
		textout_centre_ex(screen, font, "Hello World", SCREEN_W/2,SCREEN_H/2, makecol(255, 255, 255), -1);
	}

	return 0;
}
END_OF_MAIN();
