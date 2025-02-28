#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main(){
    srand(time(0));
    int guess, nguesses=1, number= rand()%100+1;
    //printf("The number is %d\n", number);

    do{
        printf("Enter the number between 1 and 100\n");
        scanf("%d", &guess);
        
        if(guess>number){
            printf("Number is too high! Guess a little lower number\n");
        }
        else if(guess<number){
            printf("Number is too low! Guess a little higher number\n");
        }
        else{
            printf("You guessed it correct!, You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}