#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int number_horses;
		
	cout << "Entre com a quantidade de cavalos comprados:" << endl;
	cin >> number_horses;

	cout << "Será necessário " << number_horses * 4 << " ferraduras para equipar " << number_horses << " cavalo(s)!";
	return 0;
}