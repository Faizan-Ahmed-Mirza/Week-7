#include<iostream>
using namespace std ;

main(){
int previous , current , next , x ;
cout <<"Series upto : " ;
cin >> x ;
previous = 0 ;
current = 1 ;
cout << previous <<"  ,  " << current ;

for(int i = 1 ; i <= x-2 ; i++){
	next = previous+current ;
	cout <<"  ,  " << next ;
	previous = current ;
	current = next ; }
}