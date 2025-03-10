#include <iostream>
using namespace std;
int main(){
    int Number, Prime = 1;

    cout<<"Enter the number to identify whether it is prime or not: "<<endl;
    cin>>Number;

    for(int i = 2; i<Number ; i++ ){
        if(Number%i==0){
            Prime=0;
            break;
        }
    }
    if(Prime==0 && Number!=2){
        cout<<Number<<" IS NOT a prime number"<<endl;
    }
    else{
        cout<<Number<<" IS a prime number"<<endl;;
    }

    return 0;
}