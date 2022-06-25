#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int delimiter;
	wcout << L"Entre com o número de setores do vetor: " << endl;
	cin >> delimiter;
	int primary_sector[delimiter];
	
	for (int count=0; count < delimiter; count++){
		wcout << "Entre com o " << count + +1 << L" número do Vetor: ";
		cin >> primary_sector[count];
	}
	for (int count_one = 0; count_one < delimiter; count_one++) {
    	for (int count_two = count_one; count_two < delimiter; count_two++){
        if (primary_sector[count_one] > primary_sector[count_two]) {
             swap(primary_sector[count_one], primary_sector[count_two]);
        }
    }
}
	wcout << L"Vetor em ordem crescente: " << endl;
	for (int count=0; count < delimiter; count++){
		cout << primary_sector[count] << "|";
	}
	return 0;
}