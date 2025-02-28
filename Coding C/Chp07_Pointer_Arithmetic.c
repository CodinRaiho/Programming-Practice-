#include <stdio.h>
int  main(){
    int i = 70, *j = &i;

    printf("BY INTEGER VALUE: \n");
    printf("The value of *j before increment is %u\n", j);
    j+=5;//-------------------------------->Understanding 1 integer = 4 bytes by (pointer increment) 
    printf("The value of *j after increment is %u\n\n", j);

    char a = 'i', *b = &a;

    printf("BY CHARACTER VALUE: \n");
    printf("The value of *b before increment is %u\n", b);
    b+=5;//-------------------------------->Understanding 1 integer = 4 bytes by (pointer increment) 
    printf("The value of *b after increment is %u\n\n", b);

    float c = 1.45, *d = &c;

    printf("BY FLOAT VALUE: \n");
    printf("The value of *d before increment is %u\n", d);
    d+=5;//-------------------------------->Understanding 1 integer = 4 bytes by (pointer increment) 
    printf("The value of *d after increment is %u\n\n", d);
    return 0;
}