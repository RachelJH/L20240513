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
		
	cout << "��Ģ���� �� ���� 2���� �Է����ֻ���." << endl;
	cin >> Number1 ;
	cin >> Number2;

	Sum = Number1 + Number2;
	Substract = Number1 - Number2;
	Multiful = Number1 * Number2;
	Divide = Number1 / Number2;	

	cout << "���ϱ�:" << Sum << endl;
	cout << "����:" << Substract << endl;
	cout << "���ϱ�:" << Multiful << endl;
	cout << "������:" << Divide << endl;

	return 0;
}