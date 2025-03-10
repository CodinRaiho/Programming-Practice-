#include <iostream>
using namespace std;
int main(){
    int i = 0, n, factorial = 1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(i = 1; i<=n ; i++){
        factorial *= i;
    }
    cout<<"The factorial of "<<n<<" is: "<<factorial<<endl;
    return 0;
}