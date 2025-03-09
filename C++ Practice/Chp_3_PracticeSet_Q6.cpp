#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;

    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"Enter third number: "<<endl;
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"The first number is the greatest number"<<endl;
    }

    else if(num2>num1 && num2>num3){
        cout<<"The second number is the greatest number"<<endl;
    }

    else if(num3>num1 && num3>num2){
        cout<<"The third number is the greatest number"<<endl;
    }

    return 0;
}