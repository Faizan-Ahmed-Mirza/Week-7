#include<iostream>
using namespace std ;

int totaldigit(int number){
	int c = 0 ;
	while(number > 1){
		number = number/10 ; 
		c =  c + 1 ; }
return c ;
 }

main(){
int number  ;
cout <<"Enter number: " ;
cin >> number ;

cout << totaldigit(number)  ; } 


