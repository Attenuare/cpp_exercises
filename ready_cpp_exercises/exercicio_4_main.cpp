#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int plate, dessert, drink;

	cout << "Entre com a opção do seu prato!" << endl;
	cout << "Vegetariano - 180 Calorias (Digite 0)" << endl;
	cout << "Peixe       - 230 Calorias (Digite 1)" << endl;
	cout << "Frango      - 250 Calorias (Digite 2)" << endl;
	cout << "Carne       - 350 Calorias (Digite 3)" << endl;
	cout << "Nenhuma das opções         (Digite 4)" << endl;
	cin >> plate;

	cout << "Entre com a opção da sua sobremesa!" << endl;
	cout << "Abacaxi          - 75 Calorias (Digite 0)" << endl;
	cout << "Sorvete Diet     - 110 Calorias(Digite 1)" << endl;
	cout << "Mousse Diet      - 170 Calorias(Digite 2)" << endl;
	cout << "Mousse Chocolate - 200 Calorias(Digite 3)" << endl;
	cout << "Nenhuma das opções             (Digite 4)" << endl;
	cin >> dessert;

	cout << "Entre com a opção da sua bebida!" << endl;
	cout << "Chá               - 20 Calorias (Digite 0)" << endl;
	cout << "Suco de Laranja   - 70 Calorias (Digite 1)" << endl;
	cout << "Suco de Melão     - 100 Calorias(Digite 2)" << endl;
	cout << "Refrigerante Diet - 65 Calorias (Digite 3)" << endl;
	cout << "Nenhuma das opções              (Digite 4)" << endl;
	cin >> drink;
	
	switch(plate)
	{
		case 0: plate = 180;
			break;
		case 1: plate = 230;
			break;
		case 2: plate = 250;
			break;
		case 3: plate = 350;
			break;		
		case 4: plate = 0;
	};
	
	switch(dessert)
	{
		case 0: dessert = 75;
			break;
		case 1: dessert = 110;
			break;
		case 2: dessert = 170;
			break;
		case 3: dessert = 200;
			break;
		case 4: dessert = 0;
	};

	switch(drink)
	{
		case 0: drink = 20;
			break;
		case 1: drink = 70;
			break;
		case 2: drink = 100;
			break;
		case 3: drink = 65;
			break;
		case 4: drink = 0;
	};
	
	cout << "As calorias determinadas foram:" << endl << "Prato       = " << plate << " calorias" << endl;
	cout << "Sobremesa   = " << dessert << " calorias" << endl << "Bebida      = " << drink << " calorias" << endl;
	cout << "Totalizando = " << plate + dessert + drink << " calorias";
	return 0;
}