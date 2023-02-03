#include<iostream>
using namespace std ;

void printrow(int r){
	int count2 = 1 ; int count3 = 1 ;
	int count = r ;
	while(count > 0){
		while(count2 < count){
			cout << " " ; 
			count2 = count2 + 1 ;
			}
		count3 = r - count ;
		while(count3 > 0){
			cout << "*" ;
			count3 = count3 - 1; 
		}
		cout << endl ;
		count = count - 1 ;
		count2 = 1 ;
	}
} 

main(){
	int r ;
	cout <<"Enter number of rows: " ;
	cin >> r ;

	printrow(r) ;
	
}
