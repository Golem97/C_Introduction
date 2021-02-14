/* main.c */

#include "myBank.h"
#include "myBank.c"
#include <stdio.h>

int main() {

    char operation;



    while(operation != 'E') {
        printf("\nPlease choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");

        scanf("%c", &operation);

        switch (operation) {
            case 'O':
                type_O();
                break;

            case 'B':
                type_B();
                break;

            case 'D':
                type_D();
                break;

            case 'W':
                type_W();
                break;

            case 'C':
                type_C();
                break;

            case 'I':
               type_I();
                break;

            case 'P':
                type_P();
                break;

            case 'E':
                type_E();
                break;


            default:
                printf("Invalid transaction type\n");
                break;
        }
    }

    return 0;
}