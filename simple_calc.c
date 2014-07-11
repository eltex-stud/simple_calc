#include "simple_calc.h"



unsigned char FLAG_ERROR = 0;

int main()
{
    int choice = 0;
    float arg1;
    float arg2;
    float arg3;
    float result;

    unsigned char FLAG_ERROR = 0;
    printf("Privet! Ya kalkulator\n");

    func_list();
    printf("Vyberite punkt menu: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: //umnozhenie
            printf("Vvedi dva chisla: ");
            scanf("%f %f", &arg1, &arg2);
            result = multiple(arg1, arg2);
            if(FLAG_ERROR) {
                return 0;
            }
            break;

        case 2: //delenie
            printf("Vvedi dva chisla: ");
            scanf("%f %f", &arg1, &arg2);
            result = divide(arg1, arg2);
            if(FLAG_ERROR) {
                return 0;
            }
            break;

        case 3: //slozhenie
            printf("Vvedi dva chisla: ");
            scanf("%f %f", &arg1, &arg2);
            result = sum(arg1, arg2);
            if(FLAG_ERROR) {
                return 0;
            }
            break;

        case 4: //vychetanie
            printf("Vvedi dva chisla: ");
            scanf("%f %f", &arg1, &arg2);
            result = sub(arg1, arg2);
            if(FLAG_ERROR) {
                return 0;
            }
            break;

        case 5: /*  (a + b) / c  */
            printf("Vvedi tri chisla: ");
            scanf("%f %f %f", &arg1, &arg2, &arg3);
            result = sum_then_divide(arg1, arg2, arg3);
            if(FLAG_ERROR) {
                return 0;
            }
            break;


        case 6: /*  (a + b) * c  */
            printf("Vvedi tri chisla: ");
            scanf("%f %f %f", &arg1, &arg2, &arg3);
            result = sum_then_mult(arg1, arg2, arg3);
            if(FLAG_ERROR) {
                return 0;
            }
            break;


    }
    printf("Rezultat: %.3f\n", result);
    return 0;
}
