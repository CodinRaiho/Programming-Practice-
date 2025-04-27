#include <iostream>
using namespace std;
int main(){
    int num = 8, sum = 0;

    for(int i=1; i<=10; i++){
        int product = num * i;
        sum += product;
    }
    cout << "The sum of the numbers in the multiplication table of 8 is: " << sum << endl;
    return 0;
}