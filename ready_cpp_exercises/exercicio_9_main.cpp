#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	long int delimiter;
	wcout << L"Entre com o número de posições nos vetores:" << endl;
	cin >> delimiter;
	int sector_a[delimiter], sector_b[delimiter], sector_c[delimiter], sector_d[delimiter], sector_e[delimiter], count_a=0, count_b=0;
	
	for(int count= 0; count < delimiter; count++){
		wcout << "Entre com o " << count + 1 << L"º Elemento do Vetor A: " << endl;
		cin >> sector_a[count];
		count_a = count_a + sector_a[count];
}
	for(int count= 0; count < delimiter; count++){	
	wcout << "Entre com o " << count + 1 << L"º Elemento do Vetor B: " << endl;
	cin >> sector_b[count];
	count_b = count_b + sector_b[count];
	sector_c[count] = sector_a[count] + sector_b[count];
	sector_d[count] = sector_a[count] - sector_b[count];
	sector_e[count] = sector_a[count] * sector_b[count];
}
	//Outputs
	
	wcout << endl << L"Os elementos do vetor A são: " << endl << "|";
	for(int count= 0; count < delimiter; count++){
		wcout << sector_a[count] << "|";
}

	wcout << endl << L"Os elementos do vetor B são: " << endl << "|";
	for(int count= 0; count < delimiter; count++){
		wcout << sector_b[count] << "|";
}

	wcout << endl << L"Os elementos do vetor C são: " << endl << "|";
	for(int count= 0; count < delimiter; count++){
		wcout << sector_c[count] << "|";
}

	wcout << endl << L"Os elementos do vetor D são: " << endl << "|";
	for(int count= 0; count < delimiter; count++){
		wcout << sector_d[count] << "|";
}

	wcout << endl << L"O produto escalar de A X B é: " << endl << "|";
	for(int count= 0; count < delimiter; count++){
		wcout << sector_e[count] << "|";
}
	
	wcout << endl << "A soma dos elementos Vetor A: " << count_a << endl << "A soma dos elementos Vetor B: " << count_b << endl;
	return 0;
}