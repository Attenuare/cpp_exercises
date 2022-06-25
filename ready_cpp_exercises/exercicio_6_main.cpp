#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int age;
	float weight, concentration;
	
	cout << "Determina a quantidade de gotas deste medicamento para o paciente!" << endl;
	cout << "Entre com a idade do paciente:" << endl;
	cin >> age;
	cout << "Entre com o peso do paciente:" << endl;
	cin >> weight;
	
	if (age >= 12){
		if (weight >= 60){
			concentration = 1000;
		}else if (weight < 60){
			concentration = 875;
		}
	}else if (age < 12){
		if (weight >= 5 and weight <= 9){
			concentration = 125;
		}else if (weight >= 9.1 and weight <= 16){
			concentration = 250;
		}else if (weight >= 16.1 and weight <= 24){
			concentration = 375;
		}else if (weight >= 24.1 and weight <= 30){
			concentration = 500;	
		}else {
			concentration = 750;
		}
	}
	
	cout << "Paciente com " << age << " ano(s) e com " << weight << " kilos" << endl;
	wcout << L"O recomendado é de " << concentration << "mg por dose" << " totalizando " <<  (concentration/500) * 20 << " gotas!";

	return 0;
}