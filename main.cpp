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
		
	cout << "사칙연산 할 숫자 2개를 입력해주새요." << endl;
	cin >> Number1 ;
	cin >> Number2;

	Sum = Number1 + Number2;
	Substract = Number1 - Number2;
	Multiful = Number1 * Number2;
	Divide = Number1 / Number2;	

	cout << "더하기:" << Sum << endl;
	cout << "빼기:" << Substract << endl;
	cout << "곱하기:" << Multiful << endl;
	cout << "나누기:" << Divide << endl;

	return 0;
}