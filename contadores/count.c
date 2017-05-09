#include "count.h"

void TICKS()
{
    ticks = 0;
    LOCK_VARIABLE(ticks);
    LOCK_FUNCTION(tick_counter);
}

void tick_counter()
{
    ticks++;
}

void MILI()
{
    milisegundos = 0;
    LOCK_VARIABLE(milisegundos);
    LOCK_FUNCTION(msec_counter);
}

void msec_counter()
{
    milisegundos++;
}

