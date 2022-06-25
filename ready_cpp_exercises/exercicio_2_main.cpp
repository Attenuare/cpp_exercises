#include <iostream>
#include <locale>

using namespace std;
int main() {
	int breads, cookies;
	float total;
	setlocale(LC_ALL, "Portuguese");
	cout << "Entre com a quantidade de pães vendidos:" << endl;
	cin >> breads;
	cout << "Entre com a quantidade de broas vendidas:" << endl;
	cin >> cookies;
	
	total = (breads * 0.12) + (cookies * 1.5);
	
	cout << "Total de R$ " << total << ", os 10% a serem depositados é igual a " << total * 0.1 << endl;
	return 0;
}