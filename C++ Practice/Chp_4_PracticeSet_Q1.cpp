#include <iostream>
using namespace std;
int main(){
    int Number;

    cout<<"Enter The Number to create its multiplication table: "<<endl;
    cin>>Number;

    for(int i=1; i<=10; i++){
        cout<<Number<<" X "<<i<<" = "<<Number*i<<endl;
    }
    return 0;
}