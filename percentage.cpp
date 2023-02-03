#include<iostream>
using namespace std ;

void printpercentage(int count1 , int count2 , int count3 , int count4 , int count5 , int numofnum){
    float per1 , per2 , per3 , per4 , per5 ;
    per1 = (count1*100)/numofnum ;
    per2 = (count2*100)/numofnum ;
    per3 = (count3*100)/numofnum ;
    per4 = (count4*100)/numofnum ;
    per5 = (count5*100)/numofnum ;

    cout << per1 << endl ;
    cout << per2 << endl ;
    cout << per3 << endl ;
    cout << per4 << endl ;
    cout << per5 << endl ;
}

main(){
    int numofnum , x = 1 ; float number ;
    int count1 = 0 , count2 = 0 , count3 = 0 , count4 = 0 , count5 = 0 ;
    cout <<"Enter count of numbers: " ;
    cin >> numofnum ;
    
    while(x <= numofnum){
        cout << "Enter " << x << "th number: " ;
        cin >> number ;
        if(number < 200){
            count1 =  count1 + 1 ;
        }
        else if(number < 400){
            count2 = count2 + 1 ;
        }
        else if(number < 600){
            count3 = count3 + 1 ;
        }
        else if(number < 800){
            count4 = count4 + 1 ;
        }
        else if(number > 799){
            count5 = count5 + 1 ;
        }
        x = x + 1 ;

    }

    printpercentage(count1 , count2 , count3 , count4 , count5 , numofnum) ;
}