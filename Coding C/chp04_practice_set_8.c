#include <stdio.h>
int  main(){
    int n, prime = 1;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(int i = 2; i<n ; i++ ){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0 && n!=2){
        printf("%d is not a prime number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }

}