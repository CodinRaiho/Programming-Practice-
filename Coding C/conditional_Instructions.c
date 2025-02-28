#include <stdio.h>

void checkLeague(int number, int trophyCount);

void main() {
    // Using relational operators with if-else
    int a = 150, b = 100;
    if(a > b) {
        printf("Running 'if' code\n");
        printf("%d is Greater than %d\n", a, b);
    }
    else {
        printf("Running 'else' code\n");
        printf("%d is Greater than %d\n", b, a);
    }

    // Understanding if, else-if and else with an example:
    int amount1 = 156000, amount2 = 99999, amount3 = 49999;
    
    if(amount1 > 100000) {
        printf("Amount %d is greater than 1 lakh\n", amount1);
    }
    else if(amount1 > 50000) {
        printf("Amount %d is greater than 50k\n", amount1);
    }
    else {
        printf("Amount %d is less than both 1 lakh and 50k\n", amount1);
    }

    if(amount2 > 100000) {
        printf("Amount %d is greater than 1 lakh\n", amount2);
    }
    else if(amount2 > 50000) {
        printf("Amount %d is greater than 50k\n", amount2);
    }
    else {
        printf("Amount %d is less than both 1 lakh and 50k\n", amount2);
    }

    if(amount3 > 100000) {
        printf("Amount %d is greater than 1 lakh\n", amount3);
    }
    else if(amount3 > 50000) {
        printf("Amount %d is greater than 50k\n", amount3);
    }
    else {
        printf("Amount %d is less than both 1 lakh and 50k\n", amount3);
    }

    // Using other relational operators:
    if(100 == 99) printf("100 == 99\n");
    else printf("100 != 99\n");

    if(100 > 99) printf("100 > 99\n");
    if(99 < 100) printf("99 < 100\n");
    if(100 >= 99) printf("100 >= 99\n");
    if(99 <= 100) printf("99 <= 100\n");

    if(100 != 99) printf("100 != 99\n\n");

    // Using logical operators with if-else
    // Eg: 
    int player1 = 1000, player2 = 1500, player3 = 2000, player4 = 2500, player5 = 3000, player6 = 500;
    checkLeague(1, player1);
    checkLeague(2, player2);
    checkLeague(3, player3);
    checkLeague(4, player4);
    checkLeague(5, player5);
    checkLeague(6, player6);

    // Understanding OR ||, NOT !
    00
    
}

void checkLeague(int number, int trophyCount) {
    printf("\nPlayer %d: ", number);
    if(trophyCount < 1000) {
        printf("No League");
    }
    else if(trophyCount >= 1000 && trophyCount < 1500) {
        printf("Gold League");
    }
    else if(trophyCount >= 1500 && trophyCount < 2200) {
        printf("Crystal League");
    }
    else if(trophyCount >= 2200 && trophyCount < 2600) {
        printf("Master League");
    }
    else if(trophyCount >= 2600 && trophyCount < 3000) {
        printf("Champion League");
    }
    else {
        printf("Legend League");
    }
}