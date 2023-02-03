#include<iostream>
using namespace std ;

void printrow(int r){
	int count = 1;
	while(count <= r){
		for(int n = 1 ; n <= count ; n++){
		cout << "*" ; }
	cout << endl ;	
	count = count + 1;
} }

main(){
	int r ;
	cout <<"Enter number of rows: " ;
	cin >> r ;

	printrow(r) ;
	
}
