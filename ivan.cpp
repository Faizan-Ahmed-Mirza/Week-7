#include<iostream>
using namespace std ;

float survival(float money,int year){
	int startyear = 1800 ; int modulous ;
	while(startyear <= year){
		modulous = startyear%2 ;
		startyear = startyear + 1 ;
		if(modulous == 0){
			money = money - 12000 ;
		}	
		else if(modulous != 0){
			money = money - (12000 + 50*(18+(startyear-1801))) ;
		}}
return money ;}

main(){
	float money ; int year ;
	cout <<"Enter money inherited(in dollars): " ;
	cin >> money ;
	cout <<"Enter year you want to survive upto: " ;
	cin >> year ;
	
	money = survival(money , year) ;
	
	if(money<0){
		cout <<"He will need " << -1*money <<" dollars to survive." << endl ;
	}	
	else if(money>=0){
		cout <<"He will live a carefree life with " << money <<" dollars left behind!" << endl ;
	} }
