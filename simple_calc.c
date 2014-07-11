#include "simple_calc.h"

int main()
{
    int choice = 0;
    int arg1;
    int arg2;
    int arg3 = 2;
    float reuslt;
    printf("Privet! Ya kalkulator. Ya mogu:\n");

    func_list();

    printf("Vvedi dva chisla: ");
    scanf("%d %d", &arg1, &arg2);
    


    printf("Vyberite punkt menu: ");
    func_list();
    scanf("%d", &choice);

    switch(choice) {
        case 1: //umnozhenie
            result = multiple(arg1, arg2);
            break;

        case 2: //delenie
            result = divide(arg1, arg2);
            break;

        case 3: //slozhenie
            result = sum(arg1, arg2);
            break;

        case 4: //vychetanie
            result = deduct(arg1, arg2);
            break;

        case 5: /*  (a + b) / c  */
            result = sum_then_divide(arg1, arg2, arg3);
            break;

        case 6: /*  (a + b) * c  */
            result = sum_then_mult(arg1, arg2, arg3);
            break;
    }

    return 0;
}
