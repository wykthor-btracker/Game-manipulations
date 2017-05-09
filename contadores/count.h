#ifndef COUNT_H_INCLUDED
#define COUNT_H_INCLUDED

#include <allegro.h>

volatile int milisegundos;
volatile int ticks;

void TICKS();
void MILI();
void tick_counter();
void msec_counter();

#endif // COUNT_H_INCLUDED
