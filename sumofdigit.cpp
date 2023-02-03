#include<iostream>
using namespace std;

int sumdigits(int number){
	int k = 1 , sum = 0 , m ;
	while(k>0){
		m = number % 10 ;
		sum = m + sum ;
		k = number/10 ;
		number = k ; }

return sum ; }
		
		
main(){
int number ;
cout <<"Enter the number: " ;
cin >> number ;

cout << sumdigits(number) ; }