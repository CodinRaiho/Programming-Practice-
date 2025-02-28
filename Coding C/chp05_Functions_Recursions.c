#include <stdio.h>
int a;
void display();//---->Display call
int  main(){
    printf("Function has started it's work\n");
    display();
    printf("Function has ended it's work\n");
    
    return 0;
}
void display(){//---->Display definition
    printf("Enter the value of a\n");
    scanf("%d", &a);
    if(a>10){
        printf("%d is greater than 10\n", a);
    }
    else if(a<10){
        printf("%d is smaller than 10\n", a);
    }
    else if(a==10){
        printf("%d is equal to 10\n", a);
    }
    else{
        printf("%d is neither smaller nor greater than 10\n", a);
    }
}