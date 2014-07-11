#include "simple_calc.h"

extern unsigned char FLAG_ERROR = 0;

float sum_then_divide(float arg1, float arg2, float arg3)
{
	if(arg3 == 0) {
		printf("FATAL ERROR! You can not divide by zero!\n");
		FLAG_ERROR = 1;
		return -1;
	}

	return sum(arg1, arg2) / arg3;
}
