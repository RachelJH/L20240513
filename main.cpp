#include <iostream>

using namespace std;
int main() 
{
	float Number1;
	float Number2;
	float Sum;
	float Multiful;
	float Divide;
	float Substract;
		
	cin >> Number1 ;
	cin >> Number2;

	Sum = Number1 + Number2;
	Substract = Number1 - Number2;
	Multiful = Number1 * Number2;
	Divide = Number1 / Number2;	

	cout << Sum << endl;
	cout << Substract << endl;
	cout << Multiful << endl;
	cout << Divide << endl;

	return 0;
}