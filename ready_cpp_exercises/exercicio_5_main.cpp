#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int destination, option;
	
	cout << "Digite a opção referente a sua Região de destino:" << endl;
	cout << "Região Norte        (Digite 0)" << endl;
	cout << "Região Nordeste     (Digite 1)" << endl;
	cout << "Região Centro-Oeste (Digite 2)" << endl;
	cout << "Região Sul          (Digite 3)" << endl;
	cin >> destination;
	
	cout << "Se deseja uma passagem apenas de IDA (Digite 0), caso seja de IDA E VOLTA (Digite 1):" << endl;
	cin >> option;
	
	if (option == 0){
		switch(destination)
		{
			case 0:	destination = 500;
				break;
			case 1: case 2: destination = 350;
				break;
			case 3: destination = 300;
				break;
		}
	}else if (option == 1){
		switch(destination)
		{
			case 0: destination = 900;
				break;
			case 1: destination = 650;
				break;
			case 2: destination = 600;
				break;
			case 3: destination = 550;
		}
	}
	
	cout << "Sua passagem custará R$ " << destination << ",00!";

	return 0;
}