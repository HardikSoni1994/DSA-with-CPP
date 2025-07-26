#include<iostream>
using namespace std;

main(){

    // 1 11 111 1111 11111

    for(int i = 1 ; i<= 5 ; i++){
        for(int j=1 ; j<= i ; j++)
        {
            cout << "1";
        }
        cout <<"  ";
    }
}