/* myBank.c */

#include "myBank.h"
#include <stdio.h>


void type_O(){

    double amount = 0;

    printf("Please enter amount for deposit: ");

    //num = 1 if amount is type of double, else num = 0
    double num = scanf(" %lf", &amount);

    //if it's not a valid amount
    if(!num) printf("Failed to read the amount\n");

    else if(amount < 0) printf("Invalid Amount\n");

    else {
        for (int i = 0; i < SIZE; i++) {
            if (account[i][1] == 0) {
                account[i][1] = 1;
                account[i][0] = amount;
                printf("New account number is: %d \n", i+901);
                break;
            }
        }
    }
}

void type_B(){

    int adress = 0;
    printf("Please enter account number:");

    int num = scanf(" %d", &adress);

    adress-=901;

    if(!num){
        printf(" Failed to read the account number\n");
    }

    else if(adress < 0 || adress >= 50){
        printf("Invalid account number\n");
    }

    else if(account[adress][0] == 0){
        printf(" This account is closed\n");
    }

    else {
        printf(" The balance of account number %d is: %.2f\n", adress+901, account[adress][0]);
    }

}

void type_D(){
    int accountnumber;
    double deposit;

    printf("Please enter account number:");
    int num = scanf(" %d", &accountnumber);

    accountnumber-=901;

    if(!num){
        printf(" Failed to read the account number\n");
    }

    else if(accountnumber < 0 || accountnumber >= 50) printf(" Invalid account number\n");

    else if(account[accountnumber][1] == 0) printf(" This account is closed\n");

    else{
        printf(" Please enter the amount to deposit:");
        double amount = scanf(" %lf", &deposit);

        if(deposit < 0){
            printf(" Cannot deposit a negative amount");
        }
        else if(!amount) printf(" Failed to read the amount");
        else {
            account[accountnumber][0] += deposit;
            printf(" The new balance is: %.2f\n", account[accountnumber][0]);
        }
    }

}

void type_W(){

    int accountnumber;
    double withdraw;

    printf("Please enter account number:");
    int num = scanf(" %d", &accountnumber);

    accountnumber-=901;

    if(!num){
        printf(" Failed to read the account number\n");
    }
    else if(accountnumber < 0 || accountnumber >= 50) printf(" Invalid account number\n");

    else if(account[accountnumber][0] == 0) printf(" This account is closed\n");

    else {
        printf(" Please enter the amount to withdraw:");
        double amount = scanf(" %lf", &withdraw);

        if(!amount) printf(" Failed to read the amount");
        else {
            account[accountnumber][0] -= withdraw;
            printf(" The new balance is: %.2f\n", account[accountnumber][0]);
        }
    }

}

void type_C(){

    int adresse = 0;
    printf("Please enter account number: ");

    int num = scanf(" %d", &adresse);
    adresse-=901;

    if(!num){
        printf(" Failed to read the account number\n");
    }

    else if(account[adresse][1] == 0) printf(" This account is already closed");
    else {
        account[adresse][1] = 0;
        printf(" Closed account number %d\n", adresse+901);
    }
}

void type_E(){

    for(int i=0; i<SIZE; i++){
        account[i][1] = 0; // 0 means  account is closed

    }
}

void type_P() {
    for (int i = 0; i < SIZE; ++i) {
        if (account[i][1] == 1) {
            int adresse = 0;
            adresse = i + 901;
            printf("The balance of account number %d is: %1.2lf \n", adresse, account[i][0]);

        }
    }
}


void type_I() {
    double rate = 0;
    printf("Please enter interest rate:");
    double num = scanf(" %lf", &rate);

    if(!num) printf(" Failed to read the interest rate\n");

    else if(rate < 0) printf(" Invalid interest rate\n");

    else {
        for (int i = 0; i < SIZE; ++i) {
            if (account[i][1] == 1) {
                account[i][0] = account[i][0] * (1 + (rate / 100));
                printf("\nTest\nThe balance of account number %d is:%1.2lf \n", i + 901, account[i][0]);
            }
        }
    }
}


