#include <iostream>
using namespace std;
int gcd(int num1, int num2);
void lcm(int num1, int num2 , int gcd);
int main()
{
	int num1 , x ;
	int num2;
	
	cout << "Enter two numbers: " << endl;
	cin >> num1;
	cin >> num2;
	x = gcd(num1, num2) ;
	lcm(num1, num2 , x) ;
}

int gcd(int num1, int num2)
{
	int gcd;
	if (num1 > num2)
	{
		while (num1 > num2)
		{
			gcd = num1 - num2;
			num1 = gcd;
		}
	}

	else if(num1 == num2){
		gcd = num1 ;
	}

	else
	{
		while (num2 > num1)
		{
			gcd = num2 - num1;
			num2 = gcd;
		}
	}
	cout << "GCD: " << gcd << endl ;
	return gcd ;
}

void lcm(int num1, int num2 , int gcd)
{
	int lcm = (num1*num2)/gcd ;
	cout << "LCM: " << lcm ;
	
}
