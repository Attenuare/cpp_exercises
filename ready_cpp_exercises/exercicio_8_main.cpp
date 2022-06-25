#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	long double double_number[64], total_sum = 1;
	double_number[0] = 1;
	
	wcout << L"Começando contagem de grãos!" << endl;
	for(int count = 0; count < 64; count++){
		double_number[count + 1] = double_number[count] * 2;
		total_sum = total_sum + double_number[count + 1]; 
		cout << "|" << double_number[count] << "|" << endl;
	}
	
	wcout << endl << L"O total de grãos no tabuleiro é igual a " << total_sum << "!" << endl;
	return 0;
}