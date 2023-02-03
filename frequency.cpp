#include<iostream>
using namespace std ;

int frequency(int number , int digit)
{
	int module , count = 0 ; 
	while(number > 0){
		module = number % 10 ;
		if(module == digit){
			count = count + 1 ; }
		number = number/10 ;
		if(number == digit){
			count = count + 1 ; } }


return count ; }


main(){
int number , digit ;
cout << " Enter number : " ;
cin >> number ;
cout << " Enter digit : " ;
cin >> digit ;

cout << frequency(number , digit) ; }
