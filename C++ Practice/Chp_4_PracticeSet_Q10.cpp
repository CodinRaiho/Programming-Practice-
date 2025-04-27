#include <iostream>
using namespace std;
int main(){
    int num;
    bool prime = true;

    cout<<"Enter the num to identify whether it is prime or not: "<<endl;
    cin>>num;

    for(int i = 2; i < num ; i++ ){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(!prime || num < 2){
        cout<<num<<" IS NOT a prime num"<<endl;
    }
    else{
        cout<<num<<" IS a prime num"<<endl;;
    }

    return 0;
}