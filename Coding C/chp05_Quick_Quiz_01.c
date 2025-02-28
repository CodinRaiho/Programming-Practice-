#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int  main(){
    printf("I will greet you now, by force\n");
    GoodMorning();
    printf("That's it with my greeting\n");
}
void GoodMorning(){
    printf("GoodMorning\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("GoodAfternoon\n");
    GoodNight();
}
void GoodNight(){
    printf("GoodNight, sleep tight\n");
    return;
}