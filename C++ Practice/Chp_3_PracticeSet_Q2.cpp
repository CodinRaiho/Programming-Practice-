#include <iostream>
using namespace std;
int main(){
    int Physics, Chemistry, Maths;
    double total;

    cout<<"Enter marks for Physics: "<<endl;
    cin>>total;

    cout<<"Enter marks for Chemistry: "<<endl;
    cin>>Chemistry;

    cout<<"Enter marks for Maths: "<<endl;
    cin>>Maths;

    total=(Physics+Chemistry+Maths)/3;

    if(total<40||Physics<33||Chemistry<33||Maths<33){
        cout<<"You scored "<<total<<" percentage in total and you failed\n"<<endl;
    }
    else{
        cout<<"You scored "<<total<<" percentage in total and you passed\n"<<endl;
    }

    return 0;
}