#include <stdio.h>
int  main(){
    int arr[4], *ptr=arr; 
    ptr=ptr+2;
    
    if(ptr==&arr[2]){
        printf("These points to the same location in memory\n");
    }
    else{
        printf("These do not point to the same location in memory\n");
    }
}