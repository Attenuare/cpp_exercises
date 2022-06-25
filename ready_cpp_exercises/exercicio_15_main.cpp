#include <iostream>
#include <locale.h>

using namespace std;
bool test_perfect(int number){
	int acumulator = 0;
	for (int count = 1; count < number; count++){
		if (number%count == 0){
			acumulator = acumulator + count;
		}
	}
	if (acumulator == number){
		return true;
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int number;
	wcout << L"Verificar se um número é perfeito ou não!" << endl;
	wcout << L"Entre com um número: ";
	cin >> number;
	
	if (test_perfect(number) == true){
		wcout << L"Verdadeiro! O número " << number << L" é perfeito!";
	}else{
		wcout << L"Falso! O número " << number << L" não é perfeito!";
	}
	return 0;
}