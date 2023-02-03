#include<iostream>
using namespace std ;

main(){
    int num , dots = 0 ;
    cout << "Enter triangular number: " ;
    cin >> num ;

    for(int i = 1 ; i <= num ; i++){
        dots = dots + i ;
    }

    cout << dots ;
}