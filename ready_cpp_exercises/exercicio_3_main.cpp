#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int small_shirt, medium_shirt, big_shirt;
	
	cout << "Caso não tenho comprado camisetas de alguns dos tamanhos a seguir digite '0'!" << endl;
	cout << "Entre com a quantidade de camisetas grandes:" << endl;
	cin >> big_shirt;
	cout << "Entre com a quantidade de camisetas médias:" << endl;
	cin >> medium_shirt;
	cout << "Entre com a quantidade de camisetas pequenas:" << endl;
	cin >> small_shirt;
	
	cout << "O total arrecadado é igual a " << ((small_shirt * 10) + (medium_shirt * 12) + (big_shirt * 15)) << " reais!" << endl;
	
	return 0;
}