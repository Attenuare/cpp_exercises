#include <iostream>
#include <locale.h>

using namespace std;
bool test_prime(int number){
	for (int count= 2; count <= number/2; count++){
		if (number%count == 0){
			return false;
		}
	}
	return true;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int number;
	bool tester;
	wcout << L"Descubra se determinado número é primo!" << endl;
	wcout << L"Entre com um número :";
	cin >> number;
	if (test_prime(number) == false){
		wcout << L"Falso! O número " << number << L" não é primo!" << endl;
	}else{
		wcout << L"Verdadeiro! O número " << number << L" é primo!" << endl;
	}
	
	return 0;
}