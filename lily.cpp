#include<iostream>
using namespace std ;

float calculatemoney(int age , float toyprice , float machineprice){
	int toys = 0 ; int modulous ; int savedmoney = 0 ;
	float money = 0 ;
	for(int bday = 1 ; bday <= age ; bday++){
		modulous = bday % 2 ;
		if(modulous != 0){
			toys = toys + 1 ;
		}
	    else{
			savedmoney = savedmoney + (10*(bday/2)-1) ;
	}	
	}
	money = toys*toyprice + savedmoney ;
	money = money - machineprice ;
	return money ;
}

main(){
	int age ; float toyprice ; float money ; float machineprice ;
	cout <<"Enter Lily's age: " ;
	cin >> age ;
	cout <<"Enter each toy's price: " ;
	cin >> toyprice ;
	cout <<"Enter machine price she wants to buy: " ;
	cin >> machineprice ;
	
	money = calculatemoney(age , toyprice , machineprice) ;
		
	if(money>=0){
		cout << "Yes. She has " << money << " dollars left behind!" ;
	}
	else if(money<0){
		cout << "No. She lacks " << -1*money << " dollars." ;
	}
	
	
}
