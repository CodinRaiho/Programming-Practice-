#include <stdio.h>
int b = 334;
void change();
int  main(){
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b);
    return 0;
}
void change(){
    b = 77;
}