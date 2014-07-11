#include "simple_calc.h"

unsigned char FLAG_ERROR;

float divide(float arg1, float arg2)
{
    if(arg2 != 0) {
        return arg1/arg2;
    } else {
        printf ("Delenie na 0");
        FLAG_ERROR=1;
    }
}
