#include <stdio.h>
void printArray(int ptr[], int n);
int  main(){
    int arr[] = {4, 5, 2, 4, 8, 6, 90};
    printArray(arr, 7);
    printf("%d\n", arr[2]);//Won't print 2 because function changed the actual value of the array [2]
    return 0;
}
void printArray(int *ptr, int n){
    for(int i = 0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555;
}