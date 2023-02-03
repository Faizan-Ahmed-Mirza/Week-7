#include<iostream>
using namespace std ;

void printrow1(int r){
	int spaceCount = 1 ; int count3 = 1 ;
	int count = r ;
	while(count > 0){
		while(spaceCount < count){
			cout << " " ; 
			spaceCount = spaceCount + 1 ;
			}
		count3 = r - count ;
		while(count3 >= 0){
			cout << "*" ;
			count3 = count3 - 1; 
		}
		cout << endl ;
		count = count - 1 ;
		spaceCount = 1 ;
	}
} 

void printrow(int r){
	int sterikCount = 1 ; int count3 = -1 ;
	int count = r ;
	while(count > 0){
		while(count3 >= 0){
			cout << " " ;
			count3 = count3 - 1; 
		}

		while(sterikCount <= count){
			cout << "*" ; 
			sterikCount = sterikCount + 1 ;
			}
		count3 = r - count ;
		
		cout << endl ;
		count = count - 1 ;
		sterikCount = 1 ;
	}
} 

main(){
	int r ;
	cout <<"Enter number of rows: " ;
	cin >> r ;

	printrow1(r) ;
	printrow(r) ;
}