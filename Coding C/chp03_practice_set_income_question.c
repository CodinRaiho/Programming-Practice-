#include <stdio.h>
int  main(){
    
    int income;

    printf("Enter your income(in lakhs)\n");
    scanf("%d", &income);

    if(income<250000){
        printf("Your income is %d and there won't be any tax on the income since it is less than 2.5 lakhs\n", income);
    }
    else if(income>=250000 && income<500000){
        printf("Your income is %d and there will be 5%% tax on the income since it is equal to or more than 2.5 lakhs", income);
    }
    else if(income>=500000 && income<1000000){
        printf("Your income is %d and there will be 20%% tax on the income since it is equal to or more than 5 lakhs", income);
    }
    else if(income>=1000000){
        printf("Your income is %d and there will be 30%% tax on the income since it is equal to or more than 10 lakhs", income);
    }
    return 0;
}